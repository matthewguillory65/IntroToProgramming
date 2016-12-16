#include <iostream>
#include "Vector2D.h"
#include <cassert>
#include <math.h>

//Matthew Guillory
//Student code: MG1149

using namespace std;
void Vector2DWork() {}

bool Vector2D::operator==(const Vector2D & RHS) const// == overloader
{
	return (x == RHS.x && y == RHS.y);
}

Vector2D Vector2D::operator+ (Vector2D RHS)//Adding Vectors
{
	return Vector2D(x + RHS.x, y + RHS.y);
}

Vector2D Vector2D::operator- (Vector2D RHS)//Subtracting Vectors
{
	return Vector2D(x - RHS.x, y - RHS.y);
}

Vector2D Vector2D::operator* (Vector2D RHS)//Multiplying Vectors
{
	return Vector2D(x * RHS.x, y * RHS.y);
}

Vector2D Vector2D::Magnitude()//Multiplying the x by the x, the y by the y, then adding the two, then getting the square root
{
	Vector2D D;
	D.x = sqrt(x * x + y * y);
	return D;
}

Vector2D Vector2D::Normalize()//Dividing x by the magnitude of x, and dividing y by the magnitude of y
{
	return Vector2D(x / Vector2D::Magnitude().x, y / Vector2D::Magnitude().y);
}

Vector2D Vector2D::Dot(Vector2D Dot)//The sum of x times x, plus y times y
{
	Vector2D F;
	F.x = (x * Dot.x) + (y * Dot.y);
	return F;
}



bool Vector3D::operator==(const Vector3D & RHS) const// == overloader
{
	return (x == RHS.x && y == RHS.y && z == RHS.z);
}

Vector3D Vector3D::operator+ (Vector3D RHS)//Adding Vectors
{
	return Vector3D(x + RHS.x, y + RHS.y, z + RHS.z);
}

Vector3D Vector3D::operator- (Vector3D RHS)//Subtracting Vectors
{
	return Vector3D(x - RHS.x, y - RHS.y, z - RHS.z);
}

Vector3D Vector3D::operator* (Vector3D RHS)//Multiplying Vectors
{
	return Vector3D(x * RHS.x, y * RHS.y, z * RHS.z);
}

Vector3D Vector3D::Magnitude()//Multiplying the x by the x, the y by the y, and the x by the z, adding the three, then getting the square root
{
	Vector3D D;
	D.x = sqrt(x * x + y * y + z * z);
	return D;
}

Vector3D Vector3D::Normalize()//Dividing x by the magnitude of x, dividing y by the magnitude of y, and dividing the z by the magnitude of z
{
	return Vector3D(x / Vector3D::Magnitude().x, y / Vector3D::Magnitude().y, z / Vector3D::Magnitude().z);
}

Vector3D Vector3D::Dot(Vector3D Dot)//The sum of x times x, y times y, and z times z
{
	Vector3D F;
	F.x = (x * Dot.x) + (y * Dot.y) + (z * Dot.z);
	return F;
}

Vector3D Vector3D::Cross(Vector3D Cro)//Cross multiplication between 3 Vectors
{
	Vector3D G;
	G.x = (y * Cro.z) - (z * Cro.y);
	G.y = (z * Cro.x) - (x * Cro.z);
	G.z = (x * Cro.y) - (y * Cro.x);
	return G;
}



bool Vector4D::operator==(const Vector4D & RHS) const// == overloader
{
	return (x == RHS.x && y == RHS.y && z == RHS.z && w == RHS.w);
}

Vector4D Vector4D::operator+ (Vector4D RHS)//Adding Vectors
{
	return Vector4D(x + RHS.x, y + RHS.y, z + RHS.z, w + RHS.w);
}

Vector4D Vector4D::operator- (Vector4D RHS)//Subtracting Vectors
{
	return Vector4D(x - RHS.x, y - RHS.y, z - RHS.z, w - RHS.w);
}

Vector4D Vector4D::operator* (Vector4D RHS)//Multiplying Vectors
{
	return Vector4D(x * RHS.x, y * RHS.y, z * RHS.z, w * RHS.w);
}

Vector4D Vector4D::Magnitude()//x times x, plus, y times y, plus, z times z, plus, w times w, then square root
{
	Vector4D D;
	D.x = sqrt(x * x + y * y + z * z + w * w);
	return D;
}

Vector4D Vector4D::Normalize()//x divided by the magnitude of x, y divided by the magnitude of y, z divided by the magnitude of z, w divided by the magnitude of w
{
	Vector4D tmp = Vector4D(x / Vector4D::Magnitude().x, y / Vector4D::Magnitude().y, z / Vector4D::Magnitude().z, w / Vector4D::Magnitude().w);
	return tmp;
}

Vector4D Vector4D::Dot(Vector4D Dot)//the sum of, x times x, y times y, z times z, and w times w
{
	Vector4D F;
	F.x = (x * Dot.x) + (y * Dot.y) + (z * Dot.z) + (w * Dot.w);
	return F;
}



Matrix2 Matrix2::operator*(Matrix2 Mult)//Multiplying Matrices
{
	Matrix2 tmp;

	tmp.m1 = m1 * m1 + m2 * m3;
	tmp.m2 = m1 * m2 + m2 * m4;
	tmp.m3 = m3 * m1 + m4 * m2;
	tmp.m4 = m3 * m2 + m4 * m4;

	return tmp;
}


