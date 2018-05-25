#include <iostream>
#include "OpenglWindow.h"

int main (int argc, char const *argv[])
{
	OpenglWindow newWindow(500, 500, "Shaders Example");

	while (newWindow.active) {
		if (newWindow.handleInput())
			if (newWindow.keyboard.getKeyState(newWindow.keyboard.ESC))
				newWindow.requestClose();
		newWindow.focus();

		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
		glBegin(GL_LINES);
			glColor3f(1, 0, 0);
			glVertex2f(0, 0);
			glVertex2f(1, 1);
		glEnd();
		
		newWindow.swapBuffers();
	}
	return 0;
}