// ComGong01.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int test(int a, int  b);

void change_value(int * x, int value)
{
	*x = value;
	cout << "&*x: " << &*x << "     &x: " << &x<< "      x:  " << x <<  "    *x:   " << *x <<" in change_value" << endl;
}

int main()
{

	int a = 10;
	int b = 5;
	int x = 10;

	change_value(&x, 20);
	cout << "x : " << x << "      &x :   " << &x << " in main" << endl;
	int res = test(a, b);
	cout << "result of test : " << res << endl;

    return 0;
}


// stck frame�� ��������� �ٰŰ� ��...
//������ ��..
int test(int s, int f)
{
	int d = s + f;
	int c = s - f;
	return c + d;
}

