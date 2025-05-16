#include <iostream>
using namespace std;

/**
 * Program to find the maximum speed of two processors
 * Given the speeds of two processors, this program will determine which one is faster.
 * The speeds are represented in GHz.
 */


// Function to find the maximum speed of two processors
float findMaxSpeed(float proccessor1, float proccessor2)
{
    // Calculate the maximum speed of the processors
   if (proccessor1 > proccessor2)
    
    {
        return proccessor1;
    }
    
    else
    {
        return proccessor2;
    }

}

int main()
{
    // Example processor speeds
    float proccessor1; // Speed in GHz
    float proccessor2 ; // Speed in GHz

    // Input the speeds of the processors
    cout << "Enter the speed of processor 1 (in GHz): ";
    cin >> proccessor1;
    cout << "Enter the speed of processor 2 (in GHz): ";
    cin >> proccessor2;
   
    // Validate the input
    if (proccessor1 <= 0 || proccessor2 <= 0)
    {
        cout << "Invalid input. Please enter positive values for processor speeds." << endl;
        return 1; // Exit the program with an error code
    }
    // Find the maximum speed
    float maxSpeed = findMaxSpeed(proccessor1, proccessor2);

    // Output the result
    cout << "The maximum speed of the processors is: " << maxSpeed << " GHz" << endl;

    return 0;
}