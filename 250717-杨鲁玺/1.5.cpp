#include<iostream>
using namespace std;
int main() {
	double F;
	double C;
	cout << "请输入华氏温度:" ;
	cin >> F;
	cout << "其对应的摄氏度为:" << (F - 32) / 1.8 << "°C" << endl;
	return 0;

}
