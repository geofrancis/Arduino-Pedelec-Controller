
//created with Arduino Pedelec Configurator 1.40
//profile mk1
#define HARDWARE_REV 5
#ifndef CONFIG_H
#define CONFIG_H
#if ARDUINO < 100
#include <WProgram.h>
#else
#include <Arduino.h>
#endif
#include "switches_action.h"
#define DISPLAY_TYPE_NONE (1<<0)
#define DISPLAY_TYPE_NOKIA_5PIN (1<<1)
#define DISPLAY_TYPE_NOKIA_4PIN (1<<2)
#define DISPLAY_TYPE_NOKIA (DISPLAY_TYPE_NOKIA_5PIN|DISPLAY_TYPE_NOKIA_4PIN)
#define DISPLAY_TYPE_16X2_LCD_4BIT (1<<3)
#define DISPLAY_TYPE_16X2_SERIAL (1<<6)
#define DISPLAY_TYPE_16X2 (DISPLAY_TYPE_16X2_LCD_4BIT|DISPLAY_TYPE_16X2_SERIAL)
#define DISPLAY_TYPE_BMS (1<<5)
#define DISPLAY_TYPE_BMS3 (1<<7)
#define DISPLAY_TYPE_KINGMETER_618U (1<<4)
#define DISPLAY_TYPE_KINGMETER_901U (1<<8)
#define DISPLAY_TYPE_KINGMETER (DISPLAY_TYPE_KINGMETER_618U|DISPLAY_TYPE_KINGMETER_901U)
#define DISPLAY_TYPE_BAFANG_C961 (1<<9)
#define DISPLAY_TYPE_BAFANG_C965 (1<<10)
#define DISPLAY_TYPE_BAFANG (DISPLAY_TYPE_BAFANG_C961|DISPLAY_TYPE_BAFANG_C965)
#define DISPLAY_TYPE DISPLAY_TYPE_NOKIA_4PIN
const int serial_display_16x2_pin = 10;
const int serial_display_16x2_second_unused_pin = 11;
#define NOKIA_LCD_CONTRAST 190
#define DV_BATTERY
#define DV_GRAPHIC
#define DV_TIME
#define DV_ENVIRONMENT
#define DV_HUMAN
#define DV_ODOMETER
#define SERIAL_MODE_NONE (1<<0)
#define SERIAL_MODE_DEBUG (1<<1)
#define SERIAL_MODE_ANDROID (1<<2)
#define SERIAL_MODE_MMC (1<<3)
#define SERIAL_MODE_LOGVIEW (1<<4)
#define SERIAL_MODE_IOS (1<<5)
#define SERIAL_MODE_DISPLAYDEBUG    (1<<6)
#define SERIAL_MODE SERIAL_MODE_DEBUG
#define BLUETOOTH_MODE_NONE (1<<0)
#define BLUETOOTH_MODE_DEBUG (1<<1)
#define BLUETOOTH_MODE_ANDROID (1<<2)
#define BLUETOOTH_MODE_MMC (1<<3)
#define BLUETOOTH_MODE_LOGVIEW (1<<4)
#define BLUETOOTH_MODE_IOS (1<<5)
#define BLUETOOTH_MODE_DISPLAYDEBUG (1<<6)
#define BLUETOOTH_MODE BLUETOOTH_MODE_NONE
const switch_name MENU_BUTTON_UP = SWITCH_DISPLAY1;
const switch_name MENU_BUTTON_DOWN = SWITCH_DISPLAY2;
const sw_action SW_THROTTLE_SHORT_PRESS =ACTION_SET_SOFT_POTI;
const sw_action SW_THROTTLE_LONG_PRESS =ACTION_FIXED_THROTTLE_VALUE;
const sw_action SW_DISPLAY1_SHORT_PRESS =ACTION_DECREASE_POTI;
const sw_action SW_DISPLAY1_LONG_PRESS =ACTION_ENTER_MENU;
const sw_action SW_DISPLAY2_SHORT_PRESS =ACTION_INCREASE_POTI;
const sw_action SW_DISPLAY2_LONG_PRESS =ACTION_GEAR_SHIFT_TOGGLE_LOW_HIGH_AUTO;
const sw_action SW_POTI_SHORT_PRESS =ACTION_TOGGLE_LIGHTS;
const sw_action SW_POTI_LONG_PRESS =ACTION_PROFILE;
#define SUPPORT_BMP085
#define SUPPORT_RTC
#define SUPPORT_LIGHTS_SWITCH
#define SUPPORT_LIGHTS_SWITCH_MENU
#define SUPPORT_POTI_SWITCHES
#define SUPPORT_SWITCH_ON_POTI_PIN
const int poti_level_step_size_in_watts = 25;
const int poti_value_on_startup_in_watts = 250;
const int fixed_throttle_in_watts = 250;
const int poti_fixed_value_via_switch = 250;
#define SUPPORT_THROTTLE
#define SUPPORT_BRAKE
#define RESET_PID_ON_BRAKE
#define SUPPORT_PAS
const int torque_throttle_min=10;
const int torque_throttle_full=60;
#define TORQUE_ZERO 307;
#define TORQUE_AUTOZERO
#define BBS_GEARCHANGEPAUSE 2000
#define CONTROL_MODE_NORMAL 0
#define CONTROL_MODE_LIMIT_WH_PER_KM 1
#define CONTROL_MODE_TORQUE 2
#define CONTROL_MODE CONTROL_MODE_NORMAL
#define SUPPORT_MOTOR_GUESS
const int spd_idle=60;
#define SUPPORT_BATTERY_CHARGE_DETECTION
const byte battery_charged_min_voltage = 52.0;
#define SUPPORT_BATTERY_CHARGE_COUNTER
#define SUPPORT_GEAR_SHIFT
const char msg_gear_shift_low_gear[] PROGMEM = "15mph limit";
const char msg_gear_shift_high_gear[] PROGMEM = "30mph limit";
const char msg_gear_shift_auto_selection[] PROGMEM = "Unlimited";
const byte gear_shift_pin_low_gear = 5;
const byte gear_shift_pin_high_gear = 7;
#define SUPPORT_TEMP_SENSOR
const byte temp_pin=A3;
#define SUPPORT_THERMISTOR
const byte thermistor_pin=A2;
const float thermistor_t0=0.0033540164346805299345966795;
const float thermistor_b=0.0002531645569620253164556962;
const float thermistor_r=10;
const int temperature_cutoff_start=100;
const int temperature_cutoff_stop=120;
const int pas_tolerance=1;
const int throttle_offset=180;
const int throttle_max=870;
const int poti_offset=0;
const int poti_max=1023;
const int motor_offset=50;
const int motor_max=200;
const boolean startingaidenable = true;
const int startingaid_speed=6;
const float vmax=55.4;
const float vcutoff=40;
const float vemergency_shutdown =28;
const float wheel_circumference =1.322;
const byte wheel_magnets =1;
const int spd_max1=24;
const int spd_max2=26;
const int power_max=250;
const int power_poti_max=250;
const int thermal_limit=150;
const int thermal_safe_speed=6;
const int whkm_max=250;
const unsigned int idle_shutdown_secs =1800;
const unsigned int menu_idle_timeout_secs =66;
const double capacity =500;
const double capacity_2 =500;
const int spd_max1_2=55;
const int spd_max2_2=60;
const int power_max_2=700;
const int power_poti_max_2=700;
const int startingaid_speed_2=55;
const double pas_factor_min=0.5;
const double pas_factor_max=1.5;
const int pas_magnets=5;
const int pas_timeout=500;
const double cfg_pid_p=0;
const double cfg_pid_i=2;
const double cfg_pid_p_throttle =0.05;
const double cfg_pid_i_throttle =2.5;
const byte pulse_min=150;
const byte pulse_range=20;
const float voltage_amplitude=0.0587;
const float voltage_offset=0;
const float current_amplitude_R11=0.0741;
const float current_amplitude_R13=0.0741;
const float current_amplitude_R22=0.0741;
const float current_offset=0;
const float external_voltage_offset =0;
const float external_voltage_amplitude =0.0587;
const float external_current_offset =0;
const float external_current_amplitude =0.0489;
const int external_current_in =A2;
const int external_voltage_in =A0;
const char msg_welcome[] PROGMEM = "";
const char msg_shutdown[] PROGMEM = "";
const char msg_battery_charged[] PROGMEM = "Batt. charged! Resetting counters";
const char msg_idle_shutdown[] PROGMEM = "Idle shutdown. Good night.";
const char msg_emergency_shutdown[] PROGMEM = "Battery undervoltage detected. Emergency shutdown.";
const char msg_tempomat_reset[] PROGMEM = "Tempomat reset";
const char msg_unknown_action[] PROGMEM = "Unknown action!";
const char msg_activated[] PROGMEM = "Activated";
const char msg_deactivated[] PROGMEM = "Deactivated";
#endif

