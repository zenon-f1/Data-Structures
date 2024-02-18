#include <bits/stdc++.h>
using namespace std;
int remove_duplicates(int *arr, int size);
void printArray(int *arr, int size);
int main()
{
    int arr[] = {1, 1, 2, 2, 3, 3, 3, 4, 4, 5, 5};
    int ind = remove_duplicates(arr, 11);
    cout <<"Number of unique elements = "<< ind << endl;
    printArray(arr, ind);

    return 0;
} 

int remove_duplicates(int *arr, int size)
{
    // Optimal solution 👇 TC --> O(n) SC --> O(1)
    int i = 0;
    for (int j = 1; j < size; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
}

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}