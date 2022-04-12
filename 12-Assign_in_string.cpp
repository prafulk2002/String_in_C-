/*
assign(): Assigns new string by replacing the previous value (can also be
done using ‘=’ operator).
*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1="Praful";
    s1.assign("family");
    cout<<s1<<endl;
    return 0;
}