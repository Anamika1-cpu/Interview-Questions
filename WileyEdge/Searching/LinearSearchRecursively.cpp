#include <bits/stdc++.h>
using namespace std;

int searchElement(int arr[], int size, int key)
{
    size--;
    if (size < 0)
    {
        return -1;
    }
    if (arr[size] == key)
    {
        return size;
    }
    return searchElement(arr, size, key);
}
int main()
{
    int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    int key = 20;
    cout << searchElement(arr, size, key);
    return 0;
}
