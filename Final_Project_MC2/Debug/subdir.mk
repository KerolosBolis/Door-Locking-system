################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../GPIO.c \
../Main_MC2.c \
../buzzer.c \
../dc_motor.c \
../external_eeprom.c \
../pwm_Driver.c \
../timer0.c \
../twi.c \
../uart.c 

OBJS += \
./GPIO.o \
./Main_MC2.o \
./buzzer.o \
./dc_motor.o \
./external_eeprom.o \
./pwm_Driver.o \
./timer0.o \
./twi.o \
./uart.o 

C_DEPS += \
./GPIO.d \
./Main_MC2.d \
./buzzer.d \
./dc_motor.d \
./external_eeprom.d \
./pwm_Driver.d \
./timer0.d \
./twi.d \
./uart.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


