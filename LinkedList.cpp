//WAP TO IMPLEMENT LINKED LIST IN C++?
#include<iostream>
using namespace std;
class Node
{
public:
    int info;
    Node* next;
};
class List:public Node
{
 
    Node *head,*last;
public:
    List()
    {
        head=NULL;
        last=NULL;
    }

void insert() //or adding at last
{
    Node *temp;
    temp=new Node;
    int n;
    cout<<"\nEnter an Element:";
    cin>>n;
    temp->info=n;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
        last=head;
    }
 
    else
    {
        last->next=temp;
        last=temp;
    }
    cout<<"node inserted"<<endl;
}
void addbegin()
{
    Node *temp;
    temp=new Node;
    int n;
    cout<<"\nEnter an Element:";
    cin>>n;
    temp->info=n;
    temp->next=NULL;       
    if(head==NULL)
    {
        head=temp;
        last=head;
    }
    else
     {
         temp->next=head;
         head=temp;
     }
    cout<<"node added at beginning"<<endl;
}

void addinbetween()
{
    Node *prev,*cur;
    prev=NULL;
    cur=head;
    int count=1,pos,n;
    Node *temp=new Node;
    cout<<"\nEnter an Element:";
    cin>>n;
    temp->info=n;
    temp->next=NULL;
       cout<<"\nEnter the Position to Insert:";
       cin>>pos;
        while(count!=pos)
        {
            prev=cur;
            cur=cur->next;
            count++;
        }
        if(count==pos)
        {
            prev->next=temp;
            temp->next=cur;
        }
        else
            cout<<"\nNot much elements";
    
}
void deleteatany()
{    Node *prev=NULL,*cur=head;
    int count=1,pos;
     cout<<"\nEnter the Position of Deletion:";
        cin>>pos;
        while(count!=pos)
        {
            prev=cur;
            cur=cur->next;
            count++;
        }
        if(count==pos)
        {
            cout<<"\nDeleted Element is: "<<cur->info<<endl;
            prev->next=cur->next;
        }
        else
            cout<<"\nNo item to Delete";
        
}
void search()
{
    int item,pos=0;
    bool flag=false;
    if(head==NULL)
    {
        cout<<"List is Empty";
        return;
    }
    cout<<"Enter the Value to be Searched:";
    cin>>item;
    Node *temp;
    temp=head;
    while(temp!=NULL)
    {
        pos++;
        if(temp->info==item)
        {
            flag=true;
            cout<<"Element  "<<item<<" is Found at "<<pos<<" Position";
            return;
        }
        temp=temp->next;
    }
    if(flag==false)
    {
        cout<<"Element not Found in the List"<<endl;
    }
}
void display()
{
    Node *temp=head;
    if(temp==NULL)
    {
        cout<<"\nList is Empty";
    }
    while(temp!=NULL)
    {
        cout<<temp->info;
        cout<<"--->";
        temp=temp->next;
    }
    cout<<"NULL";
}
};
int main()
{
    List l;
    int m;
    while(1)
    {
        
        cout<<"\n-----------------MENU --------------------\n1:INSERT\n2:ADD IN beginning\n3:ADD AT POSSITION\n4:DELETE AT ANY POSSITION\n5:display\n6:Search ELEMENT\n7:EXIT";
        cout<<"\nEnter Your Choice:";
        cin>>m;
        switch(m)
        {
        case 1:
            l.insert();
            break;
        
        case 2:
            l.addbegin();
            break;
        case 3:
            l.addinbetween();
            break;
        case 4:
            l.deleteatany();
            break;
        case 5:
            l.display();
            break;
        case 6:
            l.search();
            break;
        case 7:
            return 0;
        }
    }
    return 0;
}
