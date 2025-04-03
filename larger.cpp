// #include<iostream>
// #include<climits>
// using namespace std;
// int largest(int arr[],int size){
//     int max=arr[0];
//     for(int i=1;i<size;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     return max;

// }
// int secondLerger(int arr[],int size){
//     int F=INT_MIN;
//     int S=INT_MIN;
//     for(int i=0;i<size;i++){
//         if(arr[i]>F){
//             S=F;
//             F=arr[i];
//         }
//         else if (arr[i]>S && arr[i]!=F)
//         {
//             S=arr[i];
//         }
        
//     }
//     if(S==INT16_MIN){
//         cout<<"no element found :";
//         return -1;
//     }
//     return S;

// }
// int second_minimum(int arr[],int size){
//     int F=INT_MAX;
//     int S=INT_MAX;
//     for(int i=0;i<size;i++){
//         if(arr[i]<F){
//             S=F;
//             F=arr[i];
//         }
//         else if(arr[i]<S && arr[i]!=F){
//             S=arr[i];
//         }
//     }
//     if(S==INT16_MAX){
//         cout<<"no elemnt found :";
//         return -1;
//     }
//     return S;
// }
// int Minimum(int arr[],int size){
//     int min=arr[0];
//     for(int i=1;i<size;i++){
//         if(arr[i]<min){
//             min=arr[i];
//         }
//     }
//     return min;
// }
// int main(){
//     int arr[]={2,-2,16,-1,9,15};
//     int size=sizeof(arr)/sizeof(arr[0]);
//    // cout<<"largest number of array : "<<largest(arr,size)<<endl;
//     //cout<<"minimal number of array : "<<Minimum(arr,size);
//     //cout<<"second lager number :"<<secondLerger(arr,size);
//     cout<<"second minimum number :"<<second_minimum(arr,size);
//     return 0;
    
// }

