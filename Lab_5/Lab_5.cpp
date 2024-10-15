#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int reversePositiveSubsequence(std::vector<int>& seq) {
    int start = -1;

    for (size_t i = 0; i <= seq.size(); ++i) {
        if (i == seq.size() || seq[i] <= 0 || seq[i] < -50 || seq[i] > 50) {
            if (start != -1) {
                std::reverse(seq.begin() + start, seq.begin() + i);
                start = -1;
            }
        } else if (start == -1) {
            start = i;
        }
    }
    return 0;
}

int Lab_5() {
    vector<int> sequence = {11, 22, -5, 60, 25, 0, 15, -50, 5, -30, 40, 55};

    cout << "start: ";
    for (int num : sequence) {
        cout << num << " ";
    }
    cout << std::endl;

    reversePositiveSubsequence(sequence);

    cout << "end  : ";
    for (int num : sequence) {
        cout << num << " ";
    }
    cout << std::endl;

    return 0;
}

