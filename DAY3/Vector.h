#pragma once

// Vector.h
class Vector
{
	int* ptr;
	int sz;
public:
	Vector(int size, int value = 0);
	~Vector();
	int& at(int idx);
	int size();
	bool empty();
	void resize(int newsize);
};


