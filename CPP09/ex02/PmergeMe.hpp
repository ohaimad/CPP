#ifndef PmergeMe_HPP
#define PmergeMe_HPP

#include <iostream>
#include <deque>
#include <vector>
#include <iomanip> 
#include <ctime>

class PmergeMe {
    private:
        std::vector <int> main_chain;
        bool odd;
        int last;
        double vec_time;
    public:
        PmergeMe();
        PmergeMe(const PmergeMe& other);
        ~PmergeMe();
        PmergeMe& operator=(const PmergeMe& other);

        // Getters
        const std::vector<int>& getMainChain() const;
        bool isOdd() const;
        int getLast() const;
        double getVecTime() const;

        // Setters
        void setMainChain(const std::vector<int>& chain);
        void setOdd(bool isOdd);
        void setLast(int last);
        void setVecTime(double time);
        // fonctions
        bool PmergeMe::ft_sort(std::vector<std::pair<int, int> >& tmp);
        void PmergeMe::recursive_sort(std::vector<std::pair<int, int> >& vec);
        std::vector <std::pair<int, int> > cutting_2(std::vector<int> numbers);
};

#endif