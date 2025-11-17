#include<iostream>
using namespace std;
int main() {
	double x;
	cin >> x;
	double y;
	if (0 < x && x < 1) {
		cout << "y=" << 3 - 2*x  <<endl;
	}
	else if (1 <= x && x < 5) {
		cout << "y=" << (2.0/(4*x))+1 <<endl;
	}
	else if (5 <= x && x< 10) {
		cout << "y=" << x*x << endl;
	}
	else {
		cout << "输入的数值不符合规定" <<endl;
	}
}