#include "PmergeMe.hpp"

DF
bool validateInput(char **argv)
{
    int i = 1;

    while (argv[i])
    {
        if (areDigits(argv[i]))
            i++;
        else
            return false;
    }
    return true;
}

void fullSort(std::vector<int> index, std::vector<int> value, PmergeMe &obj)
{
    std::vector<int> mainChain = obj.getMainChain();
    std::vector<int>::iterator it;
    std::vector<int>::iterator min;
    int ind;

    for (size_t i = 0; i < index.size(); i++)
    {
        min = std::min_element(index.begin(), index.end());
        ind = std::distance(index.begin(), min);
        it = std::lower_bound(mainChain.begin(), mainChain.end(), value[ind]);
        mainChain.insert(it, value[ind]);
        index[ind] = INT_MAX;
    }
    if (obj.getOdd())
    {
        it = std::lower_bound(mainChain.begin(), mainChain.end(), obj.getStraggler());
        mainChain.insert(it, obj.getStraggler());
    }
    obj.setMainChain(mainChain);
}

std::vector<std::pair<int, int> > generatePairs(std::vector<int> fullSet)
{
    std::vector<std::pair<int, int> > vec;
    std::pair<int, int> pair;

    for (size_t i = 0; i + 1 < fullSet.size(); i += 2)
    {
        if (fullSet[i + 1] < fullSet[i])
        {
            pair.first = fullSet[i];
            pair.second = fullSet[i + 1];
        }
        else
        {
            pair.first = fullSet[i + 1];
            pair.second = fullSet[i];
        }
        vec.push_back(pair);
    }
    PmergeMe::sortPairs(vec);
    return vec;
}

bool areDigits(std::string str)
{
    size_t i = 0;

    while (i < str.length())
    {
        if (!isdigit(str[i]))
            return false;
        i++;
    }
    return true;
}

void fullSort(std::deque<int> index, std::deque<int> value, PmergeMe &obj)
{
    std::deque<int> mainChain = obj.getMainDeque();
    std::deque<int>::iterator it;
    std::deque<int>::iterator min;
    int ind;

    for (size_t i = 0; i < index.size(); i++)
    {
        min = std::min_element(index.begin(), index.end());
        ind = std::distance(index.begin(), min);
        it = std::lower_bound(mainChain.begin(), mainChain.end(), value[ind]);
        mainChain.insert(it, value[ind]);
        index[ind] = INT_MAX;
    }
    if (obj.getOdd())
    {
        it = std::lower_bound(mainChain.begin(), mainChain.end(), obj.getStraggler());
        mainChain.insert(it, obj.getStraggler());
    }
    obj.setMainDeque(mainChain);
}

std::deque<std::pair<int, int> > generatePairs(std::deque<int> fullSet)
{
    std::deque<std::pair<int, int> > vec;
    std::pair<int, int> pair;

    for (size_t i = 0; i + 1 < fullSet.size(); i += 2)
    {
        if (fullSet[i + 1] < fullSet[i])
        {
            pair.first = fullSet[i];
            pair.second = fullSet[i + 1];
        }
        else
        {
            pair.first = fullSet[i + 1];
            pair.second = fullSet[i];
        }
        vec.push_back(pair);
    }
    PmergeMe::sortPairs(vec);
    return vec;
}

int jacobsthal(int n)
{
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return jacobsthal(n - 1) + 2 * jacobsthal(n - 2);
}

int main(int argc, char **argv)
{
    if (argc <= 2)
    {
        std::cerr << "Usage: " << argv[0] << " <positive number(s) at least 2>" << std::endl;
        return 1;
    }
    else if (!validateInput(argv))
    {
        std::cerr << "Usage: " << argv[0] << " <positive number(s) at least 2>" << std::endl;
        return 1;
    }
    else
    {
        std::deque<int> deque;
        std::vector<int> vector;
        PmergeMe p;
        int i = 0;
        int j = 1;

        if ((argc - 1) % 2 != 0)
        {
            p.setOdd(true);
            p.setStraggler(std::atoi(argv[argc - 1]));
        }
        else
        {
            p.setOdd(false);
            p.setStraggler(0);
        }
        while (argv[j])
        {
            deque.push_back(std::atoi(argv[j]));
            vector.push_back(std::atoi(argv[j]));
            i++;
            j++;
        }

        std::cout << "Before: ";
        for (size_t i = 0; i < deque.size(); i++)
            std::cout << deque[i] << " ";
        std::cout << std::endl;
        clock_t start_time = clock();
        p.insertPairs(p, generatePairs(vector));
        clock_t end_time = clock();
        double duration = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC * 1e6;
        p.setVectorTime(duration);
        std::cout << "After: ";
        start_time = clock();
        p.insertPairs(p, generatePairs(deque));
        end_time = clock();
        duration = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC * 1e6;
        p.setDequeTime(duration);
        p.printMainChain();
        std::cout << "Time to process a range of " << argc - 1 << " elements with : "
                  << "std::deque :" << p.getDequeTime() << std::endl;
        std::cout << "Time to process a range of " << argc - 1 << " elements with : "
                  << "std::vector :" << p.getVectorTime() << std::endl;
    }
}
