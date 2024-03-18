#ifndef PmergeMe_HPP
#define PmergeMe_HPP

#include <iostream>
#include <deque>
#include <vector>
#include <iomanip> 
#include <ctime>

class PmergeMe {
public:
    PmergeMe();
    PmergeMe(const PmergeMe& other);
    ~PmergeMe();
    PmergeMe& operator=(const PmergeMe& other);

    static void ft_inserting(PmergeMe &,std::vector < std::pair<int, int> > map);
    static void swaper(std::vector<std::pair<int, int> >*, int index1, int index2);
    static bool is_sorted( std::vector<std::pair<int, int> >& map);
    static void ft_sort(std::vector<std::pair<int, int> >& map);
    static void buildJacobInsertionSequence(std::vector<int>& pend, std::vector<int>& jacobSeq);
    static void insertStraggler(std::vector<int>& S, int straggler);
    static std::vector <std::pair<int, int> > ft_pairing(std::vector<int> full_set);

    static void ft_inserting(PmergeMe &,std::deque < std::pair<int, int> > map);
    static void swaper(std::deque<std::pair<int, int> >*, int index1, int index2);
    static bool is_sorted( std::deque<std::pair<int, int> >& map);
    static void ft_sort(std::deque<std::pair<int, int> >& map);
    static void buildJacobInsertionSequence(std::deque<int>& pend, std::deque<int>& jacobSeq);
    static void insertStraggler(std::deque<int>& S, int straggler);
    static std::deque <std::pair<int, int> > ft_pairing(std::deque<int> full_set);

    void set_straggler(int straggler);
    int get_straggler() const;
    void set_odd(bool odd);
    bool get_odd() const;

    void set_mainchain(std::vector <int> main_chain);
    void set_maindeque(std::deque <int> main_deque);

    void set_deque_time(double deque_time);
    void set_vector_time(double vector_time);
    double get_deque_time() const;
    double get_vector_time() const;
    std::vector<int> get_mainchain() const;
    std::deque<int> get_maindeque() const;
 
    void print_mainchain();
    void print_maindeque();

private:
    double deque_time;
    double vector_time;
    std::vector <int> main_chain;
    std::deque <int> main_deque;
    int straggler;
    bool odd;
};

bool is_digits(std::string str);
int jacobsthal(int n);
void full_sort(std::vector<int>, std::vector <int>, PmergeMe &o);
void full_sort(std::deque<int>, std::deque <int>, PmergeMe &o);

#endif // PmergeMe_HPP

