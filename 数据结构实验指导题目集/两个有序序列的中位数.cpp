#include<iostream>
#include<algorithm>

using namespace std;

int n;
const int N = 1e5 + 10;
int a[N], b[N];

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i =  1; i <= n; i++) cin >> b[i];
    
    int cnt = (n * 2 + 1) / 2;
    int i = 1, j = 1, res = 0;
    while(i <= n && j <= n){
        if(a[i] < b[j]) res = a[i], i++;
        else res = b[j], j++;
        cnt--;
        if(cnt == 0){
            break;
        }
    }
    if(cnt == 0){
        cout << res;
        return 0;
    }
    //其中一个到头了，另一个还没有
    while(i <= n){
        res = a[i];
        i++;
        cnt--;
        if(cnt == 0) break;
    }
    while(j <= n){
        res = b[j];
        j++;
        cnt--;
        if(cnt == 0) break;
    }
    //output
    cout << res;
    
    return 0;
}
