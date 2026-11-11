

# for github actions and easier building i suppose
CXX = arm-none-eabi-g++
OBJCOPY = arm-none-eabi-objcopy
FLAGS = -mcpu=cortex-m0plus -mthumb -ffreestanding -fno-exceptions -fno-rtti -O0 -MMD 

all: SleemOS.bin

strcmp.o: src/strcmp.cpp
	$(CXX) $(FLAGS) -c src/strcmp.cpp -o strcmp.o

kernel.o: src/kernel.cpp
	$(CXX) $(FLAGS) -c src/kernel.cpp -o kernel.o

startup.o: src/startup.cpp
	$(CXX) $(FLAGS) -c src/startup.cpp -o startup.o

sleemint.o: src/sleemint.cpp
	$(CXX) $(FLAGS) -c src/sleemint.cpp -o sleemint.o

sleemfs.o: src/sleemfs.cpp
	$(CXX) $(FLAGS) -c src/sleemfs.cpp -o sleemfs.o

badapple.o: src/badapple.cpp
	$(CXX) $(FLAGS) -c src/badapple.cpp -o badapple.o

SleemOS.elf: startup.o kernel.o strcmp.o sleemfs.o sleemint.o badapple.o linker.ld
	$(CXX) -nostdlib -mcpu=cortex-m0plus -mthumb -T linker.ld startup.o kernel.o strcmp.o sleemint.o sleemfs.o badapple.o -lgcc -o SleemOS.elf

SleemOS.bin: SleemOS.elf
	$(OBJCOPY) -O binary SleemOS.elf SleemOS.bin

clean:
	rm -f *.o *.elf *.bin *.d

-include *.d 
