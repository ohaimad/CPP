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

bool PmergeMe::isOdd() const {
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

void PmergeMe::setOdd(bool isOdd) {
    odd = isOdd;
}

void PmergeMe::setLast(int lastValue) {
    last = lastValue;
}

void PmergeMe::setVecTime(double time) {
    vec_time = time;
}

//  step 1    
int PmergeMe::ft_sort(std::vector<std::pair<int, int> >& nbrs)
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

void PmergeMe::recursive_sort(std::vector<std::pair<int, int> >& vec)
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
std::vector <std::pair<int, int> > PmergeMe::cutting_2(std::vector<int> numbers)
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
    PmergeMe::recursive_sort(vector);
    return vector;
}

// step 4
void PmergeMe::main_pend(PmergeMe &obj, std::vector < std::pair<int, int> > vectore)
{
    std::vector <int > m_chain;
    std::vector <int > pend;
    std::vector <std::pair<int, int> > vec_pair = vectore;

    m_chain.push_back(vec_pair[0].second);
    m_chain.push_back(vec_pair[0].first);
    for(size_t i = 1; i < vec_pair.size(); i++)
    {
        m_chain.push_back(vec_pair[i].first);
        pend.push_back(vec_pair[i].second);
    }
    obj.setMainChain(m_chain);
    insertElements(vec_pair, pend);
}

//step 5
void	insertElements(std::vector<std::pair<int, int> >& vec_pair, std::vector<int>& pend)
{
	int preElement;
	int currElement = 1;
	int nextElement = 3;
	while (vec_pair.size() != pend.size() * 2) 
    {
		for (int i = nextElement - 1; i > currElement - 1; i--) 
        {
			if (i + 1 <= (int)pend.size()) 
            {
				std::vector<int>::iterator low = std::lower_bound(vec_pair.begin(), vec_pair.end(), pend[i].second);
				vec_pair.insert(low, pend[i].second);
			}
		}
		preElement = currElement;
		currElement = nextElement;
		nextElement = currElement + (preElement * 2);
	}
}
