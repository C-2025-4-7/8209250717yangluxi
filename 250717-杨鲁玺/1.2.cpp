#include<iostream>
using namespace std;

int main() {
	const double PI = 3.14;
	double r, h;
	cout << "请分别输入半径和锥高:" ;
	cin >> r >> h;
	cout << "圆锥的体积为:" << PI * r * r * h / 3 << endl;
}