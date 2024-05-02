#include<iostream>
using namespace std;

struct Node{
    int data;
    struct Node* next;
};

void traversal(struct Node* head){
    struct Node* ptr=head;
    do{
   cout<<ptr->data<<"\n";
   ptr=ptr->next;
    }
    while(ptr!=head);
        
}

struct Node* insertAtfirst(struct Node*head,int data){
    struct Node* ptr = new Node();
    struct Node* p = head->next;

   while(p->next!=head){
      p= p->next;
   } 
   p->next=ptr;
   ptr->next = head;
   ptr->data = data;
   return head;

}

struct Node* insertAtIndex(struct Node* head,int data,int index){
     struct Node* ptr= new Node();
     struct Node* p = head;
     int i = 0;
     while(i!=index-1){
       p = p->next;
       i++;
     }
    ptr->next = p->next;
    p->next = ptr;
    ptr->data = data;

    return head;
}

struct Node* insertAtLast(struct Node* head,int data){
    struct Node* ptr = new Node();
    struct Node* p = head->next;
    while(p->next!=head){
        p = p->next;
    }
    ptr->next = p;
    ptr->data = data;
    return head;
}

struct Node* deletefirst(struct Node* head){
    struct Node*p = head;
    struct Node* q= head->next;

    while(q->next!=head){
        q = q->next;
    }
    p->next = q->next;
    q->next = q;
    free(p);
    return head;
}

int main(){
    struct Node* head = new Node();
    struct Node* second  = new Node();
    struct Node* third = new Node();
    struct Node* four = new Node();

   head->data = 7;
   head->next = second;

   second->data = 15;
   second->next = third;

   third->data = 25;
   third->next = four;

   four->data = 32;
   four->next =head;

  cout<<"after traversing \n";
  traversal(head);

  cout<<" insertion first \n";
  head= insertAtfirst(head,22);
  traversal(head);
  cout<<"insertion at index \n";
  head= insertAtIndex(head,10,3);
  traversal(head);
  cout<<"insertionat last \n";
  head= insertAtLast(head,9);
  traversal(head);

  cout<<"deletion fast \n";
  head= deletefirst(head);
  traversal(head);


 return 0;
}