#include<iostream>
#include<algorithm>

using namespace std;

int d, p;

int main(){
    cin >> d >> p;
    
    //经典的博弈论，第一想法是二分，数量--，人数++，人数>一半，输出数量
    //check想不到
    //改为贪心，一个人是d, 两个人是0+d, 三个人是(d-1)+1+0
    //四个人是(d-3)+0+2+1, 五个人是(d-3)+1+0+0+2
    //六个人是(d-4)+0+2+1+1+0, 七个人是(d-4)+0+1+0+0+2+1
    //找规律
    if(p == 3) cout << d - 1;
    else cout << d - p / 2 - 1;
    
    return 0;
}
