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
	for (int j = 1;j<size;j++)//�㷨���Ĳ��ֿ�ʼ
	{
		int key = p[j];//��ʼ�����������м����
		int i1;
		for (i1 = j - 1; i1 >= 0 && p[i1] > key; i1--)
		{
			p[i1 + 1] = p[i1];//�������ı�ǰ��Ĵ���һֱ���½���
		}
		//do {���˶�Ϊ������룬��Ϊ���ݱ������ı���˳���ܻ����һ�Σ�Ӧ����while������do��
		//	p[i1 + 1] = p[i1];
		//	i1 = i1 - 1;
		//  while (i1 >= 0 && p[i1] > key);
		p[i1 + 1] = key;//��p[j]��ֵ������ŵ��ĵط�������ͻᱻ�����С��ֵ
	}
	for (int m = 0; m < size; m++)
	{
		cout << "The " << m + 1 << "th number is " << p[m] << endl;
	}
	delete[]p;
	return 0;
}
