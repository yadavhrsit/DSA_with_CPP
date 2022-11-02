#include<iostream>
using namespace std;
// *
// **
// ***
// ****
// *****


int main(){
    int i=0,n=0;
    cout<<"Enter Length"<<endl;
    cin>>n;
    cout<<endl;
    while (i<n)
    {
        int j=0;
        while (j<=i)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    

}