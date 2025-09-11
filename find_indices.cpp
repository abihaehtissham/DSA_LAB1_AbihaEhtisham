#include <iostream>
#include <vector>
using namespace std;

// Function to find all indices of a given key in an array
vector<int> findIndices(const vector<int>& arr, int key) {
    vector<int> indices;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    // Multiple occurrences
    vector<int> arr1 = {1, 2, 3, 2, 4, 2, 5};
    int key1 = 2;
    vector<int> result1 = findIndices(arr1, key1);
    cout << "Test 1 (multiple occurrences): ";
    for (int idx : result1) cout << idx << " ";
    cout << endl;

    //Key not present
    vector<int> arr2 = {10, 20, 30, 40};
    int key2 = 25;
    vector<int> result2 = findIndices(arr2, key2);
    cout << "Test 2 (key not present): ";
    if (result2.empty()) cout << "No indices found";
    else for (int idx : result2) cout << idx << " ";
    cout << endl;

    // Empty array
    vector<int> arr3 = {};
    int key3 = 5;
    vector<int> result3 = findIndices(arr3, key3);
    cout << "Test 3 (empty array): ";
    if (result3.empty()) cout << "No indices found";
    else for (int idx : result3) cout << idx << " ";
    cout << endl;

    return 0;
}
