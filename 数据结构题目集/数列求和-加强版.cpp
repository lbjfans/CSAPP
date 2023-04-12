#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int a, n;
vector<int>res;

int main(){
    cin >> a >> n;
    //1e5, 所以每个数位都使用乘法，时间复杂度最大为9e5
    int t;
    for(int i = n; i >= 1; i--){
        t += i * a;
        res.push_back(t % 10);
        t /= 10;//进位
    }
    //进位
    while(t){
        res.push_back(t % 10);
        t /= 10;
    }
    //output, 特判n等于0的情况
    if(res.empty()){
        cout << 0;
        return 0;
    }
    for(auto it = res.rbegin(); it != res.rend(); it++){
        cout << *it;
    }

    return 0;
}
