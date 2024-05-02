#include<iostream>
using namespace std;

int PrintArray(int A[],int n){
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }   
    cout<<endl;
}
int partition(int A[] ,int low,int high){
     int pivot = A[low];
     int i = low +1;
     int j = high;
     int temp;

    do{

       while(A[i]<=pivot){
          i++;
       }
       while(A[j]>pivot){
        j--;
       }
      if(i<j){
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;

      }
     }while(i<j);
    
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;

    return j;
}

void quicksort(int A [],int low, int high){
     int partitionindex;
     if(low<high){
     partitionindex = partition(A,low,high);
     quicksort(A,low,partitionindex-1);
     quicksort(A,partitionindex+1,high);
     }
};


int main(){
   int A[] = {1,3,2,5,7,12,8,13};
   int n = 8;
   PrintArray(A,n);
   quicksort(A,0,n-1);
   PrintArray(A,n);

   return 0;
}