#include<algorithm>
#include<iostream>

using namespace std;

int k;
const int N = 100100;
int f[N], a[N];

int main(){
    cin >> k;
    for(int i = 1; i <= k; i++) cin >> a[i];
    
    int res = 0;
    for(int i = 1; i <= k; i++){
        f[i] = f[i - 1] + a[i];
        if(f[i] < 0) f[i] = 0;
        res = max(f[i], res);
    }
    cout << res;
    
    return 0;
}
