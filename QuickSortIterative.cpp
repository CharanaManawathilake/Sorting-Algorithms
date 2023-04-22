#include <bits/stdc++.h>
using namespace std;

void swap(int &array, int &b)
{
  int temp = array;
  array = b;
  b = temp;
}

int partition(vector<int> &array, int p, int r)
{
  int x = array[r];
  int i = p - 1;
  for (int j = p; j <= r - 1; j++)
  {
    if (array[j] <= x)
      swap(array[++i], array[j]);
  }
  swap(array[i + 1], array[r]);
  return (i + 1);
}

void quickSortIterative(vector<int> &array)
{
  int n = array.size();
  if (n <= 1)
    return;

  stack<int> s;
  s.push(0);
  s.push(n - 1);

  while (!s.empty())
  {
    int r = s.top();
    s.pop();
    int p = s.top();
    s.pop();

    int q = partition(array, p, r);

    if (q - 1 > p)
    {
      s.push(p);
      s.push(q - 1);
    }

    if (q + 1 < r)
    {
      s.push(q + 1);
      s.push(r);
    }
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
  quickSortIterative(arr);
  printArray(arr);
}
