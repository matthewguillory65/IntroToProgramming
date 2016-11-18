#include <iostream>
#include "Vector2D.h"
#include <cassert>

using namespace std;
void Vector2DWork() {}

Vector2D Vector2D::operator+ (Vector2D Add)
{
	Vector2D A;
	A.x = x + Add.x;
	A.y = y + Add.y;
	return A;
}

Vector2D Vector2D::operator- (Vector2D sub)
{
	Vector2D B;
	B.x = x - sub.x;
	B.y = y - sub.y;
	return B;
}

Vector2D Vector2D::operator* (Vector2D Mult)
{
	Vector2D C;
	C.x = x * Mult.x;
	C.y = y * Mult.y;
	return C;
}

Vector2D Vector2D::Magnitude(Vector2D Mag)
{
	Vector2D D;
	D.x = sqrt((x * Mag.x) + (y * Mag.y));
	return D;
}

Vector2D Vector2D::Normalize(Vector2D Nor)
{
	Vector2D E;
	E.x = x / Nor.x;
	E.y = y / Nor.y;
	return E;
}

Vector2D Vector2D::Dot(Vector2D Dot)
{
	Vector2D F;
	F.x = (x * Dot.x) + (y * Dot.y);
	return F;
}



Vector3D Vector3D::operator+ (Vector3D Add)
{
	Vector3D A;
	A.x = x + Add.x;
	A.y = y + Add.y;
	A.z = z + Add.z;
	return A;
}

Vector3D Vector3D::operator- (Vector3D sub)
{
	Vector3D B;
	B.x = x - sub.x;
	B.y = y - sub.y;
	B.z = z - sub.z;
	return B;
}

Vector3D Vector3D::operator* (Vector3D Mult)
{
	Vector3D C;
	C.x = x + Mult.x;
	C.y = y + Mult.y;
	C.z = z + Mult.z;
	return C;
}

Vector3D Vector3D::Magnitude(Vector3D Mag)
{
	Vector3D D;
	D.x = sqrt((x * Mag.x) + (y * Mag.y) + (z + Mag.z));
	return D;
}

Vector3D Vector3D::Normalize(Vector3D Nor)
{
	Vector3D E;
	E.x = x / Nor.x;
	E.y = y / Nor.y;
	E.z = z / Nor.z;
	return E;
}

Vector3D Vector3D::Dot(Vector3D Dot)
{
	Vector3D F;
	F.x = (x * Dot.x) + (y * Dot.y) + (z * Dot.z);
	return F;
}

Vector3D Vector3D::Cross(Vector3D Cro)
{
	Vector3D G;
	G.x = (y * Cro.z) - (z * Cro.y);
	G.y = (z * Cro.x) - (x * Cro.z);
	G.z = (x * Cro.y) - (y * Cro.x);
	return G;
}



Vector4D Vector4D::operator+ (Vector4D Add)
{
	Vector4D A;
	A.w = w + Add.w;
	A.x = x + Add.x;
	A.y = y + Add.y;
	A.z = z + Add.z;
	return Vector4D(x + Add.x, y + Add.y, z + Add.z, w + Add.w);
}

Vector4D Vector4D::operator- (Vector4D sub)
{
	Vector4D B;
	B.w = w - sub.w;
	B.x = x - sub.x;
	B.y = y - sub.y;		B.z = z - sub.z;
	return Vector4D(x - sub.x, y - sub.y, z - sub.z, w - sub.w);
}

Vector4D Vector4D::operator* (Vector4D Mult)
{
	Vector4D C;
	C.w = w * Mult.w;
	C.x = x * Mult.x;
	C.y = y * Mult.y;
	C.z = z * Mult.z;
	return Vector4D(x * Mult.x, y * Mult.y, z * Mult.z, w * Mult.w);
}

Vector4D Vector4D::Magnitude(Vector4D Mag)
{
	Vector4D D;
	D.x = sqrt((x * Mag.x) + (y * Mag.y) + (z * Mag.z) + (w * Mag.w));
	return D;
}

Vector4D Vector4D::Normalize(Vector4D Nor)
{
	Vector4D E;
	E.x = x / Nor.x;
	E.y = y / Nor.y;
	E.z = z / Nor.z;
	E.w = w / Nor.w;
	return E;
}

Vector4D Vector4D::Dot(Vector4D Dot)
{
	Vector4D F;
	F.x = (x * Dot.x) + (y * Dot.y) + (z * Dot.z) + (w * Dot.w);
	return F;
}



Matrix2 Matrix2::operator*(Matrix2 Mult)
{
	Matrix2 tmp;

	tmp.x1 = x1 * x1 + x2 * y1;
	tmp.x2 = x1 * x2 + x2 * y2;
	tmp.y1 = y1 * x1 + y2 * x2;
	tmp.y2 = y1 * x2 + y2 * y2;

	return tmp;
}

Matrix3 Matrix3::operator*(Matrix3 Mult)
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

Matrix4 Matrix4::operator*(Matrix4 Mult)
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



int main()
{
	return 0;
}



//
//struct nodeType
//{
//	nodeType() {}
//	int info;
//	nodeType * link;
//};
//
//int main()
//{	
//	nodeType *a = new nodeType();
//	nodeType *b = new nodeType();
//	nodeType *c = new nodeType();
//	a->info = 0;
//	b->info = 2;
//	c->info = 4;
//
//	c->link = b;
//	b->link = a;
//
//	nodeType * head = c;
//	while (head != nullptr)
//	{
//		cout << head->info; //Here it's going to say "Exception thrown: read access violation", just click break, go to the bottom and open the window.
//		head = head->link;
//	}
//	
//	
//	//a.link = head;
//	//Vector2D Bob = Vector2D(2, 7);
//	//Vector2D Joe = Vector2D(2, 7);
//	//Vector2D Add(2, 7);
//	//assert(Bob + Joe == Vector2D(4, 14));
//	////Vector2D Subtract(2, 7);
//	////assert(2 - 7 == -5);
//	////Vector2D ScalarMult(5.0f, 9.0f);
//	////assert(5.0f * 9.0f == 45.0f);
//	////Vector3D Adds(2, 7, 8);
//	////assert(2 + 7 + 8 == 17);
//	////Vector3D Subtracts(4, 6, 8);
//	////assert(4 - 6 - 8 == -10);
//	////Vector3D ScalarMults(3.0f, 7.0f, 9.0f);
//	////assert(3.0f * 7.0f * 9.0f == 189.0f);
//	system("pause");
//	return 0;
//}