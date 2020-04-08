#pragma once
class StaticValue
{
private:
	static int value;
	//StaticValue();
public:
	static void IncValue();
	static int GetValue();
	~StaticValue();
};

