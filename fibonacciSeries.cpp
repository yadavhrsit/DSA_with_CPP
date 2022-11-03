#include<iostream>
using namespace std;

// 0,1,2,3,5,8,13,21....

int main(){
    int n;
    cout<<"Enter Limit"<<endl;
    cin>>n;
    int a = 0,b=1,sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=a+b;
        cout<<sum<<",";
        a=b;
        b=sum;
    }
    
}