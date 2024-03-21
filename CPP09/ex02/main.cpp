#include "PmergeMe.hpp"

int pars_1(std::string str)
{
    for (int i = 1; str[i]; i++)
    {
        if ((!isdigit(str[i]) || str[i] == '-') && str[i] != ' ')
            return 0;
    }
    return 1;
}

int pars_2(char **str)
{
    for (int i = 1; str[i]; i++)
    {
        if (!pars_1(str[i]))
            return 0;
    }
    return 1;
}

void vectore_way(char **av, PmergeMe &obj, int args)
{
    std::vector<int> vect;
    if(args % 2 != 0)
        obj.setLast(std::atoi(av[args]));
    else
        obj.setLast(-1);
    for (size_t i = 1; av[i]; i++){
        vect.push_back(std::atoi(av[i]));
    }
    std::vector<std::pair<int, int> > vec = cutting_2(vect);
    clock_t starTime = clock();
    obj.main_pend(obj, vec);
    std::cout << "Before: ";
    clock_t endTime = clock();
    double duration = static_cast<double>(endTime - starTime) / CLOCKS_PER_SEC * 1000000;
    obj.setVecTime(duration);
    std::cout << "After: ";
    std::cout << "Time to process a range of " << args << " elements with : "
              << "std::vector :" << obj.getVecTime() << std::endl;
    obj.print_m_chain();
}

void    deque_way(char **av, PmergeMe &obj, int args)
{
    std::deque<int> deq;

    if(args % 2 != 0)
        obj.setLast(std::atoi(av[args]));
    else
        obj.setLast(-1);

    for (size_t i = 1; av[i]; i++){
        deq.push_back(std::atoi(av[i]));
    }

    std::deque<std::pair<int, int> > dequ = cutting_2(deq);
    clock_t starTime = clock();
    obj.main_pend(obj, dequ);
    std::cout << "Before: ";
    clock_t endTime = clock();
    double duration = static_cast<double>(endTime - starTime) / CLOCKS_PER_SEC * 1000000;
    obj.setDequeTime(duration);
    std::cout << "After: ";
    std::cout << "Time to process a range of " << args << " elements with : "
              << "std::deque :" << obj.getDequeTime() << std::endl;
    obj.print_m_chain();
}

int main (int ac, char **av)
{
    PmergeMe obj;
    int args = ac - 1;

    if (ac <= 2 || !pars_2(av))
    {
        std::cerr << "Usage: " << av[0] << " <positive number // at least 2>" << std::endl;
        return 1;
    }
    else
    {
        vectore_way(av, obj, args);
        deque_way(av, obj, args);
    }
}

