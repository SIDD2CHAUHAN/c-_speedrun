#include<iostream>
using namespace std;
int linear_search(int size,int arr[],int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
        return i;
        }
    }
    return -1;
}
int main(){
    int size;
    int key;
    cout<<"enter size"<<endl;
    cin>>size;
    cout<<"Enter elements"<<endl;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    cout<<"enter key"<<endl;
    
    cin>>key;
    int i=0;
    while(i<=size-1){
        if(key==arr[i]){
            break;
        }
        i++;
    }
    int j=i+1;
    while(j<=size-1){
        if(key==arr[j]){
            cout<<j<<endl;
            break;
        }
        j++;
    }
    if(key!=arr[j]){
        cout<<"second occurrence not exist";
    }

    
    
    

}