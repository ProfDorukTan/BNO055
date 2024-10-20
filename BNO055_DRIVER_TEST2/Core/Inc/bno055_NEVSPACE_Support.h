#ifndef BNO055_NEVSPACE_SUPPORT_H   // Use a unique name based on the file name
#define BNO055_NEVSPACE_SUPPORT_H

/*---------------------------------------------------------------------------*
*  Includes
*---------------------------------------------------------------------------*/
#include "bno055.h"
#include "stm32f4xx_hal.h"
#include "main.h"
#include "Doruk_Helper_Functions.h"
/*----------------------------------------------------------------------------*
*  The following APIs are used for reading and writing of
*   sensor data using I2C communication
*----------------------------------------------------------------------------*/
#define BNO055_I2C_BUS_WRITE_ARRAY_INDEX ((u8)1)

s8 BNO055_I2C_bus_read(u8 dev_addr, u8 reg_addr, u8 *reg_data, u8 cnt);


s8 BNO055_I2C_bus_write(u8 dev_addr, u8 reg_addr, u8 *reg_data, u8 cnt);


s8 I2C_routine(void);


void BNO055_delay_msek(u32 msek);



s32 bno055_data_readout_template(void);


struct bno055_t NEVSPACE_BNO055;

/*
 * VARIABLE INITIALIZATIONS
 */

/* Variable used to return value of
 * communication routine*/
s32 comres = BNO055_ERROR;

/* variable used to set the power mode of the sensor*/
u8 power_mode = BNO055_INIT_VALUE;

/*********read raw accel data***********/
/* variable used to read the accel x data */
s16 accel_datax = BNO055_INIT_VALUE;

/* variable used to read the accel y data */
s16 accel_datay = BNO055_INIT_VALUE;

/* variable used to read the accel z data */
s16 accel_dataz = BNO055_INIT_VALUE;

/* variable used to read the accel xyz data */
struct bno055_accel_t accel_xyz;

/*********read raw mag data***********/
/* variable used to read the mag x data */
s16 mag_datax = BNO055_INIT_VALUE;

/* variable used to read the mag y data */
s16 mag_datay = BNO055_INIT_VALUE;

/* variable used to read the mag z data */
s16 mag_dataz = BNO055_INIT_VALUE;

/* structure used to read the mag xyz data */
struct bno055_mag_t mag_xyz;

/***********read raw gyro data***********/
/* variable used to read the gyro x data */
s16 gyro_datax = BNO055_INIT_VALUE;

/* variable used to read the gyro y data */
s16 gyro_datay = BNO055_INIT_VALUE;

/* variable used to read the gyro z data */
s16 gyro_dataz = BNO055_INIT_VALUE;

/* structure used to read the gyro xyz data */
struct bno055_gyro_t gyro_xyz;

/*************read raw Euler data************/
/* variable used to read the euler h data */
s16 euler_data_h = BNO055_INIT_VALUE;

/* variable used to read the euler r data */
s16 euler_data_r = BNO055_INIT_VALUE;

/* variable used to read the euler p data */
s16 euler_data_p = BNO055_INIT_VALUE;

/* structure used to read the euler hrp data */
struct bno055_euler_t euler_hrp;

/************read raw quaternion data**************/
/* variable used to read the quaternion w data */
s16 quaternion_data_w = BNO055_INIT_VALUE;

/* variable used to read the quaternion x data */
s16 quaternion_data_x = BNO055_INIT_VALUE;

/* variable used to read the quaternion y data */
s16 quaternion_data_y = BNO055_INIT_VALUE;

/* variable used to read the quaternion z data */
s16 quaternion_data_z = BNO055_INIT_VALUE;

/* structure used to read the quaternion wxyz data */
struct bno055_quaternion_t quaternion_wxyz;

/************read raw linear acceleration data***********/
/* variable used to read the linear accel x data */
s16 linear_accel_data_x = BNO055_INIT_VALUE;

/* variable used to read the linear accel y data */
s16 linear_accel_data_y = BNO055_INIT_VALUE;

/* variable used to read the linear accel z data */
s16 linear_accel_data_z = BNO055_INIT_VALUE;

