#ifndef BNO055_NEVSPACE_SUPPORT_H   // Use a unique name based on the file name
#define BNO055_NEVSPACE_SUPPORT_H

/*---------------------------------------------------------------------------*
*  Includes
*---------------------------------------------------------------------------*/
#include "bno055.h"
#include "stm32f4xx_hal.h"
#include "main.h"
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
s32 NEVSPACE_BNO055_read_all_print_all_TEST(void)
{

    /************************* START READ RAW SENSOR DATA****************/

    /*  Using BNO055 sensor we can read the following sensor data and
     * virtual sensor data
     * Sensor data:
     * Accel
     * Mag
     * Gyro
     * Virtual sensor data
     * Euler
     * Quaternion
     * Linear acceleration
     * Gravity sensor */

    /*  For reading sensor raw data it is required to set the
     * operation modes of the sensor
     * operation mode can set from the register
     * page - page0
     * register - 0x3D
     * bit - 0 to 3
     * for sensor data read following operation mode have to set
     * SENSOR MODE
     * 0x01 - BNO055_OPERATION_MODE_ACCONLY
     * 0x02 - BNO055_OPERATION_MODE_MAGONLY
     * 0x03 - BNO055_OPERATION_MODE_GYRONLY
     * 0x04 - BNO055_OPERATION_MODE_ACCMAG
     * 0x05 - BNO055_OPERATION_MODE_ACCGYRO
     * 0x06 - BNO055_OPERATION_MODE_MAGGYRO
     * 0x07 - BNO055_OPERATION_MODE_AMG
     * based on the user need configure the operation mode*/
    comres += bno055_set_operation_mode(BNO055_OPERATION_MODE_AMG);

    /*  Raw accel X, Y and Z data can read from the register
     * page - page 0
     * register - 0x08 to 0x0D*/
    comres += bno055_read_accel_x(&accel_datax);
    comres += bno055_read_accel_y(&accel_datay);
    comres += bno055_read_accel_z(&accel_dataz);
    comres += bno055_read_accel_xyz(&accel_xyz);

    // Print accelerometer data
    printf("Accelerometer X: %d, Y: %d, Z: %d\r\n", accel_datax, accel_datay, accel_dataz);
    printf("Accelerometer (struct) - X: %d, Y: %d, Z: %d\r\n", accel_xyz.x, accel_xyz.y, accel_xyz.z);



    /*  Raw mag X, Y and Z data can read from the register
     * page - page 0
     * register - 0x0E to 0x13*/
    comres += bno055_read_mag_x(&mag_datax);
    comres += bno055_read_mag_y(&mag_datay);
    comres += bno055_read_mag_z(&mag_dataz);
    comres += bno055_read_mag_xyz(&mag_xyz);

    // Print magnetometer data
    printf("Magnetometer X: %d, Y: %d, Z: %d\r\n", mag_datax, mag_datay, mag_dataz);
    printf("Magnetometer (struct) X: %d, Y: %d, Z: %d\r\n", mag_xyz.x, mag_xyz.y, mag_xyz.z);

    /*  Raw gyro X, Y and Z data can read from the register
     * page - page 0
     * register - 0x14 to 0x19*/
    comres += bno055_read_gyro_x(&gyro_datax);
    comres += bno055_read_gyro_y(&gyro_datay);
    comres += bno055_read_gyro_z(&gyro_dataz);
    comres += bno055_read_gyro_xyz(&gyro_xyz);

    // Print gyroscope data
    printf("Gyroscope X: %d, Y: %d, Z: %d\r\n", gyro_datax, gyro_datay, gyro_dataz);
    printf("Gyroscope (struct) X: %d, Y: %d, Z: %d\r\n", gyro_xyz.x, gyro_xyz.y, gyro_xyz.z);

    /************************* END READ RAW SENSOR DATA****************/

    /************************* START READ RAW FUSION DATA ********
     * For reading fusion data it is required to set the
     * operation modes of the sensor
     * operation mode can set from the register
     * page - page0
     * register - 0x3D
     * bit - 0 to 3
     * for sensor data read following operation mode have to set
     * FUSION MODE
     * 0x08 - BNO055_OPERATION_MODE_IMUPLUS
     * 0x09 - BNO055_OPERATION_MODE_COMPASS
     * 0x0A - BNO055_OPERATION_MODE_M4G
     * 0x0B - BNO055_OPERATION_MODE_NDOF_FMC_OFF
     * 0x0C - BNO055_OPERATION_MODE_NDOF
     * based on the user need configure the operation mode*/
    comres += bno055_set_operation_mode(BNO055_OPERATION_MODE_NDOF);

    /*  Raw Euler H, R and P data can read from the register
     * page - page 0
     * register - 0x1A to 0x1E */
    comres += bno055_read_euler_h(&euler_data_h);
    comres += bno055_read_euler_r(&euler_data_r);
    comres += bno055_read_euler_p(&euler_data_p);
    comres += bno055_read_euler_hrp(&euler_hrp);

    // Print Euler angles
    printf("Euler H: %d, R: %d, P: %d\r\n", euler_data_h, euler_data_r, euler_data_p);
    printf("Euler (struct) H: %d, R: %d, P: %d\r\n", euler_hrp.h, euler_hrp.r, euler_hrp.p);



    /*  Raw Quaternion W, X, Y and Z data can read from the register
     * page - page 0
     * register - 0x20 to 0x27 */
    comres += bno055_read_quaternion_w(&quaternion_data_w);
    comres += bno055_read_quaternion_x(&quaternion_data_x);
    comres += bno055_read_quaternion_y(&quaternion_data_y);
    comres += bno055_read_quaternion_z(&quaternion_data_z);
    comres += bno055_read_quaternion_wxyz(&quaternion_wxyz);

    // Print Quaternion data
    printf("Quaternion W: %d, X: %d, Y: %d, Z: %d\r\n", quaternion_data_w, quaternion_data_x, quaternion_data_y, quaternion_data_z);
    printf("Quaternion (struct) W: %d, X: %d, Y: %d, Z: %d\r\n", quaternion_wxyz.w, quaternion_wxyz.x, quaternion_wxyz.y, quaternion_wxyz.z);


    /*  Raw Linear accel X, Y and Z data can read from the register
     * page - page 0
     * register - 0x28 to 0x2D */
    comres += bno055_read_linear_accel_x(&linear_accel_data_x);
    comres += bno055_read_linear_accel_y(&linear_accel_data_y);
    comres += bno055_read_linear_accel_z(&linear_accel_data_z);
    comres += bno055_read_linear_accel_xyz(&linear_acce_xyz);

    // Print Linear acceleration data
    printf("Linear Accel X: %d, Y: %d, Z: %d\r\n", linear_accel_data_x, linear_accel_data_y, linear_accel_data_z);
    printf("Linear Accel (struct) X: %d, Y: %d, Z: %d\r\n", linear_acce_xyz.x, linear_acce_xyz.y, linear_acce_xyz.z);


    /*  Raw Gravity sensor X, Y and Z data can read from the register
     * page - page 0
     * register - 0x2E to 0x33 */
    comres += bno055_read_gravity_x(&gravity_data_x);
    comres += bno055_read_gravity_y(&gravity_data_y);
    comres += bno055_read_gravity_z(&gravity_data_z);
    comres += bno055_read_gravity_xyz(&gravity_xyz);

    // Print Gravity sensor data
    printf("Gravity X: %d, Y: %d, Z: %d\r\n", gravity_data_x, gravity_data_y, gravity_data_z);
    printf("Gravity (struct) X: %d, Y: %d, Z: %d\r\n", gravity_xyz.x, gravity_xyz.y, gravity_xyz.z);


    /************************* END READ RAW FUSION DATA  ************/
    /******************START READ CONVERTED SENSOR DATA****************/

    /*  API used to read accel data output as double  - m/s2 and mg
     * float functions also available in the BNO055 API */
    comres += bno055_convert_double_accel_x_msq(&d_accel_datax);
    comres += bno055_convert_double_accel_x_mg(&d_accel_datax);
    comres += bno055_convert_double_accel_y_msq(&d_accel_datay);
    comres += bno055_convert_double_accel_y_mg(&d_accel_datay);
    comres += bno055_convert_double_accel_z_msq(&d_accel_dataz);
    comres += bno055_convert_double_accel_z_mg(&d_accel_dataz);
    comres += bno055_convert_double_accel_xyz_msq(&d_accel_xyz);
    comres += bno055_convert_double_accel_xyz_mg(&d_accel_xyz);

    printf("Accel X (m/s²): %lf, X (mg): %lf\r\n", d_accel_datax, d_accel_datax);
    printf("Accel Y (m/s²): %lf, Y (mg): %lf\r\n", d_accel_datay, d_accel_datay);
    printf("Accel Z (m/s²): %lf, Z (mg): %lf\r\n", d_accel_dataz, d_accel_dataz);
    printf("Accel XYZ (m/s²): X: %lf, Y: %lf, Z: %lf\r\n", d_accel_xyz.x, d_accel_xyz.y, d_accel_xyz.z);


    /*  API used to read mag data output as double  - uT(micro Tesla)
     * float functions also available in the BNO055 API */
    comres += bno055_convert_double_mag_x_uT(&d_mag_datax);
    comres += bno055_convert_double_mag_y_uT(&d_mag_datay);
    comres += bno055_convert_double_mag_z_uT(&d_mag_dataz);
    comres += bno055_convert_double_mag_xyz_uT(&d_mag_xyz);

    // Print Magnetic data (uT)
    printf("Mag X (uT): %lf, Y (uT): %lf, Z (uT): %lf\r\n", d_mag_datax, d_mag_datay, d_mag_dataz);
    printf("Mag XYZ (uT): X: %lf, Y: %lf, Z: %lf\r\n", d_mag_xyz.x, d_mag_xyz.y, d_mag_xyz.z);


    /*  API used to read gyro data output as double  - dps and rps
     * float functions also available in the BNO055 API */
    comres += bno055_convert_double_gyro_x_dps(&d_gyro_datax);
    comres += bno055_convert_double_gyro_y_dps(&d_gyro_datay);
    comres += bno055_convert_double_gyro_z_dps(&d_gyro_dataz);
    comres += bno055_convert_double_gyro_x_rps(&d_gyro_datax);
    comres += bno055_convert_double_gyro_y_rps(&d_gyro_datay);
    comres += bno055_convert_double_gyro_z_rps(&d_gyro_dataz);
    comres += bno055_convert_double_gyro_xyz_dps(&d_gyro_xyz);
    comres += bno055_convert_double_gyro_xyz_rps(&d_gyro_xyz);

    // Print Gyro data (dps and rps)
    printf("Gyro X (dps): %lf, X (rps): %lf\r\n", d_gyro_datax, d_gyro_datax);
    printf("Gyro Y (dps): %lf, Y (rps): %lf\r\n", d_gyro_datay, d_gyro_datay);
    printf("Gyro Z (dps): %lf, Z (rps): %lf\r\n", d_gyro_dataz, d_gyro_dataz);
    printf("Gyro XYZ (dps): X: %lf, Y: %lf, Z: %lf\r\n", d_gyro_xyz.x, d_gyro_xyz.y, d_gyro_xyz.z);


    /*  API used to read Euler data output as double  - degree and radians
     * float functions also available in the BNO055 API */
    comres += bno055_convert_double_euler_h_deg(&d_euler_data_h);
    comres += bno055_convert_double_euler_r_deg(&d_euler_data_r);
    comres += bno055_convert_double_euler_p_deg(&d_euler_data_p);
    comres += bno055_convert_double_euler_h_rad(&d_euler_data_h);
    comres += bno055_convert_double_euler_r_rad(&d_euler_data_r);
    comres += bno055_convert_double_euler_p_rad(&d_euler_data_p);
    comres += bno055_convert_double_euler_hpr_deg(&d_euler_hpr);
    comres += bno055_convert_double_euler_hpr_rad(&d_euler_hpr);

    // Print Euler angles (degrees and radians)
    printf("Euler H (deg): %lf, H (rad): %lf\r\n", d_euler_data_h, d_euler_data_h);
    printf("Euler R (deg): %lf, R (rad): %lf\r\n", d_euler_data_r, d_euler_data_r);
    printf("Euler P (deg): %lf, P (rad): %lf\r\n", d_euler_data_p, d_euler_data_p);
    printf("Euler HPR (deg): H: %lf, P: %lf, R: %lf\r\n", d_euler_hpr.h, d_euler_hpr.p, d_euler_hpr.r);


    /*  API used to read Linear acceleration data output as m/s2
     * float functions also available in the BNO055 API */
    comres += bno055_convert_double_linear_accel_x_msq(&d_linear_accel_datax);
    comres += bno055_convert_double_linear_accel_y_msq(&d_linear_accel_datay);
    comres += bno055_convert_double_linear_accel_z_msq(&d_linear_accel_dataz);
    comres += bno055_convert_double_linear_accel_xyz_msq(&d_linear_accel_xyz);

    // Print Linear acceleration data (m/s²)
    printf("Linear Accel X (m/s²): %lf, Y (m/s²): %lf, Z (m/s²): %lf\r\n", d_linear_accel_datax, d_linear_accel_datay, d_linear_accel_dataz);
    printf("Linear Accel XYZ (m/s²): X: %lf, Y: %lf, Z: %lf\r\n", d_linear_accel_xyz.x, d_linear_accel_xyz.y, d_linear_accel_xyz.z);


    /*  API used to read Gravity sensor data output as m/s2
     * float functions also available in the BNO055 API */
    comres += bno055_convert_gravity_double_x_msq(&d_gravity_data_x);
    comres += bno055_convert_gravity_double_y_msq(&d_gravity_data_y);
    comres += bno055_convert_gravity_double_z_msq(&d_gravity_data_z);
    comres += bno055_convert_double_gravity_xyz_msq(&d_gravity_xyz);

    // Print Gravity sensor data (m/s²)
    printf("Gravity X (m/s²): %lf, Y (m/s²): %lf, Z (m/s²): %lf\r\n", d_gravity_data_x, d_gravity_data_y, d_gravity_data_z);
    printf("Gravity XYZ (m/s²): X: %lf, Y: %lf, Z: %lf\r\n", d_gravity_xyz.x, d_gravity_xyz.y, d_gravity_xyz.z);


    return comres;
}

