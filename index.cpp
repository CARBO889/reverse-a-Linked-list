#include<iostream>
using namespace std;

class node{
        public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

 void reverseSLL(node*& head){
    node* curr=head;
    node* prev=NULL;
    node* forward=NULL;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    
    }
    head=prev;
    // cout<<head->data<<"reverse head kar dia oe"<<endl;
}

void insertAtTail(node*& tail,int d){
    node* temp=new node(d);
    tail->next=temp;
    tail=temp;
}

void print1(node*& head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int main(){
    node* node1=new node(10);
    node* head=node1;
    node* tail=node1;
    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    print1(head);
     reverseSLL(head);
    print1(head);
}