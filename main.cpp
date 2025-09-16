// MODIFIED WITH HEAVY USE OF LLM: CHATGPT

#include "functions.h"

int main() {
    const int MAX_SIZE = 150;
    int arr[MAX_SIZE];
    int size = 0;

    ifstream infile("A1input.txt");
    if (!infile.is_open()) {
        cout << "Error: Could not open A1input.txt" << endl;
        return 1;
    }

    while (infile >> arr[size] && size < MAX_SIZE) {
        size++;
    }
    infile.close();

    cout << "Loaded " << size << " numbers from A1input.txt" << endl;

    // SEARCH
    int number;
    cout << "\nEnter number to search: ";
    cin >> number;
    int idx = searchNumber(arr, size, number);
    if (idx != -1)
        cout << number << " found at index " << idx << endl;
    else
        cout << number << " not found.\n";

    // MODIFY
    try {
        int index, newValue;
        cout << "\nEnter index to modify: ";
        cin >> index;
        cout << "Enter new value: ";
        cin >> newValue;
        int oldValue = modifyNumber(arr, size, index, newValue);
        cout << "Index " << index << " changed from " << oldValue << " to " << newValue << endl;
    } catch (const exception &e) {
        cout << "Error: " << e.what() << endl;
    }

    // ADD
    try {
        int newNum;
        cout << "\nEnter number to add: ";
        cin >> newNum;
        addNumber(arr, size, MAX_SIZE, newNum);
        cout << newNum << " added. New size = " << size << endl;
    } catch (const exception &e) {
        cout << "Error: " << e.what() << endl;
    }

    // REMOVE
    try {
        int index;
        cout << "\nEnter index to remove: ";
        cin >> index;
        removeNumber(arr, size, index);
        cout << "Removed element at index " << index << ". New size = " << size << endl;
    } catch (const exception &e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}