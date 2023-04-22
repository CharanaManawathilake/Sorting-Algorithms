#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &array)
{
  int n = array.size();
  for (int i = 0; i < n - 1; i++)
  {
    int min_index = i;
    for (int j = i + 1; j < n; j++)
    {
      if (array[j] < array[min_index])
        min_index = j;
    }
    int temp = array[i];
    array[i] = array[min_index];
    array[min_index] = temp;
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
  selectionSort(arr);
  printArray(arr);
}