#include<iostream>
using namespace std;
void insertelemnt(int arr[],int &size,int element,int position,int capcity){
    if(size>=capcity){
        cout<<"insertion not allowed coz array is full .\n";
        return ;
    }
    if(position<0 ||position>size){
        cout<<"not vaild\n";
        return ;
    }
    for(int i=size;i>position;i--){
        arr[i]=arr[i-1];
    }
    arr[position]=element;
    size++;

}
void deletionEle(int arr[],int &size,int position){
    if(size==0){
        cout<<"array is empty :"<<endl;
        return ;
    }
    if(position<0 || position>=size){
        cout<<"invaild"<<endl;
        return ;
    }
    for(int i=position;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    size--;
}
void display(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    // int capcity=10;
    // int arr[capcity]={1,2,3,4,5,6};
    // int size=6;
    // cout<<"array before insert the value : "<<endl;
    // display(arr,size);
    // int el=7,positi=4;
    // cout<<"insert the element is "<<el <<"index value "<<"4th"<<endl;
    // insertelemnt(arr,size,el,positi,capcity);
    // display(arr,size);
    // return 0;
    int size=5;
    int arr[size]={1,2,3,4,5};
    cout<<"before deletion :"<<endl;
    display(arr,size);
    cout<<"after deletion :"<<endl;
    deletionEle(arr,size,5);
    display(arr,size);
}