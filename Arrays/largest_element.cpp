//* arr[] = {2,3,54,6,78,7}; --> sort --> print(arr[n-1]) --> largest
// TC = O(nlog(n))
// SC = O(1) (brute force)
// Optimal👇
#include <iostream>
using namespace std;

int largest(int *arr, int size)
{
    int largest = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}
int main()
{
    int arr[] = {2, 3, 5, 6, 77, 8, 0, 9};
    int largestElement = largest(arr, 8);
    cout << "Largest element in array is " << largestElement << endl;
    return 0;
}