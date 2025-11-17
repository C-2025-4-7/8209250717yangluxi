#include <iostream>
using namespace std;

int main() {
    double num1, num2;
    char op;
    cout << "请输入两个数字: ";
    cin >> num1 >> num2;
    cout << "请输入运算符：";
        cin >> op;

    
    switch (op) {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 == 0) {
            cout << "错误：除数不能为0！" << endl;
        }
        else {
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        }
        break;
    case '%':
      
        if (num2 == 0) {
            cout << "错误：取余运算的除数不能为0！" << endl;
        }
        else {
      
            cout << (int)num1 << " % " << (int)num2 << " = " << (int)num1 % (int)num2 << endl;
        }
        break;
    default:
        cout << "错误：非法运算符 '" << op << "'，请使用 +, -, *, /, %" << endl;
    }

    return 0;
}