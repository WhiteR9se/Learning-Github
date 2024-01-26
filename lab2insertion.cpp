// INSERTION SORT
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int counter = 0;
    int array[4] = {5, 2, 9, 8};

    for (int i = 1; i < 4; i++) {
        int element = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > element) {
            array[j + 1] = array[j];
            counter++;
            j--;
        }
        array[j + 1] = element;
    }

    cout << "Number of inversions: " << counter << endl;
    cout << "Sorted array: ";
    for (int j : array) {
        cout << j << " ";
    }
    cout << endl;

    return 0;
}


