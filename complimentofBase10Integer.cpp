#include<iostream>
#include<string>
using namespace std;
int main (){
    int n=5,i=0;
    int arr[10],mask[10]={1,1,1,1,1,1,1,1,1,1};
    while (n!=0)
    {
        arr[i]=n%2;
        n=n/2;
        i++;
    }
    i--;
    while(i>=0){
        arr[i]=(arr[i]^mask[i]);
        cout<<arr[i];
        i--;
    }
}