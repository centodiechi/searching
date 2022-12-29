#include<iostream>
#include<chrono>
using namespace std;
template<typename t>
int LinearSearch(t arr[],int size,t key){
for(int i=0;i<size;i++)
{
    if(arr[i]==key)
    {
        return i;
    }
}
return -1;
}

int main() {
    int arr[] = {5,1};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter key to found : ";
    cin>>key;
    int pos =LinearSearch<int>(arr,n,key);
    if(pos!=-1) cout<<"Element found at : "<<pos;
    else cout<<"Not Found.";
    return 0;
}