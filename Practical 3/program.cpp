#include <iostream>
using namespace std;
void accept(int &m, int arr1[])
{
    cout << "\nEnter size of array: ";
    cin >> m;
    cout << "\nEnter array elements:\n";
    for (int i = 0; i < m; i++)
        cin >> arr1[i];
}
void display(int m, int arr1[])
{
    for (int k = 0; k < m; k++)
        cout << arr1[k] << " ";
}
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void Sort(int n, int arr[])
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int n, array[10];
    accept(n, array);
    Sort(n, array);
    cout << "\nSorted Array:";
    display(n, array);
    return 0;
}

