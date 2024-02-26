#pragma once
#include <iostream>

using namespace std;

class Matrix
{
private:
	int n;
	int m;
public:
	Matrix();
	Matrix(Matrix& m);
	Matrix(int n1, int m1);
	
	friend ofstream& operator <<(ostream& os, Matrix& m);
	friend ifstream& operator >>(istream& is, Matrix& m);
};
