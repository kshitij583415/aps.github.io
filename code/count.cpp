#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> countSort(const std::vector<int>& inputArray) {
    int N = inputArray.size();
    int M = *max_element(inputArray.begin(), inputArray.end());

    std::vector<int> countArray(M + 1, 0);

    for (int i = 0; i < N; ++i) {
        countArray[inputArray[i]]++;
    }

    for (int i = 1; i <= M; ++i) {
        countArray[i] += countArray[i - 1];
    }

    std::vector<int> outputArray(N);

    for (int i = N - 1; i >= 0; --i) {
        outputArray[countArray[inputArray[i]] - 1] = inputArray[i];
        countArray[inputArray[i]]--;
    }

    return outputArray;
}

int main() {
    std::vector<int> inputArray = {4, 3, 12, 1, 5, 5, 3, 9};
    std::vector<int> outputArray = countSort(inputArray);

    for (int i = 0; i < outputArray.size(); ++i) {
        std::cout << outputArray[i] << " ";
    }

    return 0;
}
