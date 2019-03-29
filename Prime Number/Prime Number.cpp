#include<iostream>
using namespace std;
void  primeNumber(int &n)
{
	bool flag = true;
	for (int i = 2; i<n; i++)
	{
		if (n%i == 0)
		{
			flag = false;
		}
	}
	if (flag == false)
	{
		cout << "Not Prime";
	}
	else
	{
		cout << "Prime";
	}
}
int main()
{
	int num;
	cout << "Enter the number : ";
	cin >> num;
	primeNumber(num);
}