################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Product/Money.cpp \
../Product/VendingMachine.cpp 

OBJS += \
./Product/Money.o \
./Product/VendingMachine.o 

CPP_DEPS += \
./Product/Money.d \
./Product/VendingMachine.d 


# Each subdirectory must supply rules for building sources it contributes
Product/%.o: ../Product/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -I"C:\Indigo\workspace\CppUTest-v3.3\include" -I/cygdrive/c/Indigo/workspace/CppUTest-v3.3/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


