#include<iostream>
using namespace std;

struct queue{
   int size;
   int f;
   int r;
   int * arr;

};

int isEmpty(struct queue * sp){
    if(sp->f==sp->r){
        return 1;
    }else{
        return 0;
    }
}

int isFull(struct queue * sp){
    if(sp->r==sp->size-1){
        return 1;
    }else{
        return 0;
    }
}

void enqueue(struct queue * sp,int value){
    if(isFull(sp)){
        cout<<"queue is full \n";
    }else{
        sp->r++;
        sp->arr[sp->r]=value;
        cout<<value<<endl;
    }
}

int  dequeue(struct queue * sp){
    int val = -1;
    if(isEmpty(sp)){
        cout<<"queue is  empty \n";
        return -1;
    }else{
        sp->f++;
        int val = sp->arr[sp->f];
       }
    return val;
}

int main(){
    struct queue * sp = new queue();
    sp->size = 5;
    sp->f = sp->r = -1;
    sp->arr = new int();

  cout<<"after enqueue\n";
    enqueue(sp,10);
    enqueue(sp,11);
    enqueue(sp,12);
    enqueue(sp,13);
    enqueue(sp,14);
    enqueue(sp,15);

cout<<"after dequeue\n";
    dequeue(sp);
    dequeue(sp);
    dequeue(sp);
    dequeue(sp);
   
    
    
    return 0;
}

