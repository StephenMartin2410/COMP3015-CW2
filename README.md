Github Link - https://github.com/StephenMartin2410/COMP3015-CW2.git

Youtube Link - 

# COMP3015 Coursework 2
## Visual Studio Community 2022 Version 17.8.0
## Windows 11 Pro Version 23H2 OS build 22631.3296

#How does it work?
In this program the user can use keyboard controls to control the position of the camera.
- W and S move the camera forward and backwards.
- The arrow keys move the camera angle around.

##  Features of the Application -

- HDR with tone mapping
This feature is used to allow brightness and colour values shown in a seen to go over the default maximum allowed value of 1.0. The HDR works by rendering the inital framebuffer with a colour buffer which can exceed 1.0. Then the colour buffer of the framebuffer is rendered to a screen sized quad. The program then uses tone mapping to ensure that when transforming the quad back into an outputtable buffer. Reinhard tone mapping is used to divide all of the HDR values into standard values. Tone mapping is also used to set the exposure of the scene so that the exposure is variable and can change how the HDR interacts with the detail of the scene.
![alt text](image-1.png)
![alt text](image-2.png)

- Noise
  - Disintegration 
  This form of noise is used to remove parts of the disintegration plane in the scene. The rendered noise is used to discard the parts of noise that are generated on the plane.
  - Paint Splatter 
  This form of noise is used to paint parts of the paint splatter plane that have noise. 
  - Cloud effect
This feature works by mixing the colours white and blue with a noise texture to make a plane look like a set of clouds.
![alt text](image.png)

- Keyboard movement 
The W and S keys are used in the scene to move forwards and backwards and then the arrow keys can be used to transform the angle of the camera.
![alt text](image-3.png)
![alt text](image-4.png)

All of these files and the given helper files in the labs are used to create the prototype for my CW2 demo.
