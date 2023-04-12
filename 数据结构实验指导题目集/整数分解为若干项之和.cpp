#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int n;
vector<int>res;
int cnt;

void dfs(int u, int start){
    if(u == n){
        //7=...
        cout << n << "=" << res[0];
        for(int i = 1; i < res.size(); i++){
            cout << "+" << res[i];
        }
        cnt++;
        if(cnt % 4 == 0) puts("");
        else if(res[0] != n) cout << ";";//最后一个7=7没有分号
        return;
    }
    for(int i = start; i <= n - u; i++){
        res.push_back(i);
        dfs(u + i, i);
        res.pop_back();
    }
}

int main(){
    cin >> n;
    
    dfs(0, 1);
    
    return 0;
}
