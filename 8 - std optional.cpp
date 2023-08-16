#include <iostream>
#include <string>
#include <optional>
#include <vector>


auto findPosition(const std::vector<int>& numbers, const int& key) -> std::optional<size_t>
{
    for (size_t index = 0; index < numbers.size(); index++)
    {
        if (numbers[index] == key)
            return index;
    }

    return {}; // empty optional 
}


int main(int argc, char** argv)
{
    std::optional<int> number; // empty optional 
    std::optional<int> myNumber = 10;
    std::optional<std::string> myName = "Modern C++";

    if (number)
        std::cout << "the value of number is " << number.value() << '\n';
    else 
        std::cout << "optional is empty" << '\n';


    if (myName.has_value())
        std::cout << "The value is " << myName.value().size() << '\n';
    else 
        std::cout << "Ther is not value " << '\n';


    int value = *myNumber; // myNumber.value()
    int numberValue = number.value_or(659);

    std::cout << "numberValue " << numberValue << '\n';
    std::cout << value << std::endl;

    std::vector<int> vec = {15, 36, 96, 32};

    auto pos = findPosition(vec, 15);

    if (pos)
        std::cout << "found 15 in vec" << '\n';
    else 
        std::cout << "there is no number in vec" << '\n';

    std::optional<int> pos1 = findPosition(vec, 100); // std::optional<int> is return type 

    if (pos1.has_value())
        std::cout << "pos1 has value" << '\n';
    else 
        std::cout << "pos1 has no value" << '\n';

        
    std::cin.get();
     return EXIT_SUCCESS;
}