#include<iostream>
#include<string.h>
#include<sstream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main()
{
	unsigned long long int a, b, c, d, a1, b1, c1, d1,x;
	cin >> a >> b >> c >> d;
	a1 = a % 100;
	b1 = b % 100;
	c1 = c % 100;
	d1 = d % 100;
	x = a1 * b1 * c1 * d1;
	if(x%100<=9)
	{
		cout<<"0" << x % 100;
	}
	else {
		cout << x % 100;
	}


}