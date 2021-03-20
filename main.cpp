#include <iostream> 
#include <iomanip> 

using namespace std; 

void printAreaPerimeter( double width, double length)
{
    double area = length * width;
    double perimeter = 2*(length+width); 
 
    cout << "Find the area and perimeter of the rectangle: " << endl; 
    cout << "Area of the rectangle: " << area << endl;
    cout << "Perimeter of the rectangle: " << perimeter << endl;


} 

int main () 

{
    double area; 
    double perimeter;
    int width;
    width = 12;
    int length;
    length = 20;

    cout << fixed << setprecision(2);
    printAreaPerimeter(width, length);
    
    
    return 0;
}
