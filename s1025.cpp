#include<bits/stdc++.h>
using namespace std;

typedef struct LNode{
    string add;
    int data;
    struct LNode* next;
}*pNode,NODE;

struct Node{
    string add;
    int data;
    string next;
};
pNode Reverse(pNode pHead,int k)
{
    pNode n=pHead->next;
    pNode o=n->next;
    pNode t;
    for(int i=0;i<k-1;i++)
    {
        t=o->next;
        o->next=n;
        n=o;
        o=t;
    }
    pHead->next->next=o;
    return n;
}
int main()
{
    #ifdef ONLINE_JUDGE
    #else
        freopen("1001.txt","r",stdin);
    #endif // ONLINE_JUDGE

    string first,add;
    int n,k,cnt=0;
    cin>>first>>n>>k;
    map<string,Node> mp;
    Node nt;
    for(int i=0;i<n;i++)
    {
        cin>>nt.add>>nt.data>>nt.next;
        mp[nt.add]=nt;
    }
    add=first;
    pNode L=(pNode)malloc(sizeof(NODE));
    pNode p=L;
    p->next=NULL;
    while(add!="-1")
    {
        pNode pn=(pNode)malloc(sizeof(NODE));
        pn->add=mp[add].add;
        pn->data=mp[add].data;
        pn->next=NULL;
        p->next=pn;
        p=p->next;
        add=mp[add].next;
        cnt++;
    }
    p=L;
    for(int i=0;i<cnt/k;i++)
    {
        p->next=Reverse(p,k);
        for(int j=0;j<k;j++)
        {
            p=p->next;
        }
    }
    p=L;
    while(p->next!=NULL)
    {
        p=p->next;
        if(p->next!=NULL)
            printf("%s %d %s\n",p->add.c_str(),p->data,p->next->add.c_str());//使用printf可以避免超时
            //cout<<p->add<<" "<<p->data<<" "<<p->next->add<<endl;
        else
            printf("%s %d -1\n",p->add.c_str(),p->data);
            //cout<<p->add<<" "<<p->data<<" -1"<<endl;
    }
    return 0;
}
