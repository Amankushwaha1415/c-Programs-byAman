
#include <iostream>

using namespace std;
int binarySearch(int arr[],int n){
    int x;
    cout<<"enter the element to be search : ";
    cin>>x;
    int start=0;
    int end=n-1;
    int mid;
    while(start<=end){
       mid=start+(end-start)/2;
       if(arr[mid]==x){
            return mid;  
       }
       else{
           if(x>arr[mid]){
                start=mid+1;
           }
           else{
               end=mid-1;
           }
       }
    }
    return -1;
}

int takeInput(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<"element "<<i+1<<" is ";
        cin>>arr[i];
    }
    return 0;
}

int main(){
    int n;
    cout<<"enter the size of the array : ";
    cin>>n;
    int arr[1000];
    takeInput(arr,n);
    cout<<binarySearch(arr,n);
    return 0;
}