#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int a, n;
vector<int>res;

int main(){
    cin >> a >> n;
    //1e5, ����ÿ����λ��ʹ�ó˷���ʱ�临�Ӷ����Ϊ9e5
    int t;
    for(int i = n; i >= 1; i--){
        t += i * a;
        res.push_back(t % 10);
        t /= 10;//��λ
    }
    //��λ
    while(t){
        res.push_back(t % 10);
        t /= 10;
    }
    //output, ����n����0�����
    if(res.empty()){
        cout << 0;
        return 0;
    }
    for(auto it = res.rbegin(); it != res.rend(); it++){
        cout << *it;
    }

    return 0;
}
