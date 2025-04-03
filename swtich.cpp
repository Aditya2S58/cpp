#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    switch (x){ //work only char nad int 
        //does not support float and double and does not support string
    case 1:
    cout<<"excellent";
    break;
    case 2:
    cout<<"best";
    case 3: cout<<"good"; break;
    case 4:
    default:cout<<"invaild";
    }

}