#include<iostream>
using namespace std;

int linearSearch(int arr[],int  size,int element){
    for(int i=0;i<size;i++){
        if(arr[i]==element){
            cout<< arr[i];
            return i;
        }
        return -1;
    }
    return 1;
}

int main(){
    int arr [] = {12,32,5,6,4,7,3,88};
    int size = sizeof(arr)/sizeof(int);
    int  element = 6;
    int result = linearSearch(arr,size,element);
    cout<< "The element is found at index no "<<result;
   
  return 0; 
}