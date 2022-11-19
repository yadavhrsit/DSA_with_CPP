#include<iostream>
#include<string>
using namespace std;

class Stack{
    private:
    int top;
    int arr[5];

    public:
    Stack(){
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            arr[i]=0;
        }
    }

    int push(void){
        if (top==4)
        {
            cout<<"Stack Overflow";
        }
        else
        {
        cout<<"Enter The Value "<<endl;
        int val;
        cin>>val;
        top++;
        arr[top]=val;
        }
    }

    int pop(void){
        if (top==-1)
        {
            cout<<"Stack Underflow";
        }
        else
        {
        arr[top]=0;
        top--;
        }
    }

    int peek(void){
        cout<<"Peek at: ";
        int pos;
        cin>>pos;
        (arr[pos]!=0 ? cout<<arr[pos] :cout<<"Invalid Position");
    }

    int display(void){
        for (int i = top; i>=0; i--)
        {
            cout<<arr[i]<<endl;
        }
    }

    int count(void){
        cout<<top+1;
    }

    int isEmpty(void){
        //cout<<"Its "<<(top==-1)?"Empty":"Not Empty";
        (top == -1 ? cout<<"Empty" :cout<<"Not Empty");

    }

    int isFull(void){
        //cout<<"Its "<<(top==4)?"Full":"Not Full";
        (top == 4 ? cout<<"Full" :cout<<"Not Full");
    }

    int change(void){
        cout<<"Enter The Position You want to Change at "<<endl;
        int pos;
        cin>>pos;

        cout<<"Enter The Value You want to Change it to "<<endl;
        int val;
        cin>>val;

        if (pos<=4){
            arr[pos]=val;
            cout<<"changed successfully";
        }   
        else
            cout<<"Invalid Position";
    }    
};

int main(){

    Stack obj;

    short n = 1;
    while (n)
    {
        cout<<endl<<"MENU"<<endl;
        cout<<"1 "<<"PUSH"<<endl;
        cout<<"2 "<<"POP"<<endl;
        cout<<"3 "<<"PEEK"<<endl;
        cout<<"4 "<<"DISPLAY"<<endl;
        cout<<"5 "<<"COUNT"<<endl;
        cout<<"6 "<<"IS FULL"<<endl;
        cout<<"7 "<<"IS EMPTY"<<endl;
        cout<<"8 "<<"CHANGE"<<endl;
        cout<<"0 "<<"Exit"<<endl;
        
        cin>>n;

        switch (n)
        {
        case 1:
            obj.push();
            break;
        case 2:
            obj.pop();
            break;
        case 3:
            obj.peek();
            break;
        case 4:
            obj.display();
            break;
        case 5:
            obj.count();
            break;
        case 6:
            obj.isFull();
            break;
        case 7:
            obj.isEmpty();
            break;
        case 8:
            obj.change();
            break;
        case 0:
            break;
        default:
            cout<<"Invalid Input";
            break;
        }
    }
}