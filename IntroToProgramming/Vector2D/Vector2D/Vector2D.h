//#pragma once
//
//class Vector2D
//{
//private:
//	float x, y;
//public:
//	Vector2D() {}
//
//	Vector2D(float xpos, float ypos) {
//		x = xpos; y = ypos;
//	}
//
//	Vector2D Add(const Vector2D &d)
//	{
//		Vector2D a = Vector2D(x + d.x, y + d.y);
//		return a;
//	}
//
//	Vector2D operator+(Vector2D Add)
//	{
//		Vector2D A;
//		A.x = x + Add.x;
//		A.y = y + Add.y;
//		return A;
//	}
//
//	Vector2D Subtract(const Vector2D &d)
//	{
//		Vector2D s = Vector2D(x - d.x, y - d.y);
//		return s;
//	}
//
//	Vector2D operator-(Vector2D sub)
//	{
//		Vector2D B;
//		B.x = x - sub.x;
//		B.y = y - sub.y;
//		return B;
//	}
//
//	Vector2D ScalarMult(float k)
//	{
//		Vector2D c = Vector2D(x * k, y * k);
//		return c;
//	}
//
//	Vector2D operator*(Vector2D Mult)
//	{
//		Vector2D C;
//		C.x = x * Mult.x;
//		C.y = y * Mult.y;
//		return C;
//	}
//};
//
//class Vector3D
//{
//private:
//	float x, y, z;
//public:
//	Vector3D() {}
//	Vector3D(float xpos, float ypos, float zpos) {
//		x = xpos; y = ypos; z = zpos;
//	}
//
//	Vector3D Adds(const Vector3D &d)
//	{
//		Vector3D a = Vector3D(x + d.x, y + d.y, z + d.z);
//		return a;
//	}
//
//	Vector3D operator+(Vector3D Add)
//	{
//		Vector3D A;
//		A.x = x + Add.x;
//		A.y = y + Add.y;
//		A.z = z + Add.z;
//		return A;
//	}
//
//	Vector3D Subtracts(const Vector3D d)
//	{
//		Vector3D s = Vector3D(x - d.x, y - d.y, z - d.z);
//		return s;
//	}
//
//	Vector3D operator-(Vector3D sub)
//	{
//		Vector3D B;
//		B.x = x - sub.x;
//		B.y = y - sub.y;
//		B.z = z - sub.z;
//		return B;
//	}
//
//	Vector3D ScalarMults(float k)
//	{
//		Vector3D c = Vector3D(x * k, y * k, z * k);
//		return c;
//	}
//
//	Vector3D operator*(Vector3D Mult)
//	{
//		Vector3D C;
//		C.x = x + Mult.x;
//		C.y = y + Mult.y;
//		C.z = z + Mult.z;
//		return C;
//	}
//
//};
//