/* structure used to read the linear accel xyz data */
struct bno055_linear_accel_t linear_acce_xyz;

/*****************read raw gravity sensor data****************/
/* variable used to read the gravity x data */
s16 gravity_data_x = BNO055_INIT_VALUE;

/* variable used to read the gravity y data */
s16 gravity_data_y = BNO055_INIT_VALUE;

/* variable used to read the gravity z data */
s16 gravity_data_z = BNO055_INIT_VALUE;

/* structure used to read the gravity xyz data */
struct bno055_gravity_t gravity_xyz;

/*************read accel converted data***************/
/* variable used to read the accel x data output as m/s2 or mg */
double d_accel_datax = BNO055_INIT_VALUE;

/* variable used to read the accel y data output as m/s2 or mg */
double d_accel_datay = BNO055_INIT_VALUE;

/* variable used to read the accel z data output as m/s2 or mg */
double d_accel_dataz = BNO055_INIT_VALUE;

/* structure used to read the accel xyz data output as m/s2 or mg */
struct bno055_accel_double_t d_accel_xyz;

/******************read mag converted data********************/
/* variable used to read the mag x data output as uT*/
double d_mag_datax = BNO055_INIT_VALUE;

/* variable used to read the mag y data output as uT*/
double d_mag_datay = BNO055_INIT_VALUE;

/* variable used to read the mag z data output as uT*/
double d_mag_dataz = BNO055_INIT_VALUE;

/* structure used to read the mag xyz data output as uT*/
struct bno055_mag_double_t d_mag_xyz;

/*****************read gyro converted data************************/
/* variable used to read the gyro x data output as dps or rps */
double d_gyro_datax = BNO055_INIT_VALUE;

/* variable used to read the gyro y data output as dps or rps */
double d_gyro_datay = BNO055_INIT_VALUE;

/* variable used to read the gyro z data output as dps or rps */
double d_gyro_dataz = BNO055_INIT_VALUE;

/* structure used to read the gyro xyz data output as dps or rps */
struct bno055_gyro_double_t d_gyro_xyz;

/*******************read euler converted data*******************/

/* variable used to read the euler h data output
 * as degree or radians*/
double d_euler_data_h = BNO055_INIT_VALUE;

/* variable used to read the euler r data output
 * as degree or radians*/
double d_euler_data_r = BNO055_INIT_VALUE;

/* variable used to read the euler p data output
 * as degree or radians*/
double d_euler_data_p = BNO055_INIT_VALUE;

/* structure used to read the euler hrp data output
 * as as degree or radians */
struct bno055_euler_double_t d_euler_hpr;

/*********read linear acceleration converted data**********/
/* variable used to read the linear accel x data output as m/s2*/
double d_linear_accel_datax = BNO055_INIT_VALUE;

/* variable used to read the linear accel y data output as m/s2*/
double d_linear_accel_datay = BNO055_INIT_VALUE;

/* variable used to read the linear accel z data output as m/s2*/
double d_linear_accel_dataz = BNO055_INIT_VALUE;

/* structure used to read the linear accel xyz data output as m/s2*/
struct bno055_linear_accel_double_t d_linear_accel_xyz;

/********************Gravity converted data**********************/
/* variable used to read the gravity sensor x data output as m/s2*/
double d_gravity_data_x = BNO055_INIT_VALUE;

/* variable used to read the gravity sensor y data output as m/s2*/
double d_gravity_data_y = BNO055_INIT_VALUE;

/* variable used to read the gravity sensor z data output as m/s2*/
double d_gravity_data_z = BNO055_INIT_VALUE;

/* structure used to read the gravity xyz data output as m/s2*/
struct bno055_gravity_double_t d_gravity_xyz;

