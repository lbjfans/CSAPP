#include<algorithm>
#include<iostream>

using namespace std;

int n;
const int N = 1e6;
int a[N], res = 1;

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    
    int cnt = 1, r = 1;
    for(int i = 2; i <= n; i++){
        if(a[i] > a[i - 1]){
            cnt++;
            if(cnt > res){
                res = cnt;
                r = i;
            }
        }else{
            cnt = 1;
        }
    }
    //output
    for(int i = r - res + 1; i <= r; i++){
        cout << a[i];
        if(i != r) cout << ' ';
    }
    
    
    return 0;
}
