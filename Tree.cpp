#include<iostream>
using namespace std;

struct Node{
  int data;
  struct Node*left;
  struct Node*right;
};

struct Node* treetraversal(int data){
    struct Node*p = new Node();
    p->data=data;
    p->left=NULL;
    p->right=NULL;

    return p;
}

struct Node* Preorder(struct Node*root){
      if(root!=NULL){
        cout<<root->data<<"\n";
        Preorder(root->left);
        Preorder(root->right);
      }
      return root;
};
 

struct Node* Inorder(struct Node*root){
      if(root!=NULL){
        Inorder(root->left);
        cout<<root->data<<"\n";
        Inorder(root->right);
      }
      return root;
}

struct Node* Postorder(struct Node*root){
      if(root!=NULL){
        Postorder(root->left);
        Postorder(root->right);
        cout<<root->data<<"\n";
      }
      return root;
}

void insert(struct Node* root,int key){
    struct Node* prev = NULL;
    while(root!=NULL){
       prev = root;
       if(root->data==key){
          cout<<"can't insert";
          return ;
       }else if(root->data>key){
           root = root->left;
       }else{
         root = root->right;
       }
    }
    struct Node* New = treetraversal(key);

    if(prev->data>key){
      prev->left = New;
    }else{
      prev->right = New;
    }

}

int main(){
   struct Node* root = treetraversal(5);
   struct Node* second = treetraversal(3);
   struct Node* third= treetraversal(6);
   struct Node* four = treetraversal(1);
   struct Node* five = treetraversal(4);

   root->left = second;
   root->right= third;
   root->left->left = four;
   root->left->right = five;

   cout<<"Preorder traversal: \n";
   Preorder(root);
   cout<<"Inorder traversal: \n";
   Inorder(root);
   cout<<"Postorder traversal: \n";
   Postorder(root);

   cout<<"after insertion in binary search \n";
   insert(root,7);
   cout<<root->right->right->data;
 
   

    return 0; 
}