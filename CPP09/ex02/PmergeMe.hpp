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
        std::deque <int> main_chain_deq;
        int last;
        double vec_time;
        double deque_time;
    public:
        PmergeMe();
        PmergeMe(const PmergeMe& other);
        ~PmergeMe();
        PmergeMe& operator=(const PmergeMe& other);

        int getLast() const;
        void setLast(int last);

        // Getters --> Vectors
        const std::vector<int>& getMainChain() const;
        double getVecTime() const;

        // Setters --> Vectors
        void setMainChain(const std::vector<int>& chain);
        void setVecTime(double time);

        // Getters --> Deques
        const std::deque<int>& getMainChain_deq() const;
        double getDequeTime() const;

        // Setters --> Deques
        void setMainChain_deq(const std::deque<int>& chain);
        void setDequeTime(double time);

        // fonctions -- > Vectors
        void print_m_chain();
        void main_pend(PmergeMe &obj, std::vector < std::pair<int, int> > vectore);
        // fonctions -- > Deques
        void print_m_chain_deq();
        void main_pend(PmergeMe &obj, std::deque < std::pair<int, int> > deq);
};

// ----------------- Vector ----------------- //
int ft_sort(std::vector<std::pair<int, int> >& nbrs);
void recursive_sort(std::vector<std::pair<int, int> >& vec);
void	jacobsthal(std::vector<int>& main_chaine, std::vector<int>& pend);
std::vector <std::pair<int, int> > cutting_2(std::vector<int> numbers);

// ----------------- Deque ----------------- // 
int ft_sort(std::deque<std::pair<int, int> >& nbrs);
void recursive_sort(std::deque<std::pair<int, int> >& vec);
void	jacobsthal(std::deque<int>& main_chaine, std::deque<int>& pend);
std::deque <std::pair<int, int> > cutting_2(std::deque<int> numbers);

#endif