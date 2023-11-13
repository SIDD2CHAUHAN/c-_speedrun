#include<iostream>
#include<fstream>
using namespace std;
// HOW TO GET INPUT FROM TXT FILE USING C++
int linear_search(int size,int arr[],int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
        return i;
        }
    }
    return -1;
}
int main(){
    string st2;
    

    ifstream xyz("sample2.txt"); 

    int size;
    cout<<"size=";
    getline(xyz,st2);
    cout<<st2<<endl;
    size = stoi(st2);
    //cout<<"give element in array";
    int arr[size];
    for(int i=0;i<size;i++){
        getline(xyz,st2);
        cout<<st2<<endl;
        arr[i] = stoi(st2);        
    }
    cout<<"give key";
    int key;
    //getline(xyz,st2);
    //cout<<st2<<endl;
    cin>>key;
    cout<<"Key is present in index->"<<linear_search(size,arr,key)<<endl;

}