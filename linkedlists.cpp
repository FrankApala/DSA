#include<iostream>
using namespace std;

class node {
public:
    int data;

    node* next;

    node(int data){
        this->data=data;
        this->next=nullptr;
    }

    static void traverse_list(node* head){
        while(head != nullptr){

            cout<<head->data<<endl;

            head=head->next;
        }
    }

    static bool search(node* head,int val){
           node* curr=head;
        while(curr != nullptr){
            if(curr->data == val){
            cout<<"found"<<endl;
            return true;}
            else{
                curr=curr->next;
            }
        }
        cout<<"not found"<<endl;
        return false;

    }

   static int length(node* head){
        int cnt=0;
        node* curr=head;
        while(curr != nullptr){
           cnt++;
           curr=curr->next;
        }
    
        return cnt;
    }

    
};



int main(void){
 int value;
    node* p=new node(10);
  p->next=new node(15);
  p->next->next=new node(20);
  p->next->next->next=new node(25);
   cin>> value;
node::search(p,value);

 node::traverse_list(p);

  

   return 0;
}