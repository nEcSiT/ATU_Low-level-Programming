#include <iostream>
using namespace std;

/**
 * A program that tracks the number of attempt to log onto aaccra technical university system.
 * Number of attempt to log on is 3
 * Using while loop
 */

 int main()
 {
    const int correct_pin = 1234;
    int login_pin;
    int track_attempt = 0;

    while (true)
    {
        cout << "Enter your pin" << endl;
        cin >> login_pin;
        if (track_attempt == 2) // Checking the number of attempts should not exceed 3. If it exceed 3 program close
        {
            cout << "Too many failed attempts! Your account hae been locked. Contact IT support." <<endl;
            break;
        }

        else if (login_pin != correct_pin) // Checking if you enter the wrong pin
        {
            cout <<"Wrong Pin!, Try again." << endl;
        }

        else //Automatically Grant access upon entering the right pin.
        {
            cout << "Access Granted! You have successfully logged into the University system"<< endl;
            break;
        }

        track_attempt++;
    }
 }