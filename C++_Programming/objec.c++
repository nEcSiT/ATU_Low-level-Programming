#include <iostream>
using namespace std;
#include <cmath>

class RECTANGLE{
 private: // to be able to access the attribute in the class
    float length;
    float width;
 public:   
    RECTANGLE(float len, float wit)
    {
        length = len;
        width = wit;
    }

    float getArea()
    {
    return (length * width);
    }

    float getPerimeter()
    {
        return (2 * (length + width));
    }

    float getDiagonal(){
    return sqrt(pow(length, 2) + pow(width, 2));
    }
};

int main()
{
    cout << "Welcome to Ghana Land Commission" << endl;
    cout << "Please enter the length and width of your plot" << endl;
    float plot_length, plot_width;
    cout << "Enter Length of plot: ";
    cin >> plot_length;
    cout << "Enter Width of plot: ";
    cin >> plot_width;
    
    RECTANGLE plot1(plot_length, plot_width);
    cout << plot1.getArea()<< " is the area of the plot" << endl;
    cout << plot1.getPerimeter()<< " is the Perimeter of the plot" << endl;
    cout << plot1.getDiagonal()<< " is the Diagonal length of the plot" << endl;

    return 0;
};