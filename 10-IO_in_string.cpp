/*Taking Input
We use cin to input the string.

cin >> str;

Using getline() function: To input the string with space we use getline() function
instead of cin.
*/

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the line";
    getline(cin, s);
    cout<<<<s<<endl;
    return 0;
}