#include<iostream>
#include<vector>
using namespace std;
#define SIZE 4
int main()
{
    vector<int> arr[SIZE];
    cout<<"enter the no of elements of array: "<<endl;
    int count, sum=0;
    cin>>count;
    cout<<"enter the elements of array: "<<endl;
/*  for(int i=0;i<count;i++)
    {
        cin>>arr[i]; 
        sum+=arr[i];
    } */
    cout<<"the sum of elements of array is: "<<sum<<endl;
    return 0;
}
