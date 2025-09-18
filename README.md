Face Detection with OpenCV (C++)
Overview
This project is a simple face detection program written in C++ using the OpenCV library. It uses your laptop's camera to detect faces in real-time and draws rectangles around detected faces.

How It Works
1.	Loads a face detection model (Haar Cascade) from a file.
2.	Opens your laptop camera to capture video frames.
3.	Processes each frame to detect faces.
4.	Draws rectangles around detected faces.
5.	Displays the video with rectangles in a window.
6.	Stops when you press the ESC key.

Prerequisites
•	OpenCV installed on your computer (Windows).
•	The file haarcascade_frontalface_default.xml (download from OpenCV GitHub).
•	A working laptop camera.


How to Run
1.	Build the project in Visual Studio (make sure OpenCV is linked correctly).
2.	Copy the file haarcascade_frontalface_default.xml into the same folder as your executable.
3.	Run the program. A window will open showing your camera feed with rectangles around detected faces.
4.	Press ESC to close the window and stop the program.


Troubleshooting
•	If you get errors about missing DLLs or unresolved symbols, make sure you have linked OpenCV libraries correctly and copied the required DLLs to your output folder.
•	If the camera does not open, check that your laptop camera is working and not used by another application.
