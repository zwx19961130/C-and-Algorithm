#include"stars.hpp"

#define PI 3.1415926535

Star :: Star(GLfloat radius, GLfloat distance, GLfloat speed, GLfloat selfSpeed, Star* parent) {

}

void Star :: drawStar() {
	glEnable(GL_LINE_SMOOTH);
	glEnable(GL_BLEND);

	int n = 1440;
	glPushMatrix();
 	{
		if (parentStar != 0 && parentStar->distance > 0) {
			glRotatef(parentStar->alpha, 0, 0, 1);
		}
	}
}

void Star :: update(long timeSpan) {
	alpha += timeSpan * speed;
	alphaSelf += selfSpeed;
}

Planet :: Planet(GLfloat radius, GLfloat distance, GLfloat speed, GLfloat selfSpeed, Star* parent, GLfloat rgbColor[3]) : Star(radius, distance, speed, selfSpeed, parent) {

}

void Planet :: drawPlanet() {

}

LightPlanet :: LightPlanet(GLfloat radius, GLfloat distance, GLfloat speed, GLfloat selfSpeed, Star* parent, GLfloat rgbColor[3]) : Planet(radius, distance, speed, selfSpeed, parent, rgbColor) {

}

void LightPlanet :: drawLight() {

}
