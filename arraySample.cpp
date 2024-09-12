#include <iostream>
#include <vector> 
#include <limits>
using namespace std;

// modify array
void modifyElement(vector<int>& arr, int index, int newValue) {
    if (index >= 0 && index < arr.size()) {
        arr[index] = newValue;
        cout << "Element in index " << index << " has been modified to " << newValue << endl;
    } else {
        cout << "Invalid index." << endl;
    }
}

// find minn max val
void findMinMax(const vector<int>& arr) {
    int minVal = numeric_limits<int>::max();  
    int maxVal = numeric_limits<int>::min(); 

    for (int val : arr) {
        if (val < minVal) {
            minVal = val;
        }
        if (val > maxVal) {
            maxVal = val;
        }
    }

    cout << "Min value in the array: " << minVal << endl;
    cout << "Max value in the array: " << maxVal << endl;
}

int main() {
    int size;

    //userint n get array size
    cout << "Enter the size of the array: ";
    cin >> size;

    vector<int> arr(size); // flexi size 😃

    cout << "Enter " << size << " elements for the array: " << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // userint to modify element
    int index, newValue;
    cout << "what index do you want to modify: ";
    cin >> index;
    cout << "Enter the new value: ";
    cin >> newValue;
    modifyElement(arr, index, newValue);

    // Find min n max
    findMinMax(arr);

    return 0;
}