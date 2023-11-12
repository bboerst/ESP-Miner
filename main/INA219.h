#ifndef INA219_H_
#define INA219_H_

#define INA219_I2CADDR_DEFAULT 0x40   ///< INA219 default i2c address
#define INA219_REG_CONFIG 0x00        ///< Configuration register
#define INA219_REG_SHUNT_VOLTAGE 0x01 ///< Power shunt voltage
#define INA219_REG_BUSVOLTAGE 0x02    ///< Bus voltage measurement register in mV
#define INA219_REG_POWER 0x03         ///< Power calculation register in mW
#define INA219_REG_CURRENT 0x04       ///< Current measurement register (signed) in mA
#define INA219_REG_CALIBRATION 0x05   ///< Overall system calibration

#define INA260_REG_MFG_UID 0xFE     ///< Manufacturer ID Register
#define INA260_REG_DIE_UID 0xFF     ///< Die ID and Revision Register

bool INA219_installed(void);
float INA219_read_current(void);
float INA219_read_voltage(void);
float INA219_read_power(void);

#endif /* INA219_H_ */
