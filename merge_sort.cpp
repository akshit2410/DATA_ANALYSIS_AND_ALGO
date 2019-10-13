#include <iostream>
using namespace std;
void merge(int a[], int p, int mid, int r);
void merge_sort(int a[], int p, int r)
{

  if (p < r) {

    int mid = (p + r) / 2;
    merge_sort(a, p, mid);
    merge_sort(a, mid + 1, r);
    merge(a, p, mid, r);
  }
}
void
merge(int a[], int p, int mid, int r)
{
  int b[100];
  int k = 0, i = p, j = mid + 1;
  while (i <= mid && j <= r) {
    if (a[i] < a[j]) {
      b[k++] = a[i++];
    } else {
      b[k++] = a[j++];
    }
  }
  while (i <= mid) {
    b[k++] = a[i++];
  }
  while (j <= r) {
    b[k++] = a[j++];
  }
  for (i = r; i >= p; i--) {
    a[i] = b[--k]; // copying back the sorted list to a[]
  }
}

int
main()
{
  int a[100], n;
  cout << "enter the range of the array:" << endl;
  cin >> n;
  cout << "enter the array:" << endl;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  merge_sort(a, 0, n - 1);
  cout << "the sorted array is :" << endl;
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }

  return 0;
}