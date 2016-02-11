################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/CannyEdgeDetectionDemo.cpp \
../src/ChangeColorSpaceDemo.cpp \
../src/CountingWithGuassianBlurDemo.cpp \
../src/DisplayImage.cpp \
../src/DisplayImageInGrayscale.cpp \
../src/ErosionAndDilationDemo.cpp \
../src/FindCountoursDemo.cpp \
../src/GuassianBlurDemo.cpp \
../src/OpeningMorphologicalOperationsDemo.cpp \
../src/WatershedAndDistanceTransform.cpp 

OBJS += \
./src/CannyEdgeDetectionDemo.o \
./src/ChangeColorSpaceDemo.o \
./src/CountingWithGuassianBlurDemo.o \
./src/DisplayImage.o \
./src/DisplayImageInGrayscale.o \
./src/ErosionAndDilationDemo.o \
./src/FindCountoursDemo.o \
./src/GuassianBlurDemo.o \
./src/OpeningMorphologicalOperationsDemo.o \
./src/WatershedAndDistanceTransform.o 

CPP_DEPS += \
./src/CannyEdgeDetectionDemo.d \
./src/ChangeColorSpaceDemo.d \
./src/CountingWithGuassianBlurDemo.d \
./src/DisplayImage.d \
./src/DisplayImageInGrayscale.d \
./src/ErosionAndDilationDemo.d \
./src/FindCountoursDemo.d \
./src/GuassianBlurDemo.d \
./src/OpeningMorphologicalOperationsDemo.d \
./src/WatershedAndDistanceTransform.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/local/include/opencv -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


