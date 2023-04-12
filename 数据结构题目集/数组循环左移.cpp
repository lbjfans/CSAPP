#include<iostream>
#include<algorithm>

using namespace std;

int n, m;
const int N = 110;
int a[N];

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> a[i];
    m %= n;
    
    //Èı´Î·­×ª
    reverse(a, a + m), reverse(a + m, a + n), reverse(a, a + n);
    //output
    for(int i = 0; i < n; i++){
        if(i != 0) cout << ' ';
        cout << a[i];
    }
    
    return 0;
}
