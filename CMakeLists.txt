cmake_minimum_required(VERSION 3.10) 			# Проверка версии CMake.
											# Если версия установленой программы
											# старее указаной, произайдёт аварийный выход.

add_executable(main main.cpp some_functions.cpp)		# Создает исполняемый файл с именем main
											# из исходников main.cpp и some_functions.cpp