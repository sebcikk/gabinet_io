cmake_minimum_required(VERSION 3.15)
project(GabinetMedyczny VERSION 1.0 LANGUAGES CXX)

# Wymagany standard C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Wskazujemy folder z plikami nagłówkowymi .hpp
include_directories(include)

# Automatycznie pobierz wszystkie pliki .cpp z folderu src
#file(GLOB SOURCES "src/*.cpp")

set(SOURCES
    src/main.cpp
    src/Date.cpp
    src/Gabinet.cpp
    src/Kartoteka.cpp
    src/Lek.cpp
    src/Lekarz.cpp
    src/Osoba.cpp
    src/Pacjent.cpp
    src/Recepcjonistka.cpp
    src/Recepta.cpp
    src/Skierowanie.cpp
    src/SystemObslugiWizyty.cpp
    src/SystemRezerwacjiTerminow.cpp
    src/Usluga.cpp
    src/Wizyta.cpp
    src/WolnyTermin.cpp
)

# Tworzymy plik wykonywalny programu
add_executable(gabinet_io ${SOURCES})