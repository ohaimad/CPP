#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iterator>
#include <ctime>
#include <cctype>
#include <string>

// Function to print the elements of a vector
void printVector(const std::vector<int>& vec);

// Merge function for merge-insert sort
void merge(std::vector<int>& nums, std::vector<int>& temp, int left, int mid, int right);

// Merge-Insert Sort Algorithm
void mergeInsertSort(std::vector<int>& nums);

int ft_atoi(const std::string& str);
int main(int ac, char** av);