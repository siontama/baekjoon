#define _USE_MATH_DEFINES

#include<iostream>
#include<cstdio>
#include<cmath>

#include<algorithm>
#include<functional>

#include<string>
#include<vector>
#include<queue>
#include<stack>

using namespace std;
const int INF = numeric_limits<int>::max();
const double pi = M_PI;

int main()
{
	double k;
	cin >> k;
	double d1, d2;
	cin >> d1 >> d2;
	printf("%.7lf", k*k - ((d1 - d2) / 2)* ((d1 - d2) / 2));
}