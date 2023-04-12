#include<iostream>
#include<algorithm>

using namespace std;

int res, f = 1;//f即flag, 0代表错误发生；

int main(){
    
    int a, b;
    char op;
    cin >> a;//第一个数字，这里加减乘除没有优先级区别
    cin >> op;
    while(op != '='){
        cin >> b;
        switch(op){
            case '+': a += b; break;
            case '-': a -= b; break;
            case '*': a *= b; break;
            case '/': 
                    if(b == 0){
                        f = 0;
                        break;
                    }
                a /= b;
                break;
            default: f = 0;break;
        }
        cin >> op;
    }
    if(f == 0) puts("ERROR");
    else cout << a;
    
    return 0;
}
