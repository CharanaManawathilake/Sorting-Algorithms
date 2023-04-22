#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &array, int left, int mid, int right)
{
  int n1 = mid - left + 1;
  int n2 = right - mid;
  vector<int> array1, array2;
  ;
  for (int i = 0; i < n1; i++)
    array1.push_back(array[left + i]);
  for (int i = 0; i < n2; i++)
    array2.push_back(array[mid + 1 + i]);
  array1.push_back(INT_MAX);
  array2.push_back(INT_MAX);
  int k = left;
  int i = 0;
  int j = 0;
  for (; k < (right + 1); k++)
  {
    if (array1[i] <= array2[j])
      array[k] = array1[i++];
    else
      array[k] = array2[j++];
  }
}

void mergeSortSub(vector<int> &array, int left, int right)
{
  if (left >= right)
    return;
  int mid = (left + right) / 2;
  mergeSortSub(array, left, mid);
  mergeSortSub(array, mid + 1, right);
  merge(array, left, mid, right);
}

void mergeSort(vector<int> &array)
{
  mergeSortSub(array, 0, array.size() - 1);
}

void printArray(vector<int> &array)
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
  mergeSort(arr);
  printArray(arr);
}