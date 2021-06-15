#include<iostream>
using namespace std;

int main8() {

	//可以利用 sizeof 求出数据类型占用内存大小
	//语法：sizeof(数据类型 / 变量)

	short num1 = 10;
	cout << "short占用内存为：" << sizeof(short) << endl;
	cout << "short占用内存为：" << sizeof(num1) << endl;

	int num2 = 10;
	cout << "int占用内存为：" << sizeof(num2) << endl;
	cout << "long占用内存为：" << sizeof(long) << endl;
	cout << "long long占用内存为：" << sizeof(long long) << endl;
	
	/*
	* 整形大小比较
	* short < int < long <= long long
	*/

	system("pause");

	return 0;
}