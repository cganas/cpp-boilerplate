# cpp-boilerplate

This is a simple C++ project structure that uses modern CMAKE.
It includes one target executably **myapp_exe** and one internal library **mylib**.
The structure was adapted from [toeb/moderncmake](https://github.com/toeb/moderncmake)'s sample02.

**mylib** is linked against **boost** as an external library.
More information can be found in [CMakeLists.txt](mylib/CMakeLists.txt).

To generate build files: `cd build && cmake .`

### Building Executable
`cmake --build .`

### Testing
`ctest .`
