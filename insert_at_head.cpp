#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node*next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if(head==NULL)
    {
        head=newNode;
        cout<<endl<<"Insert at Head "<<endl<<endl;
        return;
    }
    Node *tmp = head;
    while(tmp->next != NULL)
    {
        tmp=tmp->next;
    }
    tmp->next= newNode;
    cout<<endl<<"Inserted at tail"<<endl<<endl;

}
void print_linkleast(Node * head)
{
    cout<<endl;
    cout<<"Your Linked List : ";
    Node*tmp= head;
    while(tmp!= NULL)
    {
        cout<<tmp->val<< " ";
        tmp=tmp->next;
    }
    cout<<endl<<endl;
}
void insert_at_position(Node* head,int pos,int v)
{
    Node* newNode= new Node(v);
    Node* tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    cout<<endl<<endl<<"Insert at position "<<pos<<endl<<endl;
}
void insert_at_head(Node* &head,int v)
{
    Node* newNode= new Node(v);
    newNode->next = head;
    head = newNode;
    cout<<endl<<"Inserted at head"<<endl<<endl;
}
int main()
{
    Node *head= NULL;
    while(true)
    {
    cout<<"option1: Insert at Tail"<<endl;
    cout<<"option2: Print Link List"<<endl;
    cout<<"option3: Insert at any Position"<<endl;
    cout<<"option4: Insert at Head"<<endl;
    cout<<"option5: Treminate"<<endl;
    int op;
    cin>>op;
    if(op==1)
    {
        cout<<"Please Enter a value : ";
        int v;
        cin>>v;
        insert_at_tail(head,v);
    }
    else if(op==2)
    {
        print_linkleast(head);
    }
    else if(op==3)
    {
        int pos,v;
        cout<<"Enter Position: ";
        cin>>pos;
        cout<<"Enter Value: ";
        cin>>v;
        if(pos==0)
        {
           insert_at_head(head,v);
        }
        else
        {
            insert_at_position(head,pos,v);
        }    
    }
    else if (op==4)
    {
        int v;
        cout<<"Enter Value: ";
        cin>>v;
        insert_at_head(head,v);
    }
    
    else if(op==5)
    {
        break;
    }
    }  
    
    return 0;
}
