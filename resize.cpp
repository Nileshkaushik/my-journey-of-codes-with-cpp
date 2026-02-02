#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr;
    cout<<"enter the no of elements of array: "<<endl;
    int count, sum=0;
    cin>>count;
    arr.resize(count); // Resize the vector to hold 'count' elements
    cout<<"enter the elements of array: "<<endl;
    for(int i=0;i<count;i++)
    {
        cin>>arr[i]; // Input elements into the resized vector
        sum+=arr[i];
    }
    cout<<"the sum of elements of array is: "<<sum<<endl;
    return 0;
}