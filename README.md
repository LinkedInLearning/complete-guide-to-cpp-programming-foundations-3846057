I have created a file with shared functions to be used with all project files
I created a headers folder which should include the headers of all shared files
The shared files will be added to the src folder
To Make this work properly:

To add the functions to the intellisense
open: .vscode/c_cpp_properties.json
add the following to the "includePath" array
    "${workspaceFolder}/headers"

To enable the compiling open .vscode/tasks.json
Add the following to the args array
    "${workspaceFolder}/src/sharedFns.cpp",
    "-I${workspaceFolder}/headers"

I created a bin directory to build the project files into
The files are built in the following pattern:
<parent_directory_name>-<file_name>