#include<iostream>
using namespace std;

int main8() {

	//�������� sizeof �����������ռ���ڴ��С
	//�﷨��sizeof(�������� / ����)

	short num1 = 10;
	cout << "shortռ���ڴ�Ϊ��" << sizeof(short) << endl;
	cout << "shortռ���ڴ�Ϊ��" << sizeof(num1) << endl;

	int num2 = 10;
	cout << "intռ���ڴ�Ϊ��" << sizeof(num2) << endl;
	cout << "longռ���ڴ�Ϊ��" << sizeof(long) << endl;
	cout << "long longռ���ڴ�Ϊ��" << sizeof(long long) << endl;
	
	/*
	* ���δ�С�Ƚ�
	* short < int < long <= long long
	*/

	system("pause");

	return 0;
}