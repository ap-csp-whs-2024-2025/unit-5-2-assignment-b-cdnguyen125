#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

template <typename T>    // no need to worry about this; Mr. Vu is using this to make teaching easier
void displayList(std::vector<T> const &v);

int main()
{
    // You can follow along with any code in class here
    std::vector<std::string> names = {"Peter", "Bruce", "Steve", "Tony", "Natasha", "Clint", "Wanda", "Hope", "Danny", "Carol"};
    std::vector<int> numbers = {100, 50, 10, 1, 2, 7, 11, 17, 53, -8, -4, -9, -72, -64, -80};
    
    // 1. 
    std::cout << "Every other name in the names list is: " << std::endl;
    int names_index = 0;
    while (names_index < names.size())
    {
        std::cout << names[names_index] << " ";
        names_index = names_index + 2;
    }
    std::cout << std::endl << std::endl;
    
    // 2.
    std::cout << "The positive values of the numbers list are: " << std::endl;
    int numbers_index = 0;
    while (numbers_index < numbers.size ())
    {
        if (numbers[numbers_index] >= 0)
        {
            std::cout << numbers[numbers_index] << " ";
        }   
        numbers_index = numbers_index + 1; 
    }
    std::cout << std::endl << std::endl;

    // 3. 
    std::cout << "The sum of all the values in the numbers list is: ";
    int sum_counter = 0;
    int numbers_index2 = 0;
    while (numbers_index2 < numbers.size())
    {
        sum_counter = sum_counter + numbers[numbers_index2];
        numbers_index2 = numbers_index2 + 1;
    }
    std::cout << sum_counter << std::endl << std::endl;

    //4. 
    std::cout << "The odd numbers in the numbers list are: ";
    int numbers_index3 = 0;
    while (numbers_index3 < numbers.size())
    {
        if (numbers[abs(numbers_index3)] % 2 == 1)
        {
            std::cout << numbers[numbers_index3] << " ";
        }
        numbers_index3 = numbers_index3 + 1;
    }

    return 0;
}





// ignore everything down here
template <typename T>
void displayList(std::vector<T> const &v)
{
    if (v.empty())
    {
        std::cout << "[]\n";
        return;
    }

    std::cout << "[";
    for (int i = 0; i < v.size()-1; ++i)
    {
        std::cout << v[i] << ", ";
    }
    std::cout << v.back() << "]\n";
}