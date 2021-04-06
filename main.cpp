/******************************************************************************
Text-menu based program to calculate areas of 3 geometric shapes 
(circle, rectangle, triangle).

@author Vlada Foulke
@version 10/24/2020
*******************************************************************************/
#include <iostream>

using namespace std;

const double pi = 3.14159;


int main()
{
    int choice;
    cout << "Geometry calculator\n";
    
    main_menu:
    cout << "1. Calculate the Area of a Circle.\n"
         << "2. Calculate the Area of a Rectangle.\n"
         << "3. Calculate the Area of a Triangle.\n"
         << "4. Quit\n";
    cout << "Enter your choice (1-4) ";
    cin >> choice;
    
    if (choice == 1) {
        double r;
        label_1:
        cout << "\nWhat is the radius of the circle? ";
        cin >> r;
        
        // input validation
        if (r < 0) {cout << "*Error*: radius can not be negative!"; goto label_1;}
        
        cout << "The area of the circle is " << pi * r * r << "\n\n";
        goto main_menu;
    }
    else if (choice == 2) { 
        double x, y;
        label_2:
        cout << "\nWhat are the length and the width of the rectangle? ";
        cin >> x >> y;
        
        // input validation
        if ((x < 0) || (x < 0)) {
            cout << "*Error*: length and width can not be negative!"; goto label_2;}
        
        cout << "The area of the rectangle is " << x * y << "\n\n";
        goto main_menu;
    }
    else if (choice == 3) {
        double b,h;
        label_3:
        cout << "\nWhat are the base and the height of the triangle? ";
        cin >> b >> h;
        
        // input validation
        if ((b < 0) || (h < 0)) {
            cout << "*Error*: base and height can not be negative!"; goto label_3;}
        
        cout << "The area of the triangle is " << b * h * 0.5 << "\n\n";
        goto main_menu;
    }
    else if (choice == 4)
        return 0;
    else {
        cout << "Error: enter a number between 1 and 4.\n\n";
        goto main_menu;
    }
}
