#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &array, int left, int mid, int right)
{
  int n1 = mid - left + 1;
  int n2 = right - mid;
  vector<int> array1(n1), array2(n2);
  for (int i = 0; i < n1; i++)
    array1[i] = array[left + i];
  for (int i = 0; i < n2; i++)
    array2[i] = array[mid + 1 + i];
  array1.push_back(INT_MAX);
  array2.push_back(INT_MAX);
  int i = 0, j = 0;
  for (int k = left; k <= right; k++)
  {
    if (array1[i] <= array2[j])
      array[k] = array1[i++];
    else
      array[k] = array2[j++];
  }
}

void mergeSortIterative(vector<int> &array)
{
  int n = array.size();
  int len = 1;
  while (len < n)
  {
    for (int i = 0; i < n; i += len * 2)
    {
      int left = i, mid = i + len - 1, right = min(i + len * 2 - 1, n - 1);
      merge(array, left, mid, right);
    }
    len *= 2;
  }
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
  mergeSortIterative(arr);
  printArray(arr);
}
