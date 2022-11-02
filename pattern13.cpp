#include<iostream>
using namespace std;
//    1
//   22
//  333
// 4444


int main(){
    int row=1,len=0;
    cout<<"Enter Length"<<endl;
    cin>>len;
    cout<<endl;
    
    while(row<=len){

        int spaces=1;
        while (spaces<=len-row)
        {
            cout<<" ";
            spaces++;
        }
        
        int column=1;
        while(column<=row){
            cout<<row;
            column++;
        }
        cout<<endl;
        row++;
    }

}