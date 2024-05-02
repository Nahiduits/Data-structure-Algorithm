#include<iostream>
using namespace std;

struct stack{
   int size;
   int top;
   int * arr;
};

int isEmpty(struct stack* sp){
   if(sp->top==-1){
    return 1;
   }else{
    return 0;
   }
}

int isFull(struct stack* sp){
    if(sp->top==sp->size-1){
        return 1;
    }else{
        return 0;
    }
}

void push(struct stack*sp,int value){
      if(isFull(sp)){
        cout<<"stack is overflow \n";
      }else{
        sp->top++;
        sp->arr[sp->top] = value;
        cout<<value<<"\n";
     }
}

int pop(struct stack* sp){
    if(isEmpty(sp)){
        cout<<"stack is underflow \n";
        return 1;
    }else{
        
        int value = sp->arr[sp->top];
        sp->top--;
        return value;
     };

}

int main(){
    struct stack* sp = new stack();
    sp->size  = 10;
    sp->top = -1;
    sp->arr = new int();

cout<<"after push up\n";
    push(sp,10);
    push(sp,20);
    push(sp,30);
    push(sp,40);
    push(sp,50);
    push(sp,60);
    push(sp,70);
    push(sp,80);
    push(sp,90);
    push(sp,100);
    push(sp,110);
cout<<"after pop up\n";
pop(sp);
pop(sp);
pop(sp);
pop(sp);
pop(sp);
pop(sp);
pop(sp);
pop(sp);
pop(sp);
pop(sp);
pop(sp);




   return 0;
}