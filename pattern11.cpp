#include<iostream>
using namespace std;
// **** 
// *** 
// **
// *


int main(){
    int row=1,len=0;
    cout<<"Enter Length"<<endl;
    cin>>len;
    cout<<endl;
    
    while(row<=len){

        int stars=len;
        while (stars>=row)
        {
            cout<<"*";
            stars--;
        }
        

        int spaces=1;
        while(spaces<=row-1){
            cout<<" ";
            spaces++;
        }
        cout<<endl;
        row++;
    }

}