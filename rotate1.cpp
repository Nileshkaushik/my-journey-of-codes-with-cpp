#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> arr={4,5,6,7,8,9,10};
    rotate(arr.begin(),arr.begin()+3,arr.begin()+6);
    cout<<"The array after rotation is : "<<endl;
    for(auto i:arr)
        cout<<i<<" ";
    return 0;
}