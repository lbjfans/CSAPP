#include<iostream>
#include<algorithm>

using namespace std;

typedef pair<int, int> PII;

const int N = 1e6;
long long n;
PII res[N];
int index;

int main(){
    cin >> n;
    int t = n;
    if(n == 1){
        printf("1=1");
        return 0;
    }
    
    //一个数只有一个>=sqrt()的质因子
    for(int i = 2; i <= n / i; i++){
        if(n % i == 0){
            int cnt = 0;
            while(n % i == 0){
                cnt++;
                n /= i;
            }
            res[index++] = {i, cnt};
        }
    }
    if(n > 1) res[index++] = {n, 1};
    
    //output
    cout << t << "=";
    for(int i = 0; i < index; i++){
        if(i != 0) cout << '*';
        int id = res[i].first, k = res[i].second;
        if(k == 1) cout << id;
        else cout << id << '^' << k;
    }
    
    return 0;
}
