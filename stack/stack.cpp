#include<iostream>
#include<cstring>
#include<stack>
using namespace std;
int main()
{
    char str[]="123456789";
    stack<char> s1;
    for(int i=0; i < strlen(str)/2; i++)
    {
        s1.push(str[i]);
    }
    cout<<s1.top()<<endl;
    cout<<"Sorted array: ";
    return 0;
}