s32 NEVSPACE_BNO055_gyro_test(void){
	comres += bno055_set_operation_mode(BNO055_OPERATION_MODE_AMG);
    comres += bno055_read_gyro_xyz(&gyro_xyz);
    printf("Gyroscope (struct) X: %d, Y: %d, Z: %d\r\n\n", gyro_xyz.x, gyro_xyz.y, gyro_xyz.z);

    comres += bno055_set_operation_mode(BNO055_OPERATION_MODE_NDOF);
    comres += bno055_convert_double_gyro_xyz_dps(&d_gyro_xyz);
    printf("Gyro XYZ (dps): X: %lf, Y: %lf, Z: %lf\r\n\n", d_gyro_xyz.x, d_gyro_xyz.y, d_gyro_xyz.z);

    return comres;
}

s32 NEVSPACE_BNO055_accelerometer_test(void){
    comres += bno055_set_operation_mode(BNO055_OPERATION_MODE_NDOF);
    comres += bno055_read_linear_accel_xyz(&linear_acce_xyz);
	printf("Linear Accel (struct) X: %d, Y: %d, Z: %d\r\n\n", linear_acce_xyz.x, linear_acce_xyz.y, linear_acce_xyz.z);

	comres += bno055_convert_double_linear_accel_xyz_msq(&d_linear_accel_xyz);
    printf("Linear Accel XYZ (m/s²): X: %lf, Y: %lf, Z: %lf\r\n\n", d_linear_accel_xyz.x, d_linear_accel_xyz.y, d_linear_accel_xyz.z);




    return comres;
}

#endif




