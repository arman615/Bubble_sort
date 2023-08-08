#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& vec) {
    for (int i = 0; i < vec.size(); ++i) {
        for (int j = 0; j < vec.size() - 1 - i; ++j) {
            if (vec[j] > vec[j + 1]) {
                std::swap(vec[j], vec[j + 1]);
            }
        }
    }
}


int main() {
    std::vector<int> list = {9, 3, 7, 1, 5, 4, 8, 2, 6};
    bubbleSort(list);
    std::cout << "Sorted elements: ";
    for (int num : list) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}
