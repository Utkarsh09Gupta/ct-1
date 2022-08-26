// NAME - UTKARSH GUPTA
// ROLL NO, - 2010992479
// SET - TEST 04
// Q-1







#include <iostream>
#include <unordered_set>
using namespace std;

// Function to find the minimum index of the repeating element
int FindMin(int arr[], int n)
{
    int MinInd = n;

    // Create an empty set to store array elements
    unordered_set<int> set;

    // Traverse the array from right to left
    for (int i = n - 1; i >= 0; i--)
    {
        // If the element is seen before, update the minimum index
        if (set.find(arr[i]) != set.end())
        {
            MinInd = i;
        }
        // If the element is seen for the first time, insert it into the set
        else
        {
            set.insert(arr[i]);
        }
    }

    // Invalid Input
    if (MinInd == n)
    {
        return -1;
    }

    // return minimum index
    return MinInd;
}

int main()
{
    int arr[] = {5, 6, 3, 4, 3, 6, 4};

    int n = sizeof(arr) / sizeof(arr[0]);

    int MinInd;

    try
    {
        MinInd = FindMin(arr, n);
    }
    catch (int error)
    {
        cout << "Error: " << error << endl;
    }

    if (MinInd != n)
    {
        cout << " The minimum index of the repeating element is " << MinInd;
    }
    else
    {
        cout << " Invalid Input ";
    }

    return 0;
}