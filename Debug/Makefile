################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=$$$AVR_APP_PATH$$$
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=
LIB_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS := 


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../dxl_hal.c \
../dynamixel.c \
../GccApplication6.c \
../ik.c \
../legs.c \
../moves.c \
../roboplus.c \
../serial.c


PREPROCESSING_SRCS += 


ASM_SRCS += 


OBJS +=  \
dxl_hal.o \
dynamixel.o \
GccApplication6.o \
ik.o \
legs.o \
moves.o \
roboplus.o \
serial.o

OBJS_AS_ARGS +=  \
dxl_hal.o \
dynamixel.o \
GccApplication6.o \
ik.o \
legs.o \
moves.o \
roboplus.o \
serial.o

C_DEPS +=  \
dxl_hal.d \
dynamixel.d \
GccApplication6.d \
ik.d \
legs.d \
moves.d \
roboplus.d \
serial.d

C_DEPS_AS_ARGS +=  \
dxl_hal.d \
dynamixel.d \
GccApplication6.d \
ik.d \
legs.d \
moves.d \
roboplus.d \
serial.d

OUTPUT_FILE_PATH +=GccApplication6.elf

OUTPUT_FILE_PATH_AS_ARGS +=GccApplication6.elf

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

LIB_DEP+=  \
D:/summer/bioloid/embeded_c(cm510_v1.01)/lib/libdynamixel.a \
D:/summer/bioloid/embeded_c(cm510_v1.01)/lib/libserial.a

# AVR32/GNU C Compiler

















./%.o: .././%.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 3.4.2
	$(QUOTE)D:\Program Files\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.2.939\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -funsigned-char -funsigned-bitfields -DDEBUG  -O1 -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -mrelax -g2 -Wall -mmcu=atmega2561 -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<"
	@echo Finished building: $<
	



# AVR32/GNU Preprocessing Assembler



# AVR32/GNU Assembler




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP) $(LIB_DEP)
	@echo Building target: $@
	@echo Invoking: AVR/GNU Linker : 3.4.2
	$(QUOTE)D:\Program Files\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.2.939\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -Wl,-Map="GccApplication6.map" -Wl,--start-group -Wl,-lm -Wl,-ldynamixel -Wl,-lserial  -Wl,--end-group -Wl,-L"D:\summer\bioloid\embeded_c(cm510_v1.01)\lib"  -Wl,--gc-sections -mrelax -mmcu=atmega2561 
	@echo Finished building target: $@
	"D:\Program Files\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.2.939\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature  "GccApplication6.elf" "GccApplication6.hex"
	"D:\Program Files\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.2.939\avr8-gnu-toolchain\bin\avr-objcopy.exe" -j .eeprom  --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0  --no-change-warnings -O ihex "GccApplication6.elf" "GccApplication6.eep" || exit 0
	"D:\Program Files\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.2.939\avr8-gnu-toolchain\bin\avr-objdump.exe" -h -S "GccApplication6.elf" > "GccApplication6.lss"
	"D:\Program Files\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.2.939\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O srec -R .eeprom -R .fuse -R .lock -R .signature  "GccApplication6.elf" "GccApplication6.srec"
	"D:\Program Files\Atmel\Atmel Toolchain\AVR8 GCC\Native\3.4.2.939\avr8-gnu-toolchain\bin\avr-size.exe" "GccApplication6.elf"
	
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS) $(EXECUTABLES)  
	-$(RM) $(C_DEPS_AS_ARGS)   
	rm -rf "GccApplication6.elf" "GccApplication6.a" "GccApplication6.hex" "GccApplication6.lss" "GccApplication6.eep" "GccApplication6.map" "GccApplication6.srec"
	