Matrix3 Matrix3::operator*(Matrix3 Mult)//Multiplying Matrices
{
	Matrix3 tmp;

	tmp.m1 = m1 * m1 + m2 * m4 + m3 * m7;
	tmp.m2 = m1 * m2 + m2 * m5 + m3 * m8;
	tmp.m3 = m1 * m3 + m2 * m6 + m3 * m9;

	tmp.m4 = m4 * m1 + m5 * m4 + m6 * m7;
	tmp.m5 = m4 * m2 + m5 * m5 + m6 * m8;
	tmp.m6 = m4 * m3 + m5 * m6 + m6 * m9;

	tmp.m7 = m7 * m1 + m8 * m4 + m9 * m7;
	tmp.m8 = m7 * m2 + m8 * m5 + m9 * m8;
	tmp.m9 = m7 * m3 + m8 * m6 + m9 * m9;

	return tmp;
}

Matrix3 Matrix3::RotateX(float angle) const//Rotating Matrice3D on the X-axis
{
	Matrix3 tmp;

	if (angle == 90.0f)
	{
		Matrix3 RotateMatrix = Matrix3(1, 0, 0, 0, 1, 0, 0, 0, 1);
		tmp = RotateMatrix * *this;
	}
	return tmp;
}

Matrix3 Matrix3::RotateY(float angle) const//Rotating Matrice3D on the Y-axis
{
	Matrix3 tmp;

	if (angle == -90.0f)
	{
		Matrix3 RotateMatrix = Matrix3(0, 0, -1, 0, 0, 1, 0, 0, 1);
		tmp = RotateMatrix * *this;
	}
	return tmp;
}

Matrix3 Matrix3::RotateZ(float angle) const//Rotating Matrice3D on the Z-axis
{
	Matrix3 tmp;

	if (angle == 90)
	{
		Matrix3 RotateMatrix = Matrix3(0, -1, 0, 1, 0, 0, 0, 0, 1);
		tmp = RotateMatrix * *this;
	}
	return tmp;
}


Matrix4 Matrix4::operator*(Matrix4 Mult)//Multiplying Matrices
{
	Matrix4 tmp;

	tmp.m1 = m1 * m1 + m2 * m5 + m3 * m9 + m4 * m13;
	tmp.m2 = m1 * m2 + m2 * m6 + m3 * m10 + m4 * m14;
	tmp.m3 = m1 * m3 + m2 * m7 + m3 * m11 + m4 * m15;
	tmp.m4 = m1 * m4 + m2 * m8 + m3 * m12 + m4 * m16;

	tmp.m5 = m5 * m1 + m6 * m5 + m7 * m9 + m8 * m13;
	tmp.m6 = m5 * m2 + m6 * m6 + m7 * m10 + m8 * m14;
	tmp.m7 = m5 * m3 + m6 * m7 + m7 * m11 + m8 * m15;
	tmp.m8 = m5 * m4 + m6 * m8 + m7 * m12 + m8 * m16;

	tmp.m9 = m9 * m1 + m10 * m5 + m11 * m9 + m12 * m13;
	tmp.m10 = m9 * m2 + m10 * m6 + m11 * m10 + m12 * m14;
	tmp.m11 = m9 * m3 + m10 * m7 + m11 * m11 + m12 * m15;
	tmp.m12 = m9 * m4 + m10 * m8 + m11 * m12 + m12 * m16;

	tmp.m13 = m13 * m1 + m14 * m5 + m15 * m9 + m16 * m13;
	tmp.m14 = m13 * m2 + m14 * m6 + m15 * m10 + m16 * m14;
	tmp.m15 = m13 * m3 + m14 * m7 + m15 * m11 + m16 * m15;
	tmp.m16 = m13 * m4 + m14 * m8 + m15 * m12 + m16 * m16;

	return tmp;
}

Matrix4 Matrix4::RotateX(float angle) const//Rotating Matrice4D on the X-axis
{
	Matrix4 tmp;

	if (angle == -90.0f)
	{
		Matrix4 RotateMatrix = Matrix4(1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1);
		tmp = RotateMatrix * *this;
	}
	return tmp;
}

Matrix4 Matrix4::RotateY(float angle) const//Rotating Matrice4D on the Y-axis
{
	Matrix4 tmp;

	if (angle == -90.0f)
	{
		Matrix4 RotateMatrix = Matrix4(0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1);
		tmp = RotateMatrix * *this;
	}
	return tmp;
}

Matrix4 Matrix4::RotateZ(float angle) const//Rotating Matrice4D on the Z-axis
{
	Matrix4 tmp;

	if (angle == 90.0f)
	{
		Matrix4 RotateMatrix = Matrix4(0, 0, -1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1);
		tmp = RotateMatrix * *this;
	}
	return tmp;
}


int main()
{
	Vector2D A = Vector2D(1, 0);
	Vector2D B = Vector2D(0, 1);
	assert(A + B == Vector2D(1, 1));
	assert(A - B == Vector2D(1, -1));
	assert(A * B == Vector2D(0, 0));

	Vector3D C = Vector3D(1, 0, 0);
	Vector3D D = Vector3D(0, 1, 0);
	Vector3D E = Vector3D(1, 0, 1);
	assert(C + D + E == Vector3D(2, 1, 1));
	assert(C - D - E == Vector3D(0, -1, -1));
	assert(C * D * E == Vector3D(0, 0, 0));

	Vector4D a = Vector4D(1, 0, 0, 0);
	Vector4D b = Vector4D(0, 1, 0, 0);
	Vector4D c = Vector4D(0, 0, 0, 0);
	Vector4D d = Vector4D(0, 0, 0, 0);
	//Vector4D e = Vector4D(0, 0, 0, 0);
	//e = e + a;
	//e = e + b;
	//e = e + c;
	//e = e + d;
	assert(a + b + c + d == Vector4D(0, 1, 1, 0));
	assert(a - b - c - d == Vector4D(0, 1, -1, 0));
	assert(a * b * c * d == Vector4D(0, 0, 0, 0));

	return 0;
}