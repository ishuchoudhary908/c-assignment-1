#include<iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cout<<"enter array element"<<endl;
        cin>>arr[i];
        if(arr[i]==5){
            cout<<"stop!";
            break;
        }
    }
    int sum=0;
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    cout<<"total sum of array element is="<<sum<<endl;
    int avrg;
    avrg=sum/5;
    cout<<"average of all elements of array is="<<avrg<<endl;
    return 0;
}