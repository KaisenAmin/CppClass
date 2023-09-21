#include <iostream>
#include <algorithm>
#include <string>
#include <vector>



int main(int argc, char** argv)
{
    std::vector<int> numbers = {3, 2, 1}; // 1 2 3

    std::sort(numbers.begin(), numbers.end());

    do {
        for (const int& value : numbers)
        {
            std::cout << value << ' ';
        }
        std::cout << '\n';

    } while(std::next_permutation(numbers.begin(), numbers.end()));

    std::cout << "------" << std::endl;

    std::string data1 = "abc";

    do {
        std::cout << data1 << '\n';

    } while(std::next_permutation(data1.begin(), data1.end()));

    std::cout << "------" << std::endl;
    std::string data2 = "aab";
    
    std::sort(data2.begin(), data2.end());


    do {
        std::cout << data2 << '\n';

    } while(std::next_permutation(data2.begin(), data2.end()));


    std::cin.get();
    return EXIT_SUCCESS;
}