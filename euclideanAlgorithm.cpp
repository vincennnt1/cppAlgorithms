#include <iostream>

using namespace std;


int main() {
        int a, b;
        cout << "Euclidean Algorithm\n"
        << "Enter first number: ";
        cin >> a; cout << endl;
        
        cout << "Enter second number: ";
        cin >> b; cout << endl;
        
        /* making sure a is the greater one to make it easier to write program */
        
        if (b > a) {
                int temp = b;
                b = a;
                a = temp;
        }

        int R;

        while ((a % b) > 0) {
                R = a % b;
                a = b;
                b = R;
        }
        
        cout << "GCD is: " << a / b << endl;
}
