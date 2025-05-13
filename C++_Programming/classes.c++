#include <iostream>
using namespace std;


class Rectangle // how class is declared
{
private: // access specifier
    float length; // data members
    float width; // data members
    
public:
    Rectangle(float l, float w) // rectangle constructor method (values l and w)
    {
        length = l;
        width = w;
    }
    float Area () // method to calculate area
    {
        return length * width;
    }

    int perimeter() // method to calculate perimeter
    {
        return 2 * (length + width);
    }
};

int main()
{
   Rectangle plot1 (20, 10);
   cout << "Area of plot1: " << plot1.Area() << endl;
   cout << "Perimeter of plot1: " << plot1.perimeter() << endl;
    return 0;
};
