#include <iostream>
using namespace std;
int second_largest(int *arr, int size)
{
    // optimal solution 👇
    int largest = arr[0];
    int slargest = INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > slargest)
        {
            slargest = arr[i];
        }
    }
    return slargest;
}
int main()
{
    // better solution 👇
    int arr[] = {2, 3, 5, 7, 87, 5, 89, 9};
    int largest = arr[0];
    int size = 8;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    int secondLargest = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }
    cout << "Second Largest: " << secondLargest << endl;
    cout << "Second Largest: " << second_largest(arr, 8) << endl;
    return 0;
}