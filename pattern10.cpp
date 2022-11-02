#include<iostream>
using namespace std;
/*
   *
  **
 ***  
****
*/


// int main(){
//     int row=1,len=0;
//     cout<<"Enter Length"<<endl;
//     cin>>len;
//     cout<<endl;
    
//     while(row<=len){
//         int column=1;
//         while(column<=len){
//             if(column>len-row)
//             cout<<"*";
//             else
//             cout<<" ";
//             column++;
//         }
//         cout<<endl;
//         row++;
//     }

// }

int main(){
    int row=1,len=0;
    cout<<"Enter Length"<<endl;
    cin>>len;
    cout<<endl;
    
    while(row<=len){
        //Space print
        int spaces = len - row;
        while (spaces>0)
        {
            cout<<" ";
            spaces--;
        }
        // star print
        int col=1;
        while (col <= row)
        {
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }

}