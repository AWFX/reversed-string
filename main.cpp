#include <iostream>
#include <string>
using namespace std;

string reverseString (string str)
{
    for(int i = 0; i < (str.length() / 2); i++){
        cout << str[i] << " " << str[str.length() - 1] << endl;
        char a = str[i];
        str[i] = str[str.length() - i - 1];
        str[str.length() - i - 1] = a;

    }
    return str;
}

int main(){
    string str;
    getline(cin, str);

    cout << reverseString(str);
    return 0;
}