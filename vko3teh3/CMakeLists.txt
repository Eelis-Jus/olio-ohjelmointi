cmake_minimum_required(VERSION 3.5)

project(vko3teh3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(vko3teh3 main.cpp)

include(GNUInstallDirs)
install(TARGETS vko3teh3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
