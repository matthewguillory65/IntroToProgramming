#include <iostream>
using namespace std;
class Animal
{
private:

public:
	Animal() {}
	virtual void speak() = 0;
};
class Bird : public Animal
{
public:
	Bird() {}
	void speak();
};
class Mammal : public Animal
{
public:
	Mammal() {}
	void speak();
	void bark();
};
class Cat : public Mammal
{
public:
	Cat() {}
	void speak();
	void purr();
};
class Dog : public Mammal
{
public:
	Dog() {}
	void speak();
	void bark ();
};
void Animal::speak()
{
	
}
void Mammal::speak()
{

}
void Mammal::bark()
{
	
}
void Bird::speak()
{
	printf("tweet");
}
void Cat::speak()
{
	printf("meow");
}
void Cat::purr()
{
	printf("purr");
}
void Dog::speak()
{
	printf("woof");
}
void Dog::bark()
{
	printf("bark");
}
int main()
{


	system("pause");
	return 1;
}