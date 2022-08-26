// NAME - UTKARSH GUPTA 
// ROLL NO. - 2010992479
// SET - TEST 04
// Q-2

#include <bits/stdc++.h>
using namespace std;

// Function to Check if array elements are consecutive
bool areConsec(int arr[], int n)
{
    // Here we are Sorting the array
    sort(arr, arr + n);
    // checking the adjacent elements
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1] + 1)
        {
            return false;
        }
    }
    return true;
}

// Driver program to test above functions 
int main()
{
    int a[] = {4, 2, 4, 3, 1};
    int n = sizeof(a) / sizeof(a[0]);

    bool res;

    try
    {
        res = areConsec(a, n);
    }
    catch (int error)
    {
        cout << "Error: " << error << endl;
    }

    if (res == true)
        cout << " Array elements are consecutive ";
    else
        cout << " The array does not contain consecutive integers as element 4 is repeated. ";
    return 0;
}