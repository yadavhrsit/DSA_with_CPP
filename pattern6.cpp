#include<iostream>
using namespace std;

// 1
// 23
// 345
// 4567


// int main(){
//     int row=1,len=0,count=1;
//     cout<<"Enter Length"<<endl;
//     cin>>len;
//     cout<<endl;
    
//     while(row<=len){
//         int column=1;
//         while(column<=row){
//             cout<<count;
//             column++;
//             count++;
//         }
//         row++;
//         count=row;
//         cout<<endl;
//     }
// }

int main(){
    int row=1,len=0,count=1;
    cout<<"Enter Length"<<endl;
    cin>>len;
    cout<<endl;
    
    while(row<=len){
        int column=0;
        while(column<row){
            cout<<row+column;
            column++;
        }
        row++;
        cout<<endl;
    }
}