#include <iostream>
#include <cctype>
#include <string>
using namespace std;


bool validatePassword(const string password)
{
    if (password.length() < 8)
    {
        return false; // Password must be at least 8 characters long
    }
bool hasBigger = false, hasSmaller = false, hasNumber = false, hasUnique = false;

    for (char ch : password)
    {
        if (isupper(ch)) hasBigger = true;
        else if (islower(ch)) hasSmaller = true;
        else if (isdigit (ch)) hasNumber = true;
        else hasUnique = true;
    }

    return hasBigger && hasSmaller && hasNumber && hasUnique;
}

int main()
{
    string password;
    cout << "Enter password: "<< endl;
    cin >> password;

    if (validatePassword(password))
    {
        cout << "Password is valid." << endl;
    }
    else
    {
        cout << "Password is invalid." << endl;
    }
    return 0;
} 