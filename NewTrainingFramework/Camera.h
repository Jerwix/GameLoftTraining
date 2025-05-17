#pragma once
#include "../Utilities/Math.h"
class Camera
{
private:
	Vector3 position;
	Vector3 target;
	Vector3 up;
	GLfloat moveSpeed;
	GLfloat rotateSpeed;
	GLfloat nearPlane;
	GLfloat farPlane;
	GLfloat fov;
	GLfloat deltaTime;
	Vector3 xAxis;
	Vector3 yAxis;
	Vector3 zAxis;
	Matrix viewMatrix;
	Matrix worldMatrix;
public:
	Camera();
	Camera(Vector3 position, Vector3 target, Vector3 up, GLfloat moveSpeed, GLfloat rotateSpeed, GLfloat nearPlane, GLfloat farPlane, GLfloat fov);
	~Camera();
	void moveOx(int sens);
	void moveOy(int sens);
	void moveOz(int sens);
	void rotateOx(int sens);
	void rotateOy(int sens);
	void rotateOz(int sens);
	void updateAxes();
	void updateWorldView();
	void setDeltaTime(GLfloat);
};

