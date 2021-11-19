// Lab 6.2.1.cpp
// IT-12 Fihura Taras

#include <iostream>
#include <time.h>
using namespace std;

int findMaxIndex(int* vector, int length) {
    int max = 0;
    for (int i = 1; i < length; i++)
    {
        if (vector[max] < vector[i]) {
            max = i;
        }
    }
    return max;
}

int findMinIndex(int* vector, int length) {
    int min = 0;
    for (int i = 1; i < length; i++)
    {
        if (vector[min] > vector[i]) {
            min = i;
        }
    }
    return min;
}

int* generateArray(int length) {
    int* vector = new int[length];
    for (int i = 0; i < length; i++) {
        vector[i] = rand() % 10;
    }
    return vector;
}

void printArray(int* vector, int length) {
    for (int i = 0; i < length; i++) {
        cout << vector[i] << " ";
    }
    cout << endl;
}


int main()
{
    srand((unsigned)time(NULL));
    int length = 10;
    int* vector = generateArray(length);
    printArray(vector, length);
    cout << "max index is " << findMaxIndex(vector, length) << endl;
    cout << "min index is " << findMinIndex(vector, length) << endl;
    return 0;
}