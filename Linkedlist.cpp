#include<iostream>
using namespace std;

struct Node{
  int data;
  struct Node* next;
};

void traversalLinkedlist(struct Node* ptr){
      while(ptr!=NULL){
        cout<<"Elements: "<<ptr->data<<"\n";
        ptr =  ptr->next;
      
        }
  }

   struct Node* InsertAtFirst(struct Node* head,int data){
       struct Node* ptr= new Node();
       ptr->next = head;
       ptr->data = data;  
        
      return ptr;
   }

  struct Node* InsertAtIndex(struct Node* head,int data,int index){
         struct Node* ptr = new Node();
         struct Node* p =head;
         int i =0;
         while(i!=index-1){
           p = p->next;
           i++;
         }
         ptr->data = data;
         ptr->next = p->next;
         p->next = ptr;

         return head;

  }

  struct Node* InsertAtLast(struct Node* head, int data){
        struct Node* ptr = new Node();
        struct Node* p = head;

        while(p->next !=NULL){
            p = p->next;
          }
          ptr->data = data;
          p->next = ptr;
          ptr->next = NULL;

          return head;

  }


struct Node* DeletionAtfirst(struct Node* head){
    struct Node* p = head;
    head = head->next;

   free(p);
   return head;

}

struct Node* DeletionAtindex(struct Node* head,int index){
    struct Node* p = head;
    struct Node* q = head->next;
    
  for(int i=0;i<index-1;i++){
      p = p->next;
      q = q->next;
  }
  p->next = q->next;
  free(q);
  return head;
    
}

struct Node* DeletionAtLast(struct Node* head){
    struct Node* p = head;
    struct Node* q = head->next;

   while(q->next!=NULL){
      p = p->next;
      q = q->next;
   }
   
   p->next = NULL;
  
   free(q);
   
   return head;
}


struct Node* deleteAtgivenvalue(struct Node* head, int value){
      struct Node* p = head;
      struct Node* q = head->next;

      while(q->data!=value && q->next!=NULL){
          p =p->next;
          q= q->next;
      }
      if(q->data==value){
        p->next = q->next;
        free(q);
      }
     return head;
}
  

 int main(){
   struct Node* head = new Node();
   struct Node* second = new Node();
   struct Node* third = new Node();
   struct Node* four = new Node();

   head->next = second;
   head->data = 7;
   
   second->next = third;
   second->data = 11;

   third->next = four;
   third->data = 15;

   four->next = NULL;
   four->data = 22;

cout<<"After traversing\n";
traversalLinkedlist(head);

cout<<"After InsertionAt first \n";
head = InsertAtFirst(head,6);
traversalLinkedlist(head);
cout<<"After InsertionAt Index \n";
head = InsertAtIndex(head,12,2);
traversalLinkedlist(head);
cout<<"After InsertionAt Last \n";
head = InsertAtLast(head,25);
traversalLinkedlist(head);

cout<<"After deletionAt first \n";
head = DeletionAtfirst(head);
traversalLinkedlist(head);
cout<<"After deletion at given Index \n";
head = DeletionAtindex(head,3);
traversalLinkedlist(head);
cout<<"After deletion At last \n";
head= DeletionAtLast(head);
traversalLinkedlist(head);
cout<<"deleteAt given value \n";
head = deleteAtgivenvalue(head,11);
traversalLinkedlist(head);
   


  return 0;
}