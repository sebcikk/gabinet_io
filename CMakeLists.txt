cmake_minimum_required(VERSION 3.15)
project(GabinetMedyczny VERSION 1.0 LANGUAGES CXX)

# Wymagany standard C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Wskazujemy folder z plikami nagłówkowymi .hpp
include_directories(include)

# Automatycznie pobierz wszystkie pliki .cpp z folderu src
file(GLOB SOURCES "src/*.cpp")


# Tworzymy plik wykonywalny programu
add_executable(gabinet_io ${SOURCES})