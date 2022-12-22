#include <iostream>
using namespace std;
int main()
{
	int size;
	cout << "Please input the size of the number: ";
	cin >> size;
	int* p = new int[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Please input the " << i + 1 << "th number: ";
		cin >> p[i];
	}
	for (int j = 1;j<size;j++)//算法核心部分开始
	{
		int key = p[j];//开始交换，设置中间变量
		int i1;
		for (i1 = j - 1; i1 >= 0 && p[i1] > key; i1--)
		{
			p[i1 + 1] = p[i1];//如果后面的比前面的大，则一直往下交换
		}
		//do {（此段为错误代码，因为根据编译器的编译顺序，总会操作一次，应该用while···do）
		//	p[i1 + 1] = p[i1];
		//	i1 = i1 - 1;
		//  while (i1 >= 0 && p[i1] > key);
		p[i1 + 1] = key;//将p[j]赋值给最后安排到的地方，否则就会被赋予更小的值
	}
	for (int m = 0; m < size; m++)
	{
		cout << "The " << m + 1 << "th number is " << p[m] << endl;
	}
	delete[]p;
	return 0;
}
