################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Loop/Read/Read.c 

OBJS += \
./src/Loop/Read/Read.o 

C_DEPS += \
./src/Loop/Read/Read.d 


# Each subdirectory must supply rules for building sources it contributes
src/Loop/Read/%.o: ../src/Loop/Read/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -Os -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wall -Wextra  -g3 -DEK_TM4C123GXL -DPART_TM4C123GH6PM -DTARGET_IS_BLIZZARD_RB1 -DUART_BUFFERED -DPART_IS_BLIZZARD_RA1 -I"C:\ti\TivaWare_C_Series-2.1.2.111" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


