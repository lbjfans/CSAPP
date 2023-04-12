#include<iostream>
#include<algorithm>

using namespace std;

int n;
const int N = 11;
int st[N], f[N];

void dfs(int u){
    if(u > n){
        for(int i = 1; i <= n; i++){
            cout << f[i];
        }
        cout << endl;
        return;
    }
    for(int i = 1; i <= n; i++){
        if(!st[i]){
            st[i] = 1;
            f[u] = i;
            dfs(u + 1);
            st[i] = 0;
            f[u] = 0;
        }
    }
}

int main(){
    cin >> n;
    
    dfs(1);
    
    return 0;
}
