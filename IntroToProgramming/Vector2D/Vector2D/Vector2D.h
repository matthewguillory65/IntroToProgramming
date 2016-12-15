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

	Vector2D operator+(Vector2D RHS);


	Vector2D operator-(Vector2D RHS);


	Vector2D operator*(Vector2D RHS);


	Vector2D Magnitude();


	Vector2D Normalize();


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

	Vector3D operator+(Vector3D RHS);


	Vector3D operator-(Vector3D RHS);


	Vector3D operator*(Vector3D RHS);


	Vector3D Magnitude();


	Vector3D Normalize();


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

	Vector4D operator+(Vector4D RHS);


	Vector4D operator-(Vector4D RHS);


	Vector4D operator*(Vector4D RHS);


	Vector4D Magnitude();


	Vector4D Normalize();


	Vector4D Dot(Vector4D Dot);
};

class Matrix2
{
private:
	float m1, m2, m3, m4;
	float points[4];
public:
	Matrix2() {}
	Matrix2(float a[])
	{
		for (int i = 0; i < 4; i++)
			points[i] = a[i];
	}

	Matrix2 operator*(Matrix2 Mult);

	Matrix2 RotateX(float angle) const;

	Matrix2 RotateY(float angle) const;
};

class Matrix3
{
private:
	float m1, m2, m3, m4, m5, m6, m7, m8, m9;
	float points[9];
public:
	Matrix3() {}
	Matrix3(float a[])
	{
		for (int i = 0; i < 9; i++)
			points[i] = a[i];
	}

	Matrix3(float a, float b, float c, float d, float e, float f, float g, float h, float i)
	{
		m1 = a, m2 = b, m3 = c, m4 = d, m5 = e, m6 = f, m7 = g, m8 = h, m9 = i;
	}

	Matrix3 operator*(Matrix3 Mult);

	Matrix3 RotateX(float angle) const;

	Matrix3 RotateY(float angle) const;

	Matrix3 RotateZ(float angle) const;
};

class Matrix4
{
private:
	float m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, m13, m14, m15, m16;
	float points[16];
public:
	Matrix4() {}
	Matrix4(float a[])
	{
		for (int i = 0; i < 16; i++)
			points[i] = a[i];
	}

	Matrix4(float a, float b, float c, float d, float e, float f, float g, float h, float i, float j, float k, float l, float m, float n, float o, float p)
	{
		m1 = a, m2 = b, m3 = c, m4 = d, m5 = e, m6 = f, m7 = g, m8 = h, m9 = i, m10 = j, m11 = k, m12 = l, m13 = m, m14 = n, m15 = o, m16 = p;
	}

	Matrix4 operator*(Matrix4 Mult);

	Matrix4 RotateX(float angle) const;

	Matrix4 RotateY(float angle) const;

	Matrix4 RotateZ(float angle) const;
};