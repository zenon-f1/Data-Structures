#include <iostream>
using namespace std;
// TC -> O(n)
int check_sorted(int *arr, int size)
{
    for (int i = 1; i <= size; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
        }
        else
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 56, 67, 90, 110};
    if (check_sorted(arr, 8))
    {
        cout << "Sorted" << endl;
    }
    else
    {
        cout << "Not sorted" << endl;
    }
    return 0;
}