//Program to solve roots of an equation using Newton Raphson method

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<iostream>
using namespace std;

#define f(x) pow(x,2.0)+(3.0*x)+1.0 //function
#define df(x) 2.0*x + 3.0 //derivative of the function

int main() {
	int i, n;
	double x0, x1, dx, x;

	x0 = 2.0;
	n = 100;

	for (i = 1; i <= n; i++) {
		dx = -double(f(x0)) / double(df(x0));
		x1 = x0 + dx;
		x0 = x1;
	}

	cout << endl << "The root is: " << x1;

	return 0;
}
