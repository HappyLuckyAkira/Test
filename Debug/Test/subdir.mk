################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Test/Money_test.cpp \
../Test/RunAllTest.cpp \
../Test/VendingMachine_test.cpp 

OBJS += \
./Test/Money_test.o \
./Test/RunAllTest.o \
./Test/VendingMachine_test.o 

CPP_DEPS += \
./Test/Money_test.d \
./Test/RunAllTest.d \
./Test/VendingMachine_test.d 


# Each subdirectory must supply rules for building sources it contributes
Test/%.o: ../Test/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -I"C:\Indigo\workspace\CppUTest-v3.3\include" -I/cygdrive/c/Indigo/workspace/CppUTest-v3.3/include -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


