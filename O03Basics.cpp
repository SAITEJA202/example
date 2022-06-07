#include<iostream>
using std::cout;
namespace nm3
{
	int i = 100;
	int main1()
	{
		int i = 99;
		cout << "i=" << i << '\n';
		//cout << "::i=" << ::i << '\n';
		return 0;
	}

	int x;
	int main2()
	{
		int x = 0;
		cout << "x=" << x << '\n';
		//cout << "::x=" << ::x << '\n';
		return 0;
	}

	int arr[4];
	int& getArrayAt(int index)
	{
		return arr[index];
	}
	int main3()
	{
		int arr1[4];
		getArrayAt(1) = 999;
		for (size_t i = 0; i < 4; i++)
		{
			cout << "arr[" << i << "]=" << arr[i] << '\n';
		}
		cout << "___________________________________\n";
		for (size_t i = 0; i < 4; i++)
		{
			cout << "arr1[" << i << "]=" << arr1[i] << '\n';
		}
		return 0;
	}

	int main()
	{
		int arr1[4] = { 11,22,33,44 };
		for (int rng : arr1)//Range loop //introduced in modern c++11 (c++11,14,17,20)
		{
			cout << rng << '\t';
		}
		cout << '\n';
		return 0;
	}
}