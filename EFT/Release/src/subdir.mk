################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Coeficiente.cpp \
../src/Coeficiente_test.cpp \
../src/EFT.cpp \
../src/Funcao.cpp \
../src/Funcao_test.cpp \
../src/Newton.cpp \
../src/Newton_test.cpp 

OBJS += \
./src/Coeficiente.o \
./src/Coeficiente_test.o \
./src/EFT.o \
./src/Funcao.o \
./src/Funcao_test.o \
./src/Newton.o \
./src/Newton_test.o 

CPP_DEPS += \
./src/Coeficiente.d \
./src/Coeficiente_test.d \
./src/EFT.d \
./src/Funcao.d \
./src/Funcao_test.d \
./src/Newton.d \
./src/Newton_test.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


