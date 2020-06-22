#include <iostream>
#include <GL/freeglut.h>

void display(void) {
}

void mouse(int button, int state, int x, int y) {
	if(state == 1)
	system("cls");
	std::cout<< state << "Klik kiri | X : " << x << " Y : " << y << std::endl;
}

void keydown(unsigned char key, int x, int y) {
	std::cout << key << " ";
}

void keyup(unsigned char key, int x, int y) {
	
	std::cout << key ;
	system("cls");
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_MULTISAMPLE);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(100, 100);
	glutCreateWindow(argv[0]);
	glutDisplayFunc(display);

	glutMouseFunc(mouse);
	glutKeyboardFunc(keydown);
	glutKeyboardUpFunc(keyup);
	

	glClearColor(0, 0, 0, 1);
	gluOrtho2D(-100, 100, -100, 100);

	glutMainLoop();

	return 0;
}
