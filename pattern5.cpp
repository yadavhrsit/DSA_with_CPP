#include<iostream>
using namespace std;
// 1
// 23
// 456


int main(){
    int row=1,len=0,count=1;
    cout<<"Enter Length"<<endl;
    cin>>len;
    cout<<endl;
    
    while(row<=len){
        int column=1;
        while(column<=row){
            cout<<count;
            count++;
            column++;
        }
        cout<<endl;
        row++;
    }

}