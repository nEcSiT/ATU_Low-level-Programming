#include <iostream>
#include <cmath>
using namespace std;

class Rectanlge{
public:
    float length;
    float width;

public:
    Rectanlge(float l, float w){
        length = l;
        width = w;
    }

    int Area(){
        return  length * width;
    }

    int Perimeter(){
        return 2 * (length + width);
    }

    int Diagonal_length(){
        return sqrt(pow(length, 2) + pow(width, 2));
    }
};


int main()
{
    Rectanlge ATU(100, 75);
    cout << "Area of ATU is "<< ATU.Area()<< endl;
    cout << "Perimeter if the land at ATU is " << ATU.Perimeter()<<endl;
    cout << "Diagonal of the Land is " << ATU.Diagonal_length()<<endl;
}