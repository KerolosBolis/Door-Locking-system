################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../GPIO.c \
../KeypadDriver.c \
../LCD.c \
../Main_MC1.c \
../timer0.c \
../uart.c 

OBJS += \
./GPIO.o \
./KeypadDriver.o \
./LCD.o \
./Main_MC1.o \
./timer0.o \
./uart.o 

C_DEPS += \
./GPIO.d \
./KeypadDriver.d \
./LCD.d \
./Main_MC1.d \
./timer0.d \
./uart.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega16 -DF_CPU=1000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


