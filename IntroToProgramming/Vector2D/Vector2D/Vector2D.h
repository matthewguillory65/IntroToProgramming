#pragma once

class Vector2D
{
private:
	float x, y;
public:
	Vector2D() {}

	Vector2D(float xpos, float ypos) {
		x = xpos, y = ypos;
	}

	Vector2D operator+(Vector2D Add);


	Vector2D operator-(Vector2D sub);


	Vector2D operator*(Vector2D Mult);


	Vector2D Magnitude(Vector2D Mag);


	Vector2D Normalize(Vector2D Nor);


	Vector2D Dot(Vector2D Dot);
};

class Vector3D
{
private:
	float x, y, z;
public:
	Vector3D() {}
	Vector3D(float xpos, float ypos, float zpos) {
		x = xpos, y = ypos, z = zpos;
	}

	Vector3D operator+(Vector3D Add);


	Vector3D operator-(Vector3D sub);


	Vector3D operator*(Vector3D Mult);


	Vector3D Magnitude(Vector3D Mag);


	Vector3D Normalize(Vector3D Nor);


	Vector3D Dot(Vector3D Dot);


	Vector3D Cross(Vector3D Cro);
};

class Vector4D
{
private:
	float w, x, y, z;
public:
	Vector4D() {}
	Vector4D(float wpos, float xpos, float ypos, float zpos)
	{
		w = wpos, x = xpos, y = ypos, z = zpos;
	}

	Vector4D operator+(Vector4D Add);


	Vector4D operator-(Vector4D sub);


	Vector4D operator*(Vector4D Mult);


	Vector4D Magnitude(Vector4D Mag);


	Vector4D Normalize(Vector4D Nor);


	Vector4D Dot(Vector4D Dot);
};

class Matrix2
{
private:
	float w, x, y, z;
public:
	Matrix2() {}
	Matrix2(float wpos, float xpos, float ypos, float zpos)
	{
		w = wpos, x = xpos, y = ypos, z = zpos;
	}

	Matrix2 operator*(Matrix2 Mult)
	{
		(w, x) * (y, z) == w * y, w * z, x * y, x * z;
	}

};

class Matrix3
{
private:
	float x, y, z, q, r, s, t, u, v;
	float points[9];
public:
	Matrix3() {}
	Matrix3(float xpos, float ypos, float zpos, float qpos, float rpos, float spos, float tpos, float upos, float vpos)
	{}

	Matrix3(float a[])
	{
		for (int i = 0; i < 9; i++)
			points[i] = a[i];
	}

	Matrix3 operator+(Matrix3 Add)
	{

	}

};

class Matrix4
{
private:
	float x, y, z, k, l, m, n, o, p, q, r, s, t, u, v, w;
	float points[16];
public:
	Matrix4() {}
	Matrix4(float xpos, float ypos, float zpos, float kpos, float lpos, float mpos, float npos, float opos, float ppos, float qpos, float rpos, float spos, float tpos, float upos, float vpos, float wpos)
	{}

	Matrix4(float a[])
	{
		for (int i = 0; i < 16; i++)
			points[i] = a[i];
	}

	Matrix4 operator+(Matrix4 Add)
	{
		
	}

};