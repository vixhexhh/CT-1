// Name: Vishesh Dhiman
// Roll No. : 2010992490
// Set 03
// Q2

#include <iostream>
using namespace std;
 
int findPair(int arr[], int n, int k)
{
    int count = 0;
    int flag = 0;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] + arr[j] == k)
                {   
                    flag = 1;
                    cout << "Pair Found (" << arr[i] << ", " << arr[j] << ")" << endl;
                    }
}
int main()
{
    int arr[100];
    
    int target;
    cout << "Enter target sum: ";
    cin>> target;

    int n;
    cout << "Enter no. of elements in array: ";
    cin >> n;
    cout << "Input array: ";
    for (int i = 0; i<n ; i++){
        cin >> arr[i];
    }
    findPair(arr, n, target);
    return 0;
}