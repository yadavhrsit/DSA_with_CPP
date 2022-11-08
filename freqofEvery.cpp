#include <iostream>
using namespace std;
// int data[] = {3,3,1,2,5,7,3,1,5,7,0};
// perform bubble sort
void bubbleSort(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    for (int j = 0; j < size - i; ++j) {
      if (array[j] > array[j + 1]) {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }

  int count=0;
  for (int i = 0; i < size;++i)
  {
    for (int j = i; j < size; ++j)
    {
      if (array[j]==array[j+1])
      { 
        count++;
      }
      else
      {
        cout<<array[j]<<" is "<<count<<" Times repeated"<<endl;
        i+=(j-i);
        count=0;
        break;
      }
      
    }
  }
  cout << "\n";
}


// print array


int main() {
  int data[] = {3,3,1,2,5,7,3,1,5,7,0};
  // find array's length
  int size = sizeof(data) / sizeof(data[0]);
  bubbleSort(data, size);
}