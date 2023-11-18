#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    stringstream ss; // Use stringstream to convert numbers to string
    ss << n;
    string a = ss.str(); // Get the string from stringstream

    int j = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'R') {
            j = min(j + 1, (int)a.size() - 1);
        } else if (s[i] == 'L') {
            j = max(j - 1, 0);
        } else if (s[i] == 'T') {
            if (j < a.size()) {
                a[j] = ((a[j] - '0' + 1) % 10) + '0'; // Increment the digit
            }
        } else if (s[i] == 'D') {
            if (j < a.size()) {
                a[j] = ((a[j] - '0' - 1 + 10) % 10) + '0'; // Decrement the digit
            }
        } else if (isdigit(s[i]) && i + 1 < s.size() && isdigit(s[i + 1])) {
            int idx1 = s[i] - '0';
            int idx2 = s[i + 1] - '0';
            if (idx1 < a.size() && idx2 < a.size()) {
                swap(a[idx1], a[idx2]);
            }
            i++; // Skip the next character as it has already been processed
        }
    }

    cout << a << endl;
    return 0;
}

