#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    const double price = 0.8; 
    int day = 1;              
    int apples = 2;          
    double total_cost = 0;  
    int total_days = 0;      

    cout << "每天购买情况：" << endl;
    cout << "第" << day << "天：购买" << apples << "个，花费" << apples * price << "元" << endl;

  
    total_cost += apples * price;
    total_days = day;

   
    while (true) {
        day++;
        apples *= 2;
 
        if (apples > 100) {
            break;
        }

       
        total_cost += apples * price;
        total_days = day;

        cout << "第" << day << "天：购买" << apples << "个，花费" << apples * price << "元" << endl;
    }

   
    double average = total_cost / total_days;

    
    cout << fixed << setprecision(2);
    cout << "总天数：" << total_days << "天，总花费：" << total_cost << "元" << endl;
    cout << "每天平均花费：" << average << "元" << endl;

    return 0;
}