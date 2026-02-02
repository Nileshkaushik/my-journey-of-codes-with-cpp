#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[] = {5, 2, 9, 1, 5, 6};
    sort(arr, arr + 3);
    cout << "Sorted array: ";
    for(auto i: arr)
        cout << i << " ";
    cout << endl;
    return 0;
}
