#include<iostream>
#include<algorithm>

using namespace std;

struct node{
    int data;
    struct node* next;
};

int main(){
    node* s1 = new node, *s2 = new node, *s3 = new node;
    node* p, *q = s1;//s1是头节点
    int data;
    while(cin >> data && data != -1){
        p = new node;
        p->data = data, p->next = nullptr;
        q->next = p;
        q = p;
    }
    q = s2;
    while(cin >> data && data != -1){
        p = new node;
        p->data = data, p->next = nullptr;
        q->next = p;
        q = p;
    }
    //新链表
    p = s1 -> next, q = s2 -> next;
    node* t, *pre = s3;
    while(p != nullptr && q != nullptr){
        if(p -> data == q -> data){
            t = new node;
            t->data = p->data, t->next = nullptr;
            pre->next = t;
            pre = t;
            p = p->next, q = q->next;
        }else if(p->data < q->data){
            p = p->next;
        }else{
            q = q->next;
        }
    }
    //打印新的链表s3
    t = s3 -> next;
    int cnt = 1;
    while(t != nullptr){
        if(cnt) cout << t->data, cnt = 0;
        else cout << ' ' << t->data;
        t = t -> next;
    }
    if(cnt) puts("NULL");//新链表为空
    
    return 0;
}
