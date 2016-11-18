#pragma once

class Vector2D
{
private:
	float x, y;
public:
	Vector2D() {}

	Vector2D(float xpos, float ypos)
	{
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

	Vector3D(float xpos, float ypos, float zpos)
	{
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
	float x1, x2, y1, y2;
public:
	Matrix2() {}
	Matrix2(float x1, float x2, float y1, float y2)
	{
		x1 = 3, x2 = 4, y1 = 5, y2 = 6;
	}

	Matrix2 operator*(Matrix2 Mult);
};

class Matrix3
{
private:
	float m1, m2, m3, m4, m5, m6, m7, m8, m9;
	float points[9];
public:
	Matrix3() {}
	Matrix3(float m1, float m2, float m3, float m4, float m5, float m6, float m7, float m8, float m9)
	{}

	Matrix3(float a[])
	{
		for (int i = 0; i < 9; i++)
			points[i] = a[i];
	}

	Matrix3 operator*(Matrix3 Mult);
};

class Matrix4
{
private:
	float m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16;
	float points[16];
public:
	Matrix4() {}
	Matrix4(float m1, float m2, float m3, float m4, float m5, float m6, float m7, float m8, float m9, float m10, float m11, float m12, float m13, float m14, float m15, float m16)
	{}

	Matrix4(float a[])
	{
		for (int i = 0; i < 16; i++)
			points[i] = a[i];
	}

	Matrix4 operator*(Matrix4 Mult);
};