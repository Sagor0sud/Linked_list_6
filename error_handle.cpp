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
        if(tmp==NULL)
        {
            cout<<endl<<"Invaild Index"<<endl<<endl;
            return;
        }
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
void delete_from_Position(Node* head,int pos)
{
    Node* tmp =head;
    for (int i = 1; i <= pos-1; i++)
    {
       tmp=tmp->next;
       if(tmp==NULL)
        {
            cout<<endl<<"Invaild Index"<<endl<<endl;
            return;
        }
        
    }
    if(tmp->next==NULL)
    {
        cout<<endl<<"Invaild Index"<<endl<<endl;
        return;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout<<endl<<endl<<"Delete at Postion"<<endl<<endl;
}
void delete_head(Node* &head)
{
    if (head==NULL)
    {
        cout<<endl<<"Invaild Index"<<endl<<endl;
        return;
    }
    
    Node* deletehead=head;
    head=head->next;
    delete deletehead;
    cout<<endl<<endl<<"Delete head"<<endl<<endl;

}

int main()
{
    Node *head= NULL;
    while(true)
    {
    cout<<"option1: Insert at Tail"<<endl;//done
    cout<<"option2: Print Link List"<<endl;//done
    cout<<"option3: Insert at any Position"<<endl;//done
    cout<<"option4: Insert at Head"<<endl;//done
    cout<<"option5: Delete From Position"<<endl;//done
    cout<<"option6: Delete head"<<endl;//done
    cout<<"option7: Treminate"<<endl;//done
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
        int pos;
        cout<<"Enter Position: ";
        cin>>pos;
        if (pos == 0)
        {
           delete_head(head); 
        }
        else
        {
             delete_from_Position(head,pos);
        }
        
       
    }
    else if(op==6)
    {
        delete_head(head); 
    }
    else if(op==7)
    {
        break;
    }
    }  
    
    return 0;
}
