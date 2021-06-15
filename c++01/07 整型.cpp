#include<iostream>
using namespace std;

/*
* 整型
* 1、短整型    2byte
* 2、整型	   4byte
* 3、长整形	   win 4byte; linux(32位) 4byte; linux(64位) 8byte
* 4、长长整形  8byte
*/
int main7() {

	//1、短整型
	short num1 = 10;

	//2、整型
	int num2 = 10;

	//3、长整形
	long num3 = 10;

	//4、长长整形
	long long num4 = 10;

	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	cout << "num4 = " << num4 << endl;

	system("pause");

	return 0;
}