
# enable C and assembler source
enable_language(C ASM CXX)
set(CMAKE_CXX_STANDARD 17)

### BEGIN CMAKE_TOOLCHAIN_FILE
# "Generic" is used when cross compiling
set(CMAKE_SYSTEM_NAME Generic)

# Set the EW installation root directory
set(EW_ROOT_DIR "C:/Program Files (x86)/IAR Systems/Embedded Workbench 8.3/arm")

# set common compiler flags for all build types
set(CMAKE_CXX_FLAGS  "--no_cse --no_unroll --no_code_motion --no_tbaa --no_clustering --no_scheduling --endian=little --cpu=Cortex-M4 -e --fpu=VFPv4_sp --c++ --no_exceptions --no_rtti")
set(CMAKE_C_FLAGS  "--no_cse --no_unroll --no_code_motion --no_tbaa --no_clustering --no_scheduling --endian=little --cpu=Cortex-M4 -e --fpu=VFPv4_sp ")
set(CMAKE_ASM_FLAGS "-s+ -r -t8 --cpu Cortex-M4 --fpu VFPv4_sp ")

# Set up the CMake and Cpp compilers. But it is already set in high level project settings
set(CMAKE_C_COMPILER "${EW_ROOT_DIR}/bin/iccarm.exe")
set(CMAKE_CXX_COMPILER "${EW_ROOT_DIR}/bin/iccarm.exe" )
# Set up the CMake asm compilers
set(CMAKE_ASM_COMPILER "${EW_ROOT_DIR}/bin/iasmarm.exe")

set(CMAKE_EXECUTABLE_SUFFIX ".elf")
set(LINKER_SCRIPT "${CMAKE_SOURCE_DIR}/stm32f411xE.icf")
set(CMAKE_CXX_LINK_FLAGS "--semihosting --config ${LINKER_SCRIPT}")

#Set IAR setting for bedug build
if (CMAKE_BUILD_TYPE  MATCHES Debug)
    message ("IAR Debug")
    # set a preprocessor symbol "DEBUG"
    add_compile_definitions( DEBUG=1 )
    # set up the CMake variables for the compiler for DEBUG
    set (CMAKE_C_FLAGS "${CMAKE_C_FLAGS} --dlib_config=normal --no_inline")
    set (CMAKE_ASM_FLAGS  "${CMAKE_ASM_FLAGS} ")
    set (CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} --dlib_config=normal --no_inline")

else(CMAKE_BUILD_TYPE MATCHES Release)
    message ("IAR Release")
    # set up the CMake variables for the compiler for Release
    set (CMAKE_C_FLAGS  "${CMAKE_C_FLAGS} --dlib_config=normal")
    set (CMAKE_ASM_FLAGS "${CMAKE_ASM_FLAGS} ")
    set (CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS}  --dlib_config=normal")

endif()
### END CMAKE_TOOLCHAIN_FILE