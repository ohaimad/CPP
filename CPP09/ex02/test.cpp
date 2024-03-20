#include "PmergeMe.hpp"


#include "PmergeMe.hpp"

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

std::vector <int> jacobsthal_sequence(std::vector <int> v)
{
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

void full_sort(std::vector<int> index, std::vector <int> value, PmergeMe &o)
{
    std::vector <int> main_chain = o.get_mainchain();
    std::vector <int> ::iterator it;
    std::vector <int> ::iterator min;
    int ind;

    for (size_t i = 0; i < index.size(); i++){
        min = std::min_element(index.begin(), index.end());
        ind = std::distance(index.begin(), min);
        it = std::lower_bound(main_chain.begin(), main_chain.end(), value[ind]);
        main_chain.insert(it, value[ind]);
        index[ind] = INT_MAX;
    }
    if (o.get_odd()){
        it = std::lower_bound(main_chain.begin(), main_chain.end(), o.get_straggler());
        main_chain.insert(it, o.get_straggler());
    }
    o.set_mainchain(main_chain);
}