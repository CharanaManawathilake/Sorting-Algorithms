#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
  int temp = a;
  a = b;
  b = temp;
}

int partition(vector<int> &A, int p, int r)
{
  int x = A[r];
  int i = p - 1;
  for (int j = p; j <= r - 1; j++)
  {
    if (A[j] <= x)
      swap(A[++i], A[j]);
  }
  swap(A[i + 1], A[r]);
  return (i + 1);
}

void quickSort(vector<int> &A, int p, int r)
{
  if (p < r)
  {
    int q = partition(A, p, r);
    quickSort(A, p, q - 1);
    quickSort(A, q + 1, r);
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
  quickSort(arr, 0, arr.size() - 1);
  printArray(arr);
}
