#pragma once

class Vector2D
{
private:
	float x, y;
public:
	Vector2D() {}
	Vector2D(float xpos, float ypos) {
		x = xpos; y = ypos;
	}
	Vector2D Add(const Vector2D &d)
	{
		Vector2D a = Vector2D(x + d.x, y + d.y);
		return a;
	}
	Vector2D Subtract(const Vector2D &d)
	{
		x -= d.x;
		y -= d.y;
	}
	Vector2D ScalarMult(float k)
	{
		x *= k;
		y *= k;
	}
	Vector2D(float x2, float y2) : x(x2), y(y2) {}
};

class Vector3D
{
private:
	float x, y, z;
public:
	Vector3D() {}
	Vector3D(float xpos,float ypos, float zpos) {
		x = xpos; y = ypos; z = zpos;
	}
	Vector3D Add(const Vector3D &d)
	{
		Vector3D a = Vector3D(x + d.x, y + d.y, z + d.z);
		return a;
	}
	Vector3D Subtract(const Vector3D d)
	{
		Vector3D s = Vector3D(x - d.x, y - d.y, z - d.z);
		return s;
	}
	 
};



















