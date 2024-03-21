#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}
PmergeMe::PmergeMe(const PmergeMe& copy){
     *this = copy;
}
PmergeMe& PmergeMe::operator=(const PmergeMe& obj) {
    if (this != &obj) {
        this->vec_time = obj.vec_time;
        this->deque_time = obj.deque_time;
        this->main_chain = obj.main_chain;
        this->main_chain_deq = obj.main_chain_deq;
        this->last = obj.last;
    }
    return *this;
}
PmergeMe::~PmergeMe() {}

// geters and setters -- > Vectors

const std::vector<int>& PmergeMe::getMainChain() const {
    return main_chain;
}
int PmergeMe::getLast() const {
    return last;
}
double PmergeMe::getVecTime() const {
    return vec_time;
}
void PmergeMe::setMainChain(const std::vector<int>& chain) {
    main_chain = chain;
}
void PmergeMe::setLast(int lastValue) {
    last = lastValue;
}
void PmergeMe::setVecTime(double time) {
    vec_time = time;
}

// geters and setters -- > Deques

const std::deque<int>& PmergeMe::getMainChain_deq() const {
    return main_chain_deq;
}
double PmergeMe::getDequeTime() const {
    return deque_time;
}
void PmergeMe::setMainChain_deq(const std::deque<int>& chain) {
    main_chain_deq = chain;
}
void PmergeMe::setDequeTime(double time) {
    deque_time = time;
}

//----------------- LOGIC ----------------- //

//  step 1    
int ft_sort(std::vector<std::pair<int, int> >& nbrs)
{
    for (size_t i = 0; i + 1 < nbrs.size() ; i++)
    {
        if (nbrs[i].first > nbrs[i + 1].first)
        {
            std::pair<int, int> tmp = nbrs[i];
            nbrs[i] = nbrs[i + 1];
            nbrs[i + 1] = tmp;
            return 0;
        }
    }
    return 1;
}
int ft_sort(std::deque<std::pair<int, int> >& nbrs)
{
    for (size_t i = 0; i + 1 < nbrs.size() ; i++)
    {
        if (nbrs[i].first > nbrs[i + 1].first)
        {
            std::pair<int, int> tmp = nbrs[i];
            nbrs[i] = nbrs[i + 1];
            nbrs[i + 1] = tmp;
            return 0;
        }
    }
    return 1;
}

void recursive_sort(std::vector<std::pair<int, int> >& vec)
{
    if (!ft_sort(vec))
    {
        for (size_t i = 0; i + 1 < vec.size(); i++)
        {
            if (vec[i].first > vec[i + 1].first) 
            {
                std::pair<int, int> tmp = vec[i];
                vec[i] = vec[i + 1];
                vec[i + 1] = tmp;
            }
        }
        recursive_sort(vec);
    }
}
void recursive_sort(std::deque<std::pair<int, int> >& deq)
{
    if (!ft_sort(deq))
    {
        for (size_t i = 0; i + 1 < deq.size(); i++)
        {
            if (deq[i].first > deq[i + 1].first) 
            {
                std::pair<int, int> tmp = deq[i];
                deq[i] = deq[i + 1];
                deq[i + 1] = tmp;
            }
        }
        recursive_sort(deq);
    }
}

// step 2 - 3
std::vector <std::pair<int, int> > cutting_2(std::vector<int> numbers)
{
    std::vector <std::pair<int, int> > vector;
    std::pair<int, int> nb;
    for (size_t i = 0; i + 1 < numbers.size(); i += 2)
    {
        // 7 - 8
        if (numbers[i + 1] < numbers[i])
        {
            nb.first = numbers[i];
            nb.second = numbers[i + 1];
        }
        else
        {
            nb.first = numbers[i + 1];
            nb.second = numbers[i];
        }
        vector.push_back(nb);
    }
    recursive_sort(vector);
    return vector;
}
std::deque <std::pair<int, int> > cutting_2(std::deque<int> numbers)
{
    std::deque <std::pair<int, int> > deque;
    std::pair<int, int> nb;
    for (size_t i = 0; i + 1 < numbers.size(); i += 2)
    {
        // 7 - 8
        if (numbers[i + 1] < numbers[i])
        {
            nb.first = numbers[i];
            nb.second = numbers[i + 1];
        }
        else
        {
            nb.first = numbers[i + 1];
            nb.second = numbers[i];
        }
        deque.push_back(nb);
    }
    recursive_sort(deque);
    return deque;
}

// step 4
void PmergeMe::main_pend(PmergeMe &obj, std::vector < std::pair<int, int> > vectore)
{
    std::vector <int > m_chain;
    std::vector <int > pend;

    m_chain.push_back(vectore[0].second);
    for(size_t i = 0; i < vectore.size(); i++)
    {
        m_chain.push_back(vectore[i].first);
        pend.push_back(vectore[i].second);
    }
    jacobsthal(m_chain, pend);
    if (obj.getLast() != -1)
    {
       std::vector<int>::iterator lower = std::lower_bound(m_chain.begin(), m_chain.end(), obj.getLast());
		m_chain.insert(lower , obj.getLast());
    }
    obj.setMainChain(m_chain);
        

}
void PmergeMe::main_pend(PmergeMe &obj, std::deque < std::pair<int, int> > dequee)
{
    std::deque <int > m_chain;
    std::deque <int > pend;

    m_chain.push_back(dequee[0].second);
    for(size_t i = 0; i < dequee.size(); i++)
    {
        m_chain.push_back(dequee[i].first);
        pend.push_back(dequee[i].second);
    }
    jacobsthal(m_chain, pend);
    if (obj.getLast() != -1)
    {
       std::deque<int>::iterator lower = std::lower_bound(m_chain.begin(), m_chain.end(), obj.getLast());
		m_chain.insert(lower , obj.getLast());
    }
    obj.setMainChain_deq(m_chain);
}

//step 5
void	jacobsthal(std::vector<int>& main_chaine, std::vector<int>& pend)
{
	int before;
	size_t now = 1;
	int after = 3;
	while (main_chaine.size() < (pend.size() * 2))
    {
		for (size_t i = (after - 1); i > (now - 1)  ; i--)
        {
			if (i + 1 <= pend.size())
            {
				std::vector<int>::iterator lower = std::lower_bound(main_chaine.begin(), main_chaine.end(), pend[i]);
				main_chaine.insert(lower , pend[i]);
			}
		}
		before = now;
		now = after;
		after = now + (before * 2);
	}
}

void	jacobsthal(std::deque<int>& main_chaine, std::deque<int>& pend)
{
    int before;
    size_t now = 1;
    int after = 3;
    while (main_chaine.size() < (pend.size() * 2))
    {
        for (size_t i = (after - 1); i > (now - 1)  ; i--)
        {
            if (i + 1 <= pend.size())
            {
                std::deque<int>::iterator lower = std::lower_bound(main_chaine.begin(), main_chaine.end(), pend[i]);
                main_chaine.insert(lower , pend[i]);
            }
        }
        before = now;
        now = after;
        after = now + (before * 2);
    }
}

// print vector
void PmergeMe::print_m_chain()
{
    for (size_t j = 0; j < main_chain.size(); j++)
        std::cout << main_chain[j] << " ";
    std::cout << std::endl;
}

// print deque
void PmergeMe::print_m_chain_deq()
{
    for (size_t j = 0; j < main_chain_deq.size(); j++)
        std::cout << main_chain_deq[j] << " ";
    std::cout << std::endl;
}