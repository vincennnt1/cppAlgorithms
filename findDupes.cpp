#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
        int n;
        cout << "Enter length: ";
        cin >> n;
        int arr[n];
        for (int l = 0; l < n; l++) {
                cin >> arr[l];
        }

        vector<int> dupes;
        vector<int> checked;

        for (int num = 0; num < n; num++) {
                if (find(checked.begin(), checked.end(), arr[num]) != checked.end()) {
                        if (find(dupes.begin(), dupes.end(), arr[num]) != dupes.end()) {
                                continue;
                        }else{
                                dupes.insert(dupes.begin(), arr[num]);
                        }
                }else{
                        checked.insert(checked.begin(), arr[num]);
                }
        }
        
        cout << "\n";
        cout << "Dupes found: ";
        for (int a = 0; a < dupes.size(); a++) {
                cout << dupes[a] << " ";
        }

        cout << "\n";
        cout << "Numbers without dupes: ";
        for (int m = 0; m < checked.size(); m++) {
                cout << checked[m] << " ";
        }
        cout << "\n";
}
