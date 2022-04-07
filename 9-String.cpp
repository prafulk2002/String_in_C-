/* 
Strings
To use strings in a program, you need to include a header called string.
*/
//Explaining different method for Declaring a string
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="Praful";  //It declares a string of value “Praful”
    string str2(5,'n');  //It declares a string of size 5 with all characters ‘N’.
    string abc(str);  //It declares a copy of the string str.
    cout<<str<<"\n";
    cout<<str2<<"\n";
    cout<<abc<<"\n";
    return 0;
}