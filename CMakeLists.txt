cmake_minimum_required(VERSION 3.8)

set(PROJECT_NAME pwdgen)

set(BUILD_DIRECTORY ${PROJECT_SOURCE_DIR})
set(CMAKE_CXX_FLAGS "-W -Wall -Wextra -g -ggdb3")
set(EXECUTABLE_OUTPUT_PATH ${BUILD_DIRECTORY})

include_directories(arguments-parser/arguments-parser)
include_directories(src)

add_executable(${PROJECT_NAME} src/main.cpp src/Generator/Generator.hpp src/Generator/Generator.cpp src/commands/utl/enum/e_command.hpp src/commands/utl/ArgumentCondition/ArgumentCondition.cpp src/commands/utl/ArgumentCondition/ArgumentCondition.hpp src/commands/PwdgenCommand/PwdgenCommand.cpp src/commands/PwdgenCommand/PwdgenCommand.hpp src/commands/Help/Help.cpp src/commands/Help/Help.hpp src/commands/Symbols/Symbols.cpp src/commands/Symbols/Symbols.hpp src/commands/NoSymbols/NoSymbols.cpp src/commands/NoSymbols/NoSymbols.hpp src/commands/StringsNumber/StringsNumber.cpp src/commands/StringsNumber/StringsNumber.hpp src/commands/StringsSize/StringsSize.cpp src/commands/StringsSize/StringsSize.hpp)

add_subdirectory(arguments-parser)

add_dependencies(${PROJECT_NAME} arguments-parser)
target_link_libraries(${PROJECT_NAME} arguments-parser)