void NEVSPACE_BNO055_init(void){
    /*---------------------------------------------------------------------------*
     *********************** START INITIALIZATION ************************
     *--------------------------------------------------------------------------*/

    /*  Based on the user need configure I2C interface.
     *  It is example code to explain how to use the bno055 API*/
    I2C_routine();

    /*--------------------------------------------------------------------------*
     *  This API used to assign the value/reference of
     *  the following parameters
     *  I2C address
     *  Bus Write
     *  Bus read
     *  Chip id
     *  Page id
     *  Accel revision id
     *  Mag revision id
     *  Gyro revision id
     *  Boot loader revision id
     *  Software revision id
     *-------------------------------------------------------------------------*/
    comres = bno055_init(&NEVSPACE_BNO055);

    /*  For initializing the BNO sensor it is required to the operation mode
     * of the sensor as NORMAL
     * Normal mode can set from the register
     * Page - page0
     * register - 0x3E
     * bit positions - 0 and 1*/
    power_mode = BNO055_POWER_MODE_NORMAL;

    /* set the power mode as NORMAL*/
    comres += bno055_set_power_mode(power_mode);

    /*----------------------------------------------------------------*
     ************************* END INITIALIZATION *************************
     *-----------------------------------------------------------------*/

}

void NEVSPACE_BNO055_deinit(void){
	 /*-----------------------------------------------------------------------*
	     ************************* START DE-INITIALIZATION ***********************
	     *-------------------------------------------------------------------------*/

	    /*  For de - initializing the BNO sensor it is required
	     * to the operation mode of the sensor as SUSPEND
	     * Suspend mode can set from the register
	     * Page - page0
	     * register - 0x3E
	     * bit positions - 0 and 1*/
	    power_mode = BNO055_POWER_MODE_SUSPEND;

	    /* set the power mode as SUSPEND*/
	    comres += bno055_set_power_mode(power_mode);

	    /*---------------------------------------------------------------------*
	    ************************* END DE-INITIALIZATION **********************
	    *---------------------------------------------------------------------*/
}

void NEVSPACE_BNO055_fused_data(void) {
    u8 BNO_055_MODE = BNO055_INIT_VALUE;

    // Get the current mode
    bno055_get_operation_mode(&BNO_055_MODE);

    // Set mode to NDOF if it isn't already
    if (BNO_055_MODE != BNO055_OPERATION_MODE_NDOF) {
        bno055_set_operation_mode(BNO055_OPERATION_MODE_NDOF);
    }

    // Fetch all sensor data
    bno055_convert_double_linear_accel_xyz_msq(&d_linear_accel_xyz);
    bno055_convert_double_gyro_xyz_dps(&d_gyro_xyz);
    bno055_convert_double_mag_xyz_uT(&d_mag_xyz);
    bno055_convert_double_euler_hpr_deg(&d_euler_hpr);
    bno055_convert_double_gravity_xyz_msq(&d_gravity_xyz);
    bno055_read_quaternion_wxyz(&quaternion_wxyz);

    // Print the fused data with clearer formatting
    TT_print_line_reset(
        "Linear Acceleration (m/s^2):\r\n"
        "  X: %lf, Y: %lf, Z: %lf\r\n\r\n"
        "Gyro (dps):\r\n"
        "  X: %lf, Y: %lf, Z: %lf\r\n\r\n"
        "Mag (uT):\r\n"
        "  X: %lf, Y: %lf, Z: %lf\r\n\r\n"
        "Euler Angles (degrees):\r\n"
        "  Heading: %lf, Pitch: %lf, Roll: %lf\r\n\r\n"
        "Gravity (m/s^2):\r\n"
        "  X: %lf, Y: %lf, Z: %lf\r\n\r\n"
        "Quaternion:\r\n"
        "  W: %d, X: %d, Y: %d, Z: %d\r\n",
        // Linear Acceleration
        d_linear_accel_xyz.x, d_linear_accel_xyz.y, d_linear_accel_xyz.z,
        // Gyroscope
        d_gyro_xyz.x, d_gyro_xyz.y, d_gyro_xyz.z,
        // Magnetometer
        d_mag_xyz.x, d_mag_xyz.y, d_mag_xyz.z,
        // Euler Angles
        d_euler_hpr.h, d_euler_hpr.p, d_euler_hpr.r,
        // Gravity
        d_gravity_xyz.x, d_gravity_xyz.y, d_gravity_xyz.z,
        // Quaternion
        quaternion_wxyz.w, quaternion_wxyz.x, quaternion_wxyz.y, quaternion_wxyz.z
    );
}



#endif




