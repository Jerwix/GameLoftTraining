#include "stdafx.h"
#include "Camera.h"

Camera::Camera(Vector3 position, Vector3 target, Vector3 up, GLfloat moveSpeed, GLfloat rotateSpeed, GLfloat nearPlane, GLfloat farPlane, GLfloat fov) :
	position(position), target(target), up(up), moveSpeed(moveSpeed), rotateSpeed(rotateSpeed), nearPlane(nearPlane), farPlane(farPlane), fov(fov)
{
}
