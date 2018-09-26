# Cpp Build and Run 
- [Cpp Build and Run](#cpp-build-and-run)
    - [**Run Build Tasks**](#run-build-tasks)
    - [**Build Solution**](#build-solution)
    - [**C Cpp Properties**](#c-cpp-properties)

## **Run Build Tasks**
**Save as** *tasks.json*
```json
{
    "version": "2.0.0",
    "tasks": [{
        "label": "Cpp Build",
        "type": "shell",
        "command": "g++ -g main.cpp -o program",
        "group": {
            "kind": "build",
            "isDefault": true,
        }
    }]
}
```

## **Build Solution**

**Save as** *launch.json*
```json
{
    "version": "0.2.0",
    "configurations": [{
            "name": "(Windows) Cpp Launch",
            "type": "cppvsdbg",
            "request": "launch",
            "program": "program.exe",
            "args": [],
            "stopAtEntry": false,
            "cwd": "${workspaceFolder}",
            "environment": [],
            "externalConsole": true
        },
    ]
}
```

## **C Cpp Properties**
```json
{
    "configurations": [{
        "name": "Win32",
        "includePath": [
            "${workspaceFolder}/**",
            "E:/_Programming/MinGW-w64/mingw32/lib/gcc/i686-w64-mingw32/8.1.0/include/c++",
            "E:/_Programming/MinGW-w64/mingw32/lib/gcc/i686-w64-mingw32/8.1.0/include/c++/i686-w64-mingw32",
            "E:/_Programming/MinGW-w64/mingw32/i686-w64-mingw32/include"
        ],
        "defines": [
            "_DEBUG",
            "UNICODE",
            "_UNICODE"
        ],
        "compilerPath": "E:/_Programming/MinGW-w64/mingw32/bin/gcc.exe",
        "cStandard": "c11",
        "cppStandard": "c++17",
        "intelliSenseMode": "msvc-x64"
    }],
    "version": 4
}
```