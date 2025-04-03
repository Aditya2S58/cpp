#include<iostream>
using namespace std;
int getprime(int num){
    if(num<2)
    return false;
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
int positionP(int x){
    int count=0,num=1;
    while(count<x){
        num++;
        if(getprime(num)){

            count++;
        }

    }
    return num;
}
int main(){
    int x,y;
    cout<<"enter your number :"<<endl;
    cin>>x>>y;
    int a=positionP(x);
    int b=positionP(y);
    cout<<"your "<< x<<"th prime number is : "<<a<<endl;
    cout<<"your "<< y<<"th prime number is : "<<b<<endl;
    int c=a*b-1;
    cout<<c;
    return 0;

}