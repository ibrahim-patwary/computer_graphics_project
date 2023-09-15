# Computer Graphics 
- Computer graphics deals with generating images and art with the aid of computers. Today, computer graphics is a core technology in digital photography, film, video games, digital art, cell phone and computer displays, and many specialized applications. 
# Project Details
- This project involved creating a visually appealing and realistic 2D scene environment using OpenGL and C++ for my computer graphics lab project. The objective was to simulate a diverse scene that includes various elements such as roads, a rail line, rail tracks, cars, multiple buildings, a sun, clouds, ships, and a boat in the sea. Leveraging OpenGL functions and C++ coding, I successfully implemented the scene, ensuring accurate representation in terms of colors, sizes, and textures for each element.
# Features
- Realistic 2D scene representation.
- Diverse elements including roads, rail lines, rail tracks, cars, buildings, sun, clouds, ships, and a boat.  
- Utilization of OpenGL functions for rendering.  
- Accurate color, size, and texture mapping for enhanced realism.  
# Requirements
Download Software and install 
-	Codeblocks 10.05
-	Glut 3.7.6
# Environment Setup
1)	Step: Create Environment
-	Copy glut32.dll to C:\Windows\System32
If it 64bit copy to C:\Windows\SysWOW64

-	Glut32.lib copy to
C:\ProgramFiles(x86)\CodeBlocks\MinGW\lib

-	Glut.h copy to C:\ProgramFiles(x86)\CodeBlocks\MinGW\include\GL

2)	Step: Codeblocks -> Build Option
           Build option> add linker> find glut.lib again, add and ok   

# Main Functions
```cpp
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(1200,900);
    glutCreateWindow("Natural Scene");
    init();
    glutDisplayFunc(display);
    glutTimerFunc(25,update,0);
    glutMainLoop();
}

```
# Result
![1](https://github.com/ibrahim-patwary/computer_graphics_project/assets/144773009/33aaec3f-e9e5-4f49-8cb5-b2603df74fb4)
![Screenshot 2023-09-15 112721](https://github.com/ibrahim-patwary/computer_graphics_project/assets/144773009/ff5bbe74-56db-4b9f-b8b5-7c546a67d817)
![Screenshot 2023-09-15 112820](https://github.com/ibrahim-patwary/computer_graphics_project/assets/144773009/0f7cb39f-6216-47b0-8754-c84ab0350428)


# Animations
https://github.com/ibrahim-patwary/computer_graphics_project/assets/144773009/6c38e7d0-939e-4021-894c-ca2fff4cb853


https://github.com/ibrahim-patwary/computer_graphics_project/assets/144773009/97a1c161-9d8a-4c40-9704-e8e1f1355aa2



https://github.com/ibrahim-patwary/computer_graphics_project/assets/144773009/984be337-9928-4cb0-9ec4-91a4c0316066


# Documentation
The Project Documentation is [here](https://rb.gy/ol5s7)
# Acknowledgements
I would like to acknowledge the OpenGL community for providing a powerful platform for graphics development. Additionally, I appreciate the support of my computer graphics lab instructor for guiding me throughout this project.
# Contact 
If you have any questions, feedback, or inquiries about my 2D scene project, please feel free to contact me at Email: ibrahim15-3802@diu.edu.bd
