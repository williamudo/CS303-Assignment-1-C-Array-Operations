// MODIFIED WITH HEAVY USE OF LLM: CHATGPT

#include "functions.h"

int searchNumber(const int arr[], int size, int number) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == number) return i;
    }
    return -1;
}

int modifyNumber(int arr[], int size, int index, int newValue) {
    if (index < 0 || index >= size)
        throw std::out_of_range("Invalid index for modify");
    int oldValue = arr[index];
    arr[index] = newValue;
    return oldValue;
}

void addNumber(int arr[], int &size, int maxSize, int newValue) {
    if (size >= maxSize)
        throw std::overflow_error("Array is full");
    arr[size++] = newValue;
}

void removeNumber(int arr[], int &size, int index) {
    if (index < 0 || index >= size)
        throw std::out_of_range("Invalid index for remove");
    for (int i = index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
}