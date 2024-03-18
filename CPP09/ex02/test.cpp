#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {
}

PmergeMe::PmergeMe(const PmergeMe& other) {
    *this = other;
}

PmergeMe::~PmergeMe() {
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
    if (this != &other) {
        this->vector_time = other.vector_time;
        this->main_chain = other.main_chain;
        this->straggler = other.straggler;
        this->odd = other.odd;
    }
    return *this;
}

/*                  getters and setters           */


void PmergeMe::set_vector_time(double vector_time){
    this->vector_time = vector_time;
}


double PmergeMe::get_vector_time() const{
    return vector_time;
}

void PmergeMe::set_straggler(int straggler){
    this->straggler = straggler;
}

int PmergeMe::get_straggler() const{
    return straggler;
}

void PmergeMe::set_odd(bool odd){
    this->odd = odd;
}

bool PmergeMe::get_odd() const{
    return odd;
}

void PmergeMe::set_mainchain(std::vector <int> main_chain){
    this->main_chain = main_chain;
}


std::vector<int> PmergeMe::get_mainchain() const { return main_chain; }

/*                                              */

/*                vector                        */
void PmergeMe::swaper(std::vector <std::pair<int, int> >*vec, int index1, int index2)
{
    std::pair<int, int> tmp;

    tmp = (*vec)[index1];
    (*vec)[index1] = (*vec)[index2];
    (*vec)[index2] = tmp;
}

bool PmergeMe::is_sorted(std::vector<std::pair<int, int> >& tmp)
{
    for (size_t i = 0; i + 1 < tmp.size() ; i++)
    {
        if (tmp[i].first > tmp[i + 1].first)
        {
            swaper(&tmp, i, i + 1);
            return false;
        }
    }
    return true;
}

void PmergeMe::ft_sort(std::vector<std::pair<int, int> >& vec)
{
    if (!is_sorted(vec)) {
        for (size_t i = 0; i + 1 < vec.size(); i++) {
            if (vec[i].first > vec[i + 1].first) {
                PmergeMe::swaper(&vec, i, i + 1);
            }
        }
        ft_sort(vec);
    }
}

std::vector <int>fun(int a, int b){
    std::vector <int> v;
    while(--b > a)
        v.push_back(b); 
    return v;
}

std::vector <int> jacobsthal_sequence(std::vector <int> v){
    std::vector <int> v1;
    std::vector <int> v2;
    std::vector <int> replica;
    size_t i = 3;

    replica.push_back(3);
    replica.push_back(2);
    replica.push_back(5);

    if (v.size() < 3)
    {
        replica.resize(v.size());
        return replica;
    }
    v1.push_back(jacobsthal(i - 1));
    while (i <= v.size())
    {
        v1.push_back(jacobsthal(i));
        v2 = fun(jacobsthal(i - 1), jacobsthal(i));
        v1.insert(v1.end(), v2.begin(), v2.end());
        if (v1.size() > v.size())
        {
            v1.resize(v.size());
            break;
        }
        v2.clear();
        i++;
    }

    return v1;
}

void PmergeMe::ft_inserting(PmergeMe &o, std::vector < std::pair<int, int> > vec)
{
    std::vector <int > chain;
    std::vector <std::pair<int, int> > pairing;
    std::vector <int > pend;
    std::vector <int > jacobSeq;
    std::pair<int, int> pair;

    chain.push_back(vec[0].second);
    chain.push_back(vec[0].first);
    for(size_t i = 1; i < vec.size(); i++)
    {
        chain.push_back(vec[i].first);
        pend.push_back(vec[i].second);
    }
    o.set_mainchain(chain);
    jacobSeq = jacobsthal_sequence(pend);
    full_sort(jacobSeq, pend, o);
}
/*                                              */

/*                 printers                    */
void PmergeMe::print_mainchain()
{
    for (size_t i = 0; i < main_chain.size(); i++)
        std::cout << main_chain[i] << " ";
    std::cout << std::endl;
}  

/*                                              */