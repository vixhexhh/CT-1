// Name: Vishesh Dhiman
// Roll No.: 2010992490
// Set 03
// Q1

#include <iostream>
using namespace std;

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
 
void altHiLo(int arr[], int n)
{

    for (int i = 1; i < n; i += 2)
    {
    
        if (arr[i - 1] > arr[i]) {
            swap(arr, i - 1, i);
        }
 
        if (i + 1 < n && arr[i + 1] > arr[i]) {
            swap(arr, i + 1, i);
        }
    }
}
 
int main()
{
    int arr[100];
    int n;
    cout << "Enter no. of elements in an array: ";
    cin >> n;
    cout << "Input array: ";
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    altHiLo(arr, n);
    cout << "Output array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
 
    return 0;
}