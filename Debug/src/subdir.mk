################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ChangeColorSpace.cpp \
../src/DisplayImage.cpp \
../src/DisplayImageInGrayscale.cpp 

OBJS += \
./src/ChangeColorSpace.o \
./src/DisplayImage.o \
./src/DisplayImageInGrayscale.o 

CPP_DEPS += \
./src/ChangeColorSpace.d \
./src/DisplayImage.d \
./src/DisplayImageInGrayscale.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/local/include/opencv -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


