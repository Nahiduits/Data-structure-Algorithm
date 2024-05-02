#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int size){
    int first = 0;
    int last = size - 1;

    int mid = (first+last)/2;

    for(int i =0;i<size;i++){
       
       if(n == arr[mid]){
          cout << "\nthe number is found at "<<mid<<endl;
       }

    else if(n>arr[mid]){
       return  first = mid + 1;
       }else{
       return last = mid - 1;
       }
    }
    return -1;
}

int main(){
    
    int arr [] = {2,4,5,7,8,9,11,12};
    int size = sizeof(arr)/sizeof(int);
    int n;
    cout<< "Search a number from this array ";
    cin >> n;
   int result = binarySearch(arr,n, size);
   if(result == -1){
      cout << "The number is not found";
   }
   return 0;

}





