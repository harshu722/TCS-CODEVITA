#include<bits/stdc++.h>
using namespace std;
int check(string number)
{
	int num = number.length();
	int Sum = 0;
	for (int i=0; i<num; i++)
	    Sum += (number[i]-'0');
	return (Sum % 3 == 0);
}
int main()
{
	string number = "1331";
	check(number)? cout << "Yes" : cout << "No";
	return 0;
}
