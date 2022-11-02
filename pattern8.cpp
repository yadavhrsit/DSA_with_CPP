#include<iostream>
using namespace std;
// D
// CD
// BCD
// ABCD
int main(){
    int row=1,len=0;
    cout<<"Enter Length"<<endl;
    cin>>len;
    cout<<endl;
    
    while(row<=len){
        int column=1;
        while(column<=row){
            char ans = {'A'+len-row+column-1};
            cout<<ans;
            column++;
        }
        cout<<endl;
        row++;
    }

}