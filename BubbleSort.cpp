#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &array)
{
  int n = array.size();
  for (int i = 0; i < (n - 1); i++)
  {
    for (int j = 0; j < (n - i - 1); j++)
    {
      if (array[j] > array[j + 1])
      {
        int temp = array[j + 1];
        array[j + 1] = array[j];
        array[j] = temp;
      }
    }
  }
}

void printArray(vector<int> array)
{
  int n = array.size();
  cout << endl;
  for (int i = 0; i < n; i++)
    cout << array[i] << ' ';
  cout << endl;
}

int main()
{
  vector<int> arr = {3, 4, 6, 5, 1, 2};
  bubbleSort(arr);
  printArray(arr);
}