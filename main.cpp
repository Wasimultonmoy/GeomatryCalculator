#include <iostream>
#include <iomanip>

using namespace std;
//Crated the prototypes of the Functions to keep the main function top
void Operations(char choice);
void Circle();
void Rectangle();
void Triangle();
void Square();
int main() {
    char usrChoice;
    cout << "Welcome to Geometry Calculator" << endl;
    //Showing the menu to ther user
    cout << "Choose an operation:" << endl;
    cout << "A. Circle" << endl;
    cout << "B. Rectangle" << endl;
    cout << "C. Triangle" << endl;
    cout << "D. Square" << endl;
    cout << "E. End program" << endl;
    cout << "Enter your choice: ";
    // Taking user Choice as Input
    cin >> usrChoice;
    //handling the Small latter's if user give small latter as input
    usrChoice = toupper(usrChoice);
    //using a loop to prevent taking input rather than a to e
    if(usrChoice >= 'A' && usrChoice <= 'E')
    {
        Operations(usrChoice);
    } else {
        cout << "Invalid Input. Please Choice Again: ";
        cin >> usrChoice;
    }
    return 0;
}
void Operations(char choice) {
    //using switch to Do operations according to user
    switch (choice) {
        case 'A':
            Circle();
            break;
        case 'B':
            Rectangle();
            break;
        case 'C':
            Triangle();
            break;
        case 'D':
            Square();
            break;
        case 'E':
            cout << "Ok, Exiting the Program";
            break;
    }
}
//Function to Show result to the user
void showResults(double result)
{
    cout <<fixed << setprecision(2) << "The Area would be: " << result;
}
//Function to get the area of the Circle
void Circle()
{
    double cricleArea, circleRadius;
    cout << "Enter the Radius of the Circle: ";
    cin >> circleRadius;
    //Calculating the area of the Circle
    cricleArea = 3.1416 * circleRadius * circleRadius;
    //Showing the Output to the user
    showResults(cricleArea);
}
//Function to get the area of the Rectangle
void Rectangle()
{
    double length, width, recArea;
    cout << "Enter The length of the Rectangle: ";
    cin >> length;
    cout << "Enter The Width of the Rectangle: ";
    cin >> width;
    //Calculating the area of the Rectangle
    recArea = width * length;
    //Showing the Output to the user
    showResults(recArea);
}
//Function to get the area of the Triangle
void Triangle()
{
    double base, height, triArea;
    cout << "Enter the base of the Triangle: ";
    cin >> base;
    cout << "Enter the Height of the Triangle: ";
    cin >> height;
    //Calculating the area of the Triangle
    triArea = 0.5 * base * height;
    showResults(triArea);
}
//Function to get the area of the Square
void Square()
{
    double side, sqArea;
    cout << "Enter the Side of the Square: ";
    cin >> side;
    //Calculating the area of the Square
    sqArea = side * side;
    showResults(sqArea);
}