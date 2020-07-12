cmake_minimum_required(VERSION 3.16)
project(Rtos)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_SOURCE_DIR "C:/GitHub/CortexLib/rtos")


include(iarconfig.cmake)
#add_compile_definitions(STM32F413xx)

include_directories({CMAKE_SOURCE_DIR}/../AbstractHardware/Registers)
include_directories({CMAKE_SOURCE_DIR}/../AbstractHardware/Registers/CortexM4)
include_directories({CMAKE_SOURCE_DIR}/../AbstractHardware/Registers/CortexM4/FieldValues)
include_directories({CMAKE_SOURCE_DIR}/../AbstractHardware/Registers/STM32F411)
include_directories({CMAKE_SOURCE_DIR}/../AbstractHardware/Registers/STM32F411/FieldValues)

include_directories(${CMAKE_SOURCE_DIR}/../Common)
include_directories(${CMAKE_SOURCE_DIR}/../AbstractHardware/Atomic)
include_directories(${CMAKE_SOURCE_DIR}/CortexM0)
include_directories(${CMAKE_SOURCE_DIR}/Source)
include_directories(${CMAKE_SOURCE_DIR}/Config)
include_directories(${CMAKE_SOURCE_DIR}/Source/CriticalSection)
include_directories(${CMAKE_SOURCE_DIR})

add_executable(Rtos
        main.cpp
        startup.cpp
        Source/taskerschedule.cpp
        Source/CriticalSection/criticalsection.cpp
      #  Source/CriticalSection/criticalregion.cpp
        CortexM0/interrupthandlers.s
        startup.cpp
        Config/taskerconfig.hpp Source/taskbase.hpp
        #RISCV/GD32VF/interrupthandlers.cpp RISCV/GD32VF/interrupthandlers.hpp
        Source/coretypes.hpp)


