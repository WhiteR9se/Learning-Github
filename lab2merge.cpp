//MERGE SORT
#include <iostream>
using namespace std;

int merge(int array[], int temporary[], int first, int second, int third) {
    int i = first;
    int j = second + 1;
    int k = first;
    int counter = 0;
    while (i <= second && j <= third) {
        if (array[i] <= array[j]) {
            temporary[k++] = array[i++];
        } else {
            temporary[k++] = array[j++];
            counter += (second - i + 1);
        }
    }
    while (i <= second) {
        temporary[k++] = array[i++];
    }
    while (j <= third) {
        temporary[k++] = array[j++];
    }
    for (int p = first; p <= third; p++) {
        array[p] = temporary[p];
    }
    return counter;
}

int mergecount(int array[], int temporary[], int first, int third) {
    int counter = 0;
    if (first < third) {
        int second = (first + third) / 2;
        counter += mergecount(array, temporary, first, second);
        counter += mergecount(array, temporary, second + 1, third);
        counter += merge(array, temporary, first, second, third);
    }
    return counter;
}

int count(int array[], int n) {
    int temporary[n];
    return mergecount(array, temporary, 0, n - 1);
}

int main() {
    int array[] = {5,7,9,2};
    int n = sizeof(array) / sizeof(array[0]);
    int inversions = count(array, n);
    cout << "Number of inversions: " << inversions << endl;
    return 0;
}
