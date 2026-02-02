#include <iostream>
#include <vector>
using namespace std;
int main() {
const int size=3;
int c = 65;
vector<char> vec(size, 'A');
for (int i = 1 ;i <= 2 ;i++)
vec.push_back (65 + i) ;
vec.resize(10, 90);
vec.resize(8);
for (int i = 0 ; i < vec.size(); i++)
cout << vec [i] << " ";
return 0;
}
