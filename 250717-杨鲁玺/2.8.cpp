#include <iostream>
#include <cmath> 
#include <iomanip> 
using namespace std;


double sqrt_iterative(double a) {
  
    if (a <= 0) {
        return 0.0;
    }

    double x0 = a;  
    double x1;      
    const double eps = 1e-6;  

    
    do {
        x1 = 0.5 * (x0 + a / x0); 
        if (fabs(x1 - x0) < eps) {
            break;
        }
        x0 = x1; 
    } while (true);

    return x1;
}

int main() {
    double a;
    cout << "请输入一个非负数a：";
    cin >> a;
    double result = sqrt_iterative(a);
    cout << fixed << setprecision(6);
    cout << a << "的平方根是：" << result << endl;

    return 0;
}