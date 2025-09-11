#include <iostream>
#include <string>
using namespace std;

int findPattern(const string& text, const string& pattern) {
    if (pattern.empty()) return -1; 
    int n = text.size();
    int m = pattern.size();

    // Naive algorithm
    for (int i = 0; i <= n - m; i++) {
        int j = 0;
        while (j < m && text[i + j] == pattern[j]) {
            j++;
        }
        if (j == m) return i; 
    }
    return -1; 
}

int main() {
    cout << "Case 1: " << findPattern("hello world", "hello") << " (Expected: 0)" << endl;
    cout << "Case 2: " << findPattern("hello world", "world") << " (Expected: 6)" << endl;
    cout << "Case 3: " << findPattern("hello world", "xyz") << " (Expected: -1)" << endl;
    cout << "Case 4: " << findPattern("hello world", "") << " (Expected: -1)" << endl;

    return 0;
}
