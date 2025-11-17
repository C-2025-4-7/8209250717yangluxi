#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cout << "请输入边长" << endl;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a) {
		if (a == b || a == c || b == c) {
			cout << "是等腰三角形" << endl;

		}
		else {
			cout << "不是等腰三角形" << endl;
		}
	}
	else {
		cout << "无法构成三角形" << endl;
	}
}