compile_commands:
    cmake -B build -DCMAKE_EXPORT_COMPILE_COMMANDS=ON

build:
    cmake -B build -DCMAKE_EXPORT_COMPILE_COMMANDS=ON
    cmake --build build
