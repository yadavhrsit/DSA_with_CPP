#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v){

    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

}

int main(){
    vector<int> vec1; // An int type Vector vec1 created 
    int element;
    for (int i = 0; i < 4; i++)
    {
        cout<<"Enter an element to add to this vector ";
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);
    vec1.push_back(33);
    vector<int>::iterator iter = (vec1.begin()+1);
    vec1.insert(iter,3,7);
    display(vec1);
    cout<<vec1.size();
    return 0;
}
