/*#include<iostream>
#include<algorithm>
#include<cstring>
#include<stack>
using namespace std;
int main()
{
    char str[]="123456789";
    stack<char> s1,s2;
    int i;
    for(int i=0; i < strlen(str)/2; i++)
    {
        s1.push(str[i]);
    }
    for (i=i-1;i<strlen(str);i++)
    {
        s2.push(str[i]);
    }
    while (!s1.empty())
    {
        cout<<s1.top();
        s1.pop();
    }
    while (!s2.empty())
    {
        cout<<s2.top();
        s2.pop();
    }
    
}*/
#include <iostream>
#include <cstring>
#include <stack>
using namespace std;
int main(){
char str[10] = "123456789";
int a = strlen(str);
cout<<a<<endl;
stack<char> s1, s2;
int i;
for(i=0; i < strlen(str)/2; i++)
    s1.push(str[i]);
for( i = i - 1; i < strlen(str); i++)
    s2.push(str[i]);
while (!s1.empty()) {
    s2.push(s1.top()); s1.pop();
}
while (!s2.empty()) {
    cout << s2.top(); s2.pop();
}
return 0;
}