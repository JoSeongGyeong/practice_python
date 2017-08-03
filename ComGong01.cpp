// ComGong01.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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


// stck frame이 만들어지는 근거가 됨...
//명세서가 됨..
int test(int s, int f)
{
	int d = s + f;
	int c = s - f;
	return c + d;
}

