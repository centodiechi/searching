#include<iostream>
using namespace std;

template<typename t>
int BinarySearch(t arr[],int size,t key) {
int s=0;
int e=size-1;
while(s<=e) {
int mid=(s+e)/2;
if(arr[mid]==key){
    return mid;
}
else if(arr[mid]>key)
        e=mid-1;
else
    s=mid+1;
}
return -1;
}

int main(){
    char arr[] = {'a','k'};
    int n = sizeof(arr)/sizeof(char);
    char key;
    cout<<"Enter key to found : ";
    cin>>key;
    int pos = BinarySearch<char>(arr,n,key);
    if(pos!=-1) cout<<"Element found at : "<<pos;
    else cout<<"Not Found.";
    return 0;
}