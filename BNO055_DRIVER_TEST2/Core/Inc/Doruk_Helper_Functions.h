/*
 * Doruk_Helper_Functions.h
 *
 *  Created on: Oct 21, 2024
 *      Author: Doruk Tan Atila
 */

#ifndef INC_DORUK_HELPER_FUNCTIONS_H_
#define INC_DORUK_HELPER_FUNCTIONS_H_


#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*
 * Functions to setup serial comms to Teraterm
 * Call teraterm_init in the beginning with huart used for serail comms
 *
 */

UART_HandleTypeDef *TT_huart;

void TT_init(UART_HandleTypeDef *huart){
	TT_huart = huart;
}
void TT_print_line(const char *format, ...) {
    va_list args;
    char *buffer;
    int len;

    // Initialize the variable argument list
    va_start(args, format);

    // Calculate the required length for the formatted string
    len = vsnprintf(NULL, 0, format, args) + 3;  // Adding space for '\r\n'
    va_end(args);

    // Allocate memory for the buffer
    buffer = (char *)malloc(len);

    if (buffer == NULL) {
        // Handle memory allocation failure
        return;
    }

    // Initialize the variable argument list again for actual formatting
    va_start(args, format);
    vsnprintf(buffer, len - 3, format, args);  // Format the string
    va_end(args);

    // Append \r\n at the end of the formatted string
    strcat(buffer, "\r\n");

    // Transmit the string via UART
    HAL_UART_Transmit(TT_huart, (uint8_t*)buffer, strlen(buffer), HAL_MAX_DELAY);

    // Free the allocated memory
    free(buffer);
}


void TT_print_line_reset(const char *format, ...) {
    va_list args;
    char *buffer;
    int len;

    // Send the escape sequence to clear the screen and move the cursor to the top
    HAL_UART_Transmit(TT_huart, (uint8_t*)"\033[2J\033[H", strlen("\033[2J\033[H"), HAL_MAX_DELAY);

    // Initialize the variable argument list
    va_start(args, format);

    // Calculate the required length for the formatted string
    len = vsnprintf(NULL, 0, format, args) + 3;  // Adding space for '\r\n'
    va_end(args);

    // Allocate memory for the buffer
    buffer = (char *)malloc(len);

    if (buffer == NULL) {
        // Handle memory allocation failure
        return;
    }

    // Initialize the variable argument list again for actual formatting
    va_start(args, format);
    vsnprintf(buffer, len - 3, format, args);  // Format the string
    va_end(args);

    // Append \r\n at the end of the formatted string
    strcat(buffer, "\r\n");

    // Transmit the string via UART
    HAL_UART_Transmit(TT_huart, (uint8_t*)buffer, strlen(buffer), HAL_MAX_DELAY);

    // Free the allocated memory
    free(buffer);
}





#endif /* INC_DORUK_HELPER_FUNCTIONS_H_ */
