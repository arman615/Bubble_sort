#include <iostream>
#include <vector>

std::vector<int>& bubbleSort(std::vector<int>& vec) {
    for (int i = 0; i < vec.size(); ++i) {
        for (int j = 0; j < vec.size() - 1 - i; ++j) {
            if (vec[j] > vec[j + 1]) {
                std::swap(vec[j], vec[j + 1]);
            }
        }
    }
    return vec;
}

int main() {
    std::vector<int> unsorted = {9, 3, 7, 1, 5, 4, 8, 2, 6};

    std::vector<int> sorted = bubbleSort(unsorted);
    std::cout << "Sorted elements: ";
    for (int num : sorted) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
