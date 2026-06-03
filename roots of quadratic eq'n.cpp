// Unit 1 - Practice Problem 1:
// Find the roots of a quadratic equation (ax2 + bx + c)
// This code handles real and distinct, real and equal, and complex roots.
#include <iostream>
#include <cmath> // for sqrt() function 

using namespace std;

int main()
{
    float a, b, c;
    cout << "Enter Coefficients a, b and c: "; 
    cin >> a >> b >> c;
    
    if (a == 0) {
        cout << "This is not a quadratic equation" << endl;
        return 0; // Exit early since we can't divide by zero
    }
    
    float discriminant = b * b - 4 * a * c; 
    float root1, root2;
    
    if (discriminant > 0) {
        // Real and distinct roots
        root1 = (-b + sqrt(discriminant)) / (2 * a); 
        root2 = (-b - sqrt(discriminant)) / (2 * a); 
        cout << "Roots are real and distinct" << endl; 
        cout << "Root 1 = " << root1 << endl; 
        cout << "Root 2 = " << root2 << endl;
    }
    else if (discriminant == 0) {
        // Real and equal roots
        root1 = -b / (2 * a);
        cout << "Roots are real and equal" << endl; 
        cout << "Root 1 = Root 2 = " << root1 << endl;
    }
    else {
        // Complex roots (Moved inside the proper else block)
        float realPart = -b / (2 * a);
        float imagPart = sqrt(-discriminant) / (2 * a); 
        
        cout << "Roots are imaginary" << endl;
        cout << "Root 1 = " << realPart << " + " << imagPart << "i" << endl; 
        cout << "Root 2 = " << realPart << " - " << imagPart << "i" << endl;
    }
     
    return 0;
}
