#include<iostream>
using namespace std;

int main()
{
	int a = 0;
	int b = 0;
	cout << "give 2 numbers:" << endl;
	cin >> a >> b;

	int max = 0;
	max = a > b ? a : b;
	cout << "max = "<<max << endl;
	system("pause");
	return 0;

}