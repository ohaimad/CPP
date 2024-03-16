#include "PmergeMe.hpp"

int ft_atoi(const std::string& str)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    // Skip whitespace characters
    while (std::isspace(str[i]))
        i++;

    // Check for sign
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }

    // Convert digits to integer
    while (std::isdigit(str[i]))
    {
        result = result * 10;
        result += str[i] - '0';
        i++;
    }
    if(str[i] != '\0')
    {
        std::cout << "EXIT" << std::endl;
        exit(1);
    }
    return result * sign;
}

// Function to print the elements of a vector
void printVector(const std::vector<int>& vec)
{
    std::vector<int>::const_iterator it;
    for (it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

// Merge function for merge-insert sort
void merge(std::vector<int>& nums, std::vector<int>& temp, int left, int mid, int right)
{
    int i = left;
    int j = mid + 1;
    int k = left;

    while (i <= mid && j <= right)
    {
        if (nums[i] <= nums[j]) {
            temp[k++] = nums[i++];
        } else {
            temp[k++] = nums[j++];
        }
    }

    while (i <= mid) {
        temp[k++] = nums[i++];
    }

    while (j <= right) {
        temp[k++] = nums[j++];
    }

    for (i = left; i <= right; i++) {
        nums[i] = temp[i];
    }
}

// Merge-Insert Sort Algorithm
void mergeInsertSort(std::vector<int>& nums)
{
    int n = nums.size();
    std::vector<int> temp(n);

    for (int width = 1; width < n; width *= 2)
    {
        for (int i = 0; i < n; i += 2 * width)
        {
            int left = i;
            int mid = i + width - 1;
            int right = std::min(i + 2 * width - 1, n - 1);
            merge(nums, temp, left, mid, right);
        }
    }
}
