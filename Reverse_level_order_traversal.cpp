#include <iostream>
#include<stack>
using namespace std;

struct node
{
    int data;
    node *lc;
    node *rc;
};

struct que 
{
    int status;
    node *ptr;
    que *next;
};
struct que *first=NULL;
struct que *last=NULL;

node *insert(int x,node *root)
{
    node *temp=new node;
    que *q=new que;
    temp->data=x;
    temp->lc=NULL;
    temp->rc=NULL;
    q->status=0;
    q->next=NULL;
    
    if(root==NULL)
    {
        q->ptr=temp;
        first=last=q;
        return temp;
    }
    else
    {
        if(first->status==0)
        {
            first->ptr->lc=temp;
            first->status=1;
        }
        else
        {
            first->ptr->rc=temp;
            first=first->next;
        }
        last->next = q;
        q->ptr = temp;
        last = q;
    }
    return root;
}



void level_order(node *root)
{
    que *t,*f,*l;
    f=new que;
    f->next=NULL;
    l=f;
    f->ptr=root;
    stack <int> s;
    while(f!=NULL)
    {
        s.push(f->ptr->data);
        if(f->ptr->lc)
        {
            t=new que;
            t->next=NULL;
            t->ptr=f->ptr->lc;
            l->next=t;
            l=t;
        }
        if(f->ptr->rc)
        {
            t=new que;
            t->next=NULL;
            t->ptr=f->ptr->rc;
            l->next=t;
            l=t;
        }
        f=f->next;
    }
    cout<<"Reverse level order Traversal : ";
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    
} 

int main()
{
    node *root = NULL;
    int i,j,k;
    cout<<"Enter any 5 elements : ";
    for(int i = 0; i < 5; i++)
    {
        cin>>j;
        root = insert(j,root);
    }
    level_order(root);
    return 0;
}
