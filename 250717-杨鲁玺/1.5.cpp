#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float F, C;
	cout << "请输入华氏温度：" ;
	cin >> F;
	cout <<fixed<<setprecision(2);
	cout << "摄氏温度为：" << (C = 5 * (F - 32) / 9 )<< endl;
	return 0;

}
