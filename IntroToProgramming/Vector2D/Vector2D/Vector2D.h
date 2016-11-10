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

	Vector2D operator+(Vector2D Add)
	{
		Vector2D A;
		A.x = x + Add.x;
		A.y = y + Add.y;
		return A;
	}

	Vector2D operator-(Vector2D sub)
	{
		Vector2D B;
		B.x = x - sub.x;
		B.y = y - sub.y;
		return B;
	}

	Vector2D operator*(Vector2D Mult)
	{
		Vector2D C;
		C.x = x * Mult.x;
		C.y = y * Mult.y;
		return C;
	}
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

	Vector3D operator+(Vector3D Add)
	{
		Vector3D A;
		A.x = x + Add.x;
		A.y = y + Add.y;
		A.z = z + Add.z;
		return A;
	}

	Vector3D operator-(Vector3D sub)
	{
		Vector3D B;
		B.x = x - sub.x;
		B.y = y - sub.y;
		B.z = z - sub.z;
		return B;
	}

	Vector3D operator*(Vector3D Mult)
	{
		Vector3D C;
		C.x = x + Mult.x;
		C.y = y + Mult.y;
		C.z = z + Mult.z;
		return C;
	}

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

	Vector4D operator+(Vector4D Add)
	{
		Vector4D A;
		A.w = w + Add.w;
		A.x = x + Add.x;
		A.y = y + Add.y;
		A.z = z + Add.z;
		return Vector4D(x + Add.x, y + Add.y, z + Add.z, w + Add.w);
	}

	Vector4D operator-(Vector4D sub)
	{
		Vector4D B;
		B.w = w - sub.w;
		B.x = x - sub.x;
		B.y = y - sub.y;
		B.z = z - sub.z;
		return Vector4D(x - sub.x, y - sub.y, z - sub.z, w - sub.w);
	}

	Vector4D operator*(Vector4D Mult)
	{
		Vector4D C;
		C.w = w * Mult.w;
		C.x = x * Mult.x;
		C.y = y * Mult.y;
		C.z = z * Mult.z;
		return Vector4D(x * Mult.x, y * Mult.y, z * Mult.z, w * Mult.w);
	}

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

	Matrix2 operator+(Matrix2 Add)
	{
		(w, x) + (y, z) == w + y, w + z, x + y, x + z;
	}

	Matrix2 operator-(Matrix2 sub)
	{
		(w, x) - (y, z) == w - y, w - z, x - y, x - z;
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
public:
	Matrix3() {}
	Matrix3(float xpos, float ypos, float zpos, float qpos, float rpos, float spos, float tpos, float upos, float vpos)
	{
		x = xpos;
		y = ypos;
		z = zpos;
		q = qpos;
		r = rpos;
		s = spos;
		t = tpos;
		u = upos;
		v = vpos;
	}

};

class Matrix4
{
private:
	float x, y, z, k, l, m, n, o, p, q, r, s, t, u, v, w;
public:
	Matrix4() {}
	Matrix4(float xpos, float ypos, float zpos, float kpos, float lpos, float mpos, float npos, float opos, float ppos, float qpos, float rpos, float spos, float tpos, float upos, float vpos, float wpos)
	{
		x = xpos;
		y = ypos;
		z = zpos;
		k = kpos;
		l = lpos;
		m = mpos;
		n = npos;
		o = opos;
		p = ppos;
		q = qpos;
		r = rpos;
		s = spos;
		t = tpos;
		u = upos;
		v = vpos;
		w = wpos;
	}

};