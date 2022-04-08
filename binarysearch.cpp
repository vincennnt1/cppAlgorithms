#include <iostream>

using namespace std;

int main() {
        int len, num;

        cout << "Enter Length: ";
        cin >> len;
        
        int arr[len];
        
        cout << "Enter number you are looking for: ";
        cin >> num;
        
        for (int r = 0; r < len; r++) {
                cin >> arr[r];
        }
        
        int mid = len / 2;

        bool found = false;

        while (found != true) {
                if (arr[mid] == num) {
                        cout << num << " found at " << (mid + 1);
                        found = true;
                }else if (num > arr[mid]) {
                       len = len / 2;
                       mid = mid + len / 2;

                }else if (num < arr[mid]) {
                        len = len / 2;
                        mid = mid - len/ 2;
                }
        }

}
