#include<stdio.h>
#include<iostream>
using namespace std;

struct myArray{
  int total_size;
  int used_size;
  int *ptr;
};

void createArray(struct myArray * a, int tsize,int usize){
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr= new int();
};

void show(struct myArray *a){
   for(int i=0;i<a->used_size;i++)
   {
      cout << a->ptr[i];
   }
}

int main(){
   struct myArray marks;
   createArray(&marks,100,2);
   show(&marks);

    return 0;
}

