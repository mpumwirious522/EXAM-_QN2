#include <iostream>
using namespace std;

int findThirdAngle(int angle1, int angle2) {
    return 180 - (angle1 + angle2);
}

int main() {
    int angle1, angle2;

    // Input two angles 
    cout << "Enter the first angle of the triangle: ";
    cin >> angle1;
    cout << "Enter the second angle of the triangle: ";
    cin >> angle2;

    // Finding and displaying the third angle
    int thirdAngle = findThirdAngle(angle1, angle2);
    cout << "The third angle of the triangle is: " << thirdAngle << " degrees" << endl;

    return 0;
}
