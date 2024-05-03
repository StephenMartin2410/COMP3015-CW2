https://github.com/StephenMartin2410/COMP3015_CW1

https://youtu.be/CwfYPjhoFRc
# COMP3015 Coursework 1
## Visual Studio Community 2022 Version 17.8.0
## Windows 11 Pro Version 23H2 OS build 22631.3296

When observing this repository or project folder, there are 4 files that matter the most in regards to the workload created by me.
- scenebasic_uniform.cpp
This is where most of the functions for the program are run, such as:
  - initScene, which is used to set the uniform for the multiple lights in the scene.
  - compile, which is used to compile the shaders of the program.
  - update, which is used to run checks or repeated tasks on the program, like rotating an object.
  - render, which is used to set material properties and render and control where the model is rendered.
  - setMatricies, which is used to set the uniforms and matricies for the modelview
  - and resize, which is used to define the window in which the program is run.
 
- scenebasic_uniform.h
This is where most of the functions and public or private variables from scenebasic_uniform.cpp are initilized.

- basic_uniform.vert
This file is used to translate the data given to it as locations in the virtual plane by performing calculations on the data using the GPU.

- basic_uniform.frag
This file is used to control and store the functions and datatypes needed to process and create the lighting effects for the program, this file also handles the colour output of the program, more specifically in this case, the phong lighting model is handled in this file, as well as the structs needed to hold data for lighting and material property calculations.

All of these files and the given helper files in the labs are used to create the prototype for my CW1 demo.
