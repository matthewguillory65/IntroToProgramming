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