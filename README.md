# C for Embedded Systems (STM32)
Source code and firmware for STM32 embedded systems. Educational project based on LowByteProductions' bare-metal-series project.

To get started with c libraries: 
- git submodule init && git submodule update 
- git submodule add URL
- Install Arm-GNU-Toolchain
	- [Windows](https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/downloads)
	- Unix: gcc-arm-none-eabi / gcc-arm-embedded may be installed via package managers 
- Make sure c_cpp_properties.json has the correct compilerPath specified!
	- Differs between Windows, MacOS and Linux

- Makefile and launch.json may require editing as the project scales