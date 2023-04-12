#include<stack>
#include<cstring>
#include<iostream>

using namespace std;

int n, m;
stack<char>st;
char ch[100];

int main() {//其实可以用cnt检查个数，但是考察堆栈，用stack写一下
    cin >> n >> m;

    while (n--) {
        scanf("%s", ch);
        while (st.size()) st.pop();
        int f = 1;

        int len = strlen(ch);
        for (int i = 0; i < len; i++) {
            if (ch[i] == 'S') {
                if (st.size() >= m) {
                    cout << "NO\n";
                    f = 0;
                    break;
                }
                st.push(ch[i]);
            }
            else {
                if (st.empty()) {
                    cout << "NO\n";
                    f = 0;
                    break;
                }
                st.pop();
            }
        }
        if (f) {
            if (st.empty()) puts("YES");
            else puts("NO");
        }
    }


    return 0;
}
