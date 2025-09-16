// MODIFIED WITH HEAVY USE OF LLM: CHATGPT

#pragma once
#include <iostream>
#include <stdexcept>
#include <fstream>

using namespace std;

int searchNumber(const int arr[], int size, int number);

int modifyNumber(int arr[], int size, int index, int newValue);

void addNumber(int arr[], int &size, int maxSize, int newValue);

void removeNumber(int arr[], int &size, int index);