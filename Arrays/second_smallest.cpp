#include <iostream>
using namespace std;
int second_smallest(int *arr, int size)
{
    // optimal solution 👇
    int smallest = arr[0];
    int secondSmallest = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] != smallest && arr[i] < secondSmallest)
        {
            secondSmallest = arr[i];
        }
    }
    return secondSmallest;
}
int main()
{
    int arr[] = {2, 3, 5, 7, 87, 5, 89, 9};
    cout << "Second Largest: " << second_smallest(arr, 8) << endl;
    return 0;
}