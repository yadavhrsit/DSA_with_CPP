#include<iostream>
using namespace std;
// A
// BC
// CDE
// DEFG
int main(){
    int row=1,len=0;
    cout<<"Enter Length"<<endl;
    cin>>len;
    cout<<endl;
    
    while(row<=len){
        int column=1;
        while(column<=row){
            char ans = {'A'+(row+column)-2};
            cout<<ans;
            column++;
        }
        cout<<endl;
        row++;
    }

}