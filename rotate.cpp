#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> vec={1,2,3,4,5,6,7};
    rotate(vec.begin(),vec.begin()+2,vec.begin()+4);
    cout<<"the array after rotation is: "<<endl;
    for (auto i:vec)    
        cout<<i<<" ";
    return 0;
}