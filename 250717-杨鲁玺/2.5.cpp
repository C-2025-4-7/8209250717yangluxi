#include<iostream>
#include<string>
using namespace std;
int main() 
{
	int 字母 = 0;
	int 空格 = 0;
	int 数字 = 0;
	int 其他 = 0;
	char c;
	cout << "请输入一句话：";
	string str;
	getline(cin, str);
	for (char c : str) {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
			字母++;

		}
		else if (c >= '0' && c <= '9') {
			数字++;

		}
		else if (c == ' ') {
			空格++;

		}
		else {
			其他++;
		}

	}
	cout << "字母个数；" << 字母 << endl;
	cout << "空格个数；" << 空格 << endl;
	cout << "数字个数：" << 数字 << endl;
	cout << "其他字符个数" << 其他 << endl;
	return 0;


}