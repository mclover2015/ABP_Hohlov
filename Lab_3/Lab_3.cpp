#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int sss = 200;

void random_generator(int arr[], int size, int min_val = -50, int max_val = 50) {
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % (max_val - min_val + 1) + min_val;
    }
}

bool finder_zero_sum(int arr[], int size, int &start_index, int &end_index) {
    for (int start = 0; start < size; ++start) {
        int current_sum = 0;
        for (int end = start; end < size; ++end) {
            current_sum += arr[end];
            if (current_sum == 0) {
                start_index = start;
                end_index = end;
                return true;
            }
        }
    }
    return false;
}

int Lab_3() {
    srand(time(0));

    int arr[sss];


    random_generator(arr, sss);
    cout << "poch arr: ";
    for (int i = 0; i < sss; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int start_index = -1, end_index = -1;
    if (finder_zero_sum(arr, sss, start_index, end_index)) {
        cout << "finder zero sum arr: ";
        for (int i = start_index; i <= end_index; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } else {
        cout << "nema" << endl;
    }

    return 0;
}
