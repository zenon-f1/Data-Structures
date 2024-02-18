#include <iostream>
using namespace std;

int smallest(int *arr, int size)
{
    int smallest = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    return smallest;
}
int main()
{
    int arr[] = {2, 3, 5, 6, 77, 8, 0, 9};
    int smallestElement = smallest(arr, 8);
    cout << "smallest element in array is " << smallestElement << endl;
    return 0;
}