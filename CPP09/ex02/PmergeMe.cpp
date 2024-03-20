#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}
PmergeMe::PmergeMe(const PmergeMe& copy){
     *this = copy;
}
PmergeMe::~PmergeMe() {}
PmergeMe& PmergeMe::operator=(const PmergeMe& obj) {
    if (this != &obj) {
        this->vec_time = obj.vec_time;
        this->main_chain = obj.main_chain;
        this->last = obj.last;
        this->odd = obj.odd;
    }
    return *this;
}

// geters and setters
const std::vector<int>& PmergeMe::getMainChain() const {
    return main_chain;
}

const std::vector<int>& PmergeMe::getPend() const {
    return pend;
}

bool PmergeMe::getAdd() const {
    return odd;
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

void PmergeMe::setPend(const std::vector<int>& pend) {
    this->pend = pend;
}

void PmergeMe::setAdd(bool isadd) {
    odd = isadd;
}

void PmergeMe::setLast(int lastValue) {
    last = lastValue;
}

void PmergeMe::setVecTime(double time) {
    vec_time = time;
}

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

//step 5
void	jacobsthal(std::vector<int>& main_chaine, std::vector<int>& pend)
{
	int before;
	unsigned long now = 1;
	int after = 3;
	while (main_chaine.size() < (pend.size() * 2))
    {
		for (unsigned long i = (after - 1); i > (now - 1)  ; i--)
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

// print vector
void PmergeMe::print_m_chain()
{
    for (size_t j = 0; j < main_chain.size(); j++)
        std::cout << main_chain[j] << " ";
    std::cout << std::endl;
} 