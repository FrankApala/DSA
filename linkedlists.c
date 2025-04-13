#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Function to create a new node
struct node{
    int data;
   struct node *next;
};

struct node* create_node(int data){
    struct node* head=(struct node*)malloc(sizeof(struct node));
    head->data=data;
    head->next=NULL;
    return head;
}

void traverse_list(struct node* head){
    while(head != NULL){
        printf("%d, \n",head->data);
        head=head->next;
    }
}

int search(struct node* head,int val){
    struct node* curr=head;

    while(curr != NULL){
        if(curr->data == val){
        printf("found\n");
        return true;}
        else{
            curr=curr->next;
        }
    }
    printf("not found\n");
    return false;

}

int length(struct node* head){
    int cnt=0;
    struct node* curr=head;
    while(curr != NULL){
       cnt++;
       curr=curr->next;
    }

    return cnt;
}

//insert node at first position
struct node* insert_first(struct node* head, int data){
   struct node* new=create_node(data);
    new->next=head;
    
    return new;
}

struct node* insert_first(struct node* head, int data){
    struct node* new=create_node(data);

    while(head != NULL){
        head= head->next;

        if(head->next==NULL){
           head->next=new;   
        }
    }
     return head;
 }

int main(){

    struct node* p=create_node(5);

   int value;

    p->next=create_node(20);
    p->next->next=create_node(30);
    p->next->next->next=create_node(40);

    printf("%d\n",length(p));


    traverse_list(p);

    printf("enter the value\n");
    scanf("%d",&value);
    search(p,value);

    

    traverse_list(insert_first(p,2));
    

  /* free(p->next->next->next);
   free(p->next->next);
   free(p->next);
   free(p);
*/
  
/*printf("Data: %d\n", p->data);
printf("Next: %p\n", p->next);*/


}
