
cmake_minimum_required(VERSION 3.10)

project(Calculator C)

set(CMAKE_C_STANDARD 11)

# Створення статичної бібліотеки
add_library(calculator STATIC calculator.c)

# Створення виконуваного файлу
add_executable(calculator_app main.c)

# Підключення бібліотеки до програми
target_link_libraries(calculator_app PRIVATE calculator)
