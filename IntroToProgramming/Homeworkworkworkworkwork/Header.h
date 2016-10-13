#pragma once
class Application {
public:
	virtual void Start() = 0;
	void Run();
	virtual void Shutdown() = 0;
	Application();
	~Application();
	virtual void update() = 0;
	bool gameover();
};

bool gameover()
{
	return false;
}

void Update()
{

}

void Shutdown()
{

}

void Application()
{

}

void Run()
{
	while (!gameover)
	{
		Update();
	}
	Shutdown();
}
class Math
{
	static int add(int, int);
};