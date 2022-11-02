#include<iostream>
using namespace std;
// ABC
// BCD
// CDE
int main(){
    int row=1,len=0;
    cout<<"Enter Length"<<endl;
    cin>>len;
    cout<<endl;
    
    while(row<=len){
        int column=1;
        while(column<=len){
            char ch='A'+row+column-2;
            cout<<ch;
            column++;
        }
        cout<<endl;
        row++;
    }

}