#
# CMakeLists.txt for pwdgen
# File path: /Users/sylvain/Documents/projects/perso/C++/pwdgen/CMakeLists.txt
#
# Author              : Asmoddym
# Created at          : 06 Jan 2020, 10:50:51
# Last modification at: 06 Jan 2020, 10:56:01
#

cmake_minimum_required(VERSION 3.8)

set(PROJECT_NAME pwdgen)

set(CMAKE_CXX_FLAGS "-W -Wall -Wextra")
set(CMAKE_CXX_STANDARD 17)

include_directories(. .. arguments-parser)

add_subdirectory(arguments-parser EXCLUDE_FROM_ALL)
add_subdirectory(pwdgen)
