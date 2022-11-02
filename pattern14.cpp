#include<iostream>
using namespace std;
// 1234
//  234
//   34
//    4

int main(){
    int row=1,len=0;
    cout<<"Enter Length"<<endl;
    cin>>len;
    cout<<endl;
    
    while(row<=len){
        int column=1;

        int spaces=1;
        while (spaces<row)
        {
            cout<<" ";
            spaces++;
        }

        while(column<=len-row+1){
            cout<<column+row-1;
            column++;
        }
        cout<<endl;
        row++;
    }

}