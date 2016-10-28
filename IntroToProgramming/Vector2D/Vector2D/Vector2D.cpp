#include <iostream>
#include "Vector2D.h"
#include <cassert>

using namespace std;

struct nodeType
{
	nodeType() {}
	int info;
	nodeType * link;
};

int main()
{	
	nodeType *a = new nodeType();
	nodeType *b = new nodeType();
	nodeType *c = new nodeType();
	a->info = 0;
	b->info = 2;
	c->info = 4;

	c->link = b;
	b->link = a;

	nodeType * head = c;
	while (head != nullptr)
	{
		cout << head->info; //Here it's going to say "Exception thrown: read access violation", just click break, go to the bottom and open the window.
		head = head->link;
	}
	
	
	//a.link = head;
	//Vector2D Bob = Vector2D(2, 7);
	//Vector2D Joe = Vector2D(2, 7);
	//Vector2D Add(2, 7);
	//assert(Bob + Joe == Vector2D(4, 14));
	////Vector2D Subtract(2, 7);
	////assert(2 - 7 == -5);
	////Vector2D ScalarMult(5.0f, 9.0f);
	////assert(5.0f * 9.0f == 45.0f);
	////Vector3D Adds(2, 7, 8);
	////assert(2 + 7 + 8 == 17);
	////Vector3D Subtracts(4, 6, 8);
	////assert(4 - 6 - 8 == -10);
	////Vector3D ScalarMults(3.0f, 7.0f, 9.0f);
	////assert(3.0f * 7.0f * 9.0f == 189.0f);
	system("pause");
	return 0;
}