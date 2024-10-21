# Nevspace BNO055 Sensor Integration Project

## Project Overview

This project is part of the **Nevspace** project **Bitirim**, focusing on the integration and utilization of the Bosch BNO055 sensor in a **secondary rocket controller**. The goal of the project is to familiarize the team with the BNO055 sensor and its capabilities, laying the groundwork for future use in various rocket systems.

## Purpose

The BNO055 sensor is an absolute orientation sensor that provides acceleration, gyroscope, magnetometer, and orientation data. This project aims to:
- Explore the functionality of the sensor.
- Develop code to interact with and retrieve data from the sensor.
- Establish a framework for integrating sensor data into a larger rocket control system.

## Components

- **BNO055 Sensor**: Provides orientation and movement data.
- **STM32 Microcontroller**: Used for interfacing with the sensor and reading data via I2C.
- **UART Serial Communication**: Output data to a terminal for testing and verification.

## Structure

The project includes the following components:
- `bno055_NEVSPACE_Support.h`: Custom helper functions for using the BNO055 sensor, built on top of the standard BNO055 drivers.
- **Main Application**: Initializes the sensor, reads data, and outputs sensor values to the terminal.

## Usage

This project is a template for working with the BNO055 sensor. The current setup reads various sensor data such as:
- Linear acceleration
- Gyroscope values
- Magnetometer values
- Euler angles (orientation)
- Quaternion data

## Future Development

This is a multiproject framework and will evolve as different components and systems are added. The current project focuses on establishing the groundwork for sensor data acquisition. Future iterations will expand into full rocket integration, sensor fusion, and advanced navigation systems.
