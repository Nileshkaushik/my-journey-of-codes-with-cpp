#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[] = {5, 2, 9, 1, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr + n);
    cout << "Sorted array: ";
    for(auto i: arr)
        cout << i << " ";
    cout << endl;
    return 0;
}
