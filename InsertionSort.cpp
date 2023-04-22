#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &array)
{
  int n = array.size();
  for (int j = 1; j < n; j++)
  {
    int key = array[j];
    int i = j - 1;
    while (i >= 0 && array[i] > key)
    {
      array[i + 1] = array[i];
      i--;
    }
    array[i + 1] = key;
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
  insertionSort(arr);
  printArray(arr);
}