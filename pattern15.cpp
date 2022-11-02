#include<iostream>
using namespace std;
//    1
//   121
//  12321
// 1234321


int main(){
    int row=1,len=0;
    cout<<"Enter Length"<<endl;
    cin>>len;
    cout<<endl;
    
    while(row<=len){

        int spaces = 1;
        while (spaces<=len-row)
        {
            cout<<" ";
            spaces++;
        }

        int column=1;
        while(column<=row){
            cout<<column;
            column++;
        }

        int column2 = 1;
        while (column2<row)
        {
            cout<<row-column2;
            column2++;
        }
        
        cout<<endl;
        row++;
    }

}