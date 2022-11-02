#include<iostream>
using namespace std;
int main(){
    int count=0,i=0,n=0;
    cout<<"Enter length"<<endl;
    cin>>n;
    while (i<n)
    {
        int j=0;
        while (j<n)
        {
            count++;
            cout<<count;
            j++;
        }
        cout<<endl;
        i++;
    }
    
}