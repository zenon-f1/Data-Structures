#include <bits/stdc++.h>
using namespace std;
int remove_duplicates(int *arr, int size);
void printArray(int *arr, int size);
int main()
{
    // Brute force 👇 TC --> O(nlog(n)) SC --> O(n)
    int arr[] = {1, 1, 2, 2, 3, 3, 3, 4, 4, 5, 5};
    set<int> st;
    for (int i = 0; i < 11; i++)
    {
        st.insert(arr[i]);
    }
    int index = 0;
    for (auto i : st)
    {
        arr[index] = i;
        index++;
    }
    printArray(arr, index);
    int ind = remove_duplicates(arr, 11);
    cout << ind << endl;
    printArray(arr, ind);

    return 0;
}

void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}