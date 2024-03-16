#include "PmergeMe.hpp"

int main(int ac, char** av)
{
    if (ac <= 1)
    {
        std::cout << "Error: No input sequence provided." << std::endl;
        return 1;
    }

    std::vector<int> nums;

    for (int i = 1; i < ac; ++i) {

        nums.push_back(ft_atoi(av[i]));
    }

    std::cout << "Before: ";
    printVector(nums);

    // Sort using the merge-insert sort algorithm
    std::vector<int> numsCopy(nums);
    std::vector<int> temp(nums.size());

    clock_t start1 = clock();
    mergeInsertSort(numsCopy);
    clock_t end1 = clock();

    std::cout << "After: ";
    printVector(numsCopy);

    // Measure time taken by merge-insert sort algorithm
    double duration1 = static_cast<double>(end1 - start1) / CLOCKS_PER_SEC;
    std::cout << "Time to process a range of " << numsCopy.size() << " elements with merge-insert sort: "
              << duration1 << " seconds" << std::endl;

    // Sort using insertion sort algorithm
    std::vector<int> numsCopy2(nums);

    clock_t start2 = clock();

    for (size_t i = 1; i < numsCopy2.size(); ++i) {
        int key = numsCopy2[i];
        int j = i - 1;

        while (j >= 0 && numsCopy2[j] > key) {
            numsCopy2[j + 1] = numsCopy2[j];
            --j;
        }

        numsCopy2[j + 1] = key;
    }

    clock_t end2 = clock();

    // Measure time taken by insertion sort algorithm
    double duration2 = static_cast<double>(end2 - start2) / CLOCKS_PER_SEC;
    std::cout << "Time to process a range of " << numsCopy2.size() << " elements with insertion sort: "
              << duration2 << " seconds" << std::endl;

    return 0;
}