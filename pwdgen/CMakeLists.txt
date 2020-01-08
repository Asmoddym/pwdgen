#
# CMakeLists.txt for pwdgen
# File path: /Users/sylvain/Documents/projects/perso/C++/pwdgen/pwdgen/CMakeLists.txt
#
# Author              : Asmoddym
# Created at          : 06 Jan 2020, 10:50:51
# Last modification at: 08 Jan 2020, 14:35:17
#

cmake_minimum_required(VERSION 3.0)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_executable(${PROJECT_NAME} main.cpp
	Generator/Generator.hpp Generator/Generator.cpp
	flags/Length/Length.hpp flags/Length/Length.cpp
	flags/Number/Number.hpp flags/Number/Number.cpp
	flags/NoSymbols/NoSymbols.hpp flags/NoSymbols/NoSymbols.cpp
	flags/Hexadecimal/Hexadecimal.hpp flags/Hexadecimal/Hexadecimal.cpp
	flags/Decimal/Decimal.hpp flags/Decimal/Decimal.cpp
	flags/Alphabetical/Alphabetical.hpp flags/Alphabetical/Alphabetical.cpp
)

add_dependencies(${PROJECT_NAME} arguments-parser)
target_link_libraries(${PROJECT_NAME} arguments-parser)
