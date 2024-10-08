// COMSC-210 | Lab14: Color Class | Nina Tsao

#include <iostream>
using namespace std;

// Color class
class Color {
// private member variables
private:
    int red;
    int green;
    int blue;

// public setter & getter member functions
public:
    int getRed() const {return red;}
    void setRed(int r) {red = r;}

    int getGreen() const {return green;}
    void setGreen(int g) {green = g;}

    int getBlue() const {return blue;}
    void setBlue(int b) {blue = b;}

    // print() method to print the object data
    void print() {
        cout << "Color:" << endl;
        cout << "\tRed: " << red << endl;
        cout << "\tGreen: " << green << endl;
        cout << "\tBlue: " << blue << endl;
    }
};

// create Color objects, populate with data, and output the values
int main() {
    cout << "The values of colors:" << endl << endl;

    Color c1;
    c1.setRed(255);
    c1.setGreen(0);
    c1.setBlue(0);
    c1.print();
    
    Color c2;
    c2.setRed(0);
    c2.setGreen(255);
    c2.setBlue(0);
    c2.print();

    Color c3;
    c3.setRed(0);
    c3.setGreen(0);
    c3.setBlue(255);
    c3.print();

    return 0;
}