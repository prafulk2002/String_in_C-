/*
append(): Inserts additional characters at the end of the string (can also be
done using ‘+’ or ‘+=’ operator). Its time complexity is O(N) where N is the
size of the new string.
*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="Pra", s2="ful";
    s1.append(s2);
    cout<<s1<<endl;
    return 0;
}