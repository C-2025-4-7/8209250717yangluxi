#include <iostream>
using namespace std;
int gcd(int a, int b) {
    
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


int main() {
    int a, b;

    cout << "请输入两个正整数：";
    cin >> a >> b;

    
    if (a <= 0 || b <= 0) {
        cout << "错误：请输入正整数！" << endl;
        return 1;
    }

  
    int gcd_value = gcd(a, b);

   
    int lcm_value = (a / gcd_value) * b;

    
    cout << "最大公约数：" << gcd_value << endl;
    cout << "最小公倍数：" << lcm_value << endl;

    return 0;
}

