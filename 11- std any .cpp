#include <iostream>
#include <any>
#include <string>

int main(int argc, char **argv)
{
    std::any myAny = 156;
    // int d = 165;
    // double c = d;

    try
    {
        if (myAny.has_value())
        {
            if (myAny.type() == typeid(int))
            {
                int number = std::any_cast<int>(myAny);
                // int number = std::any_cast<double>(myAny);

                std::cout << "My number is " << number << std::endl;

                // myAny.reset();
                // myAny = std::string("Hello World");

                // std::string sentence = std::any_cast<int>(myAny);
                // std::cout << sentence << std::endl;

            }
        }
        else
        {
            std::cerr << "ther is no any value" << '\n';
        }
    }
    catch(const std::bad_any_cast& error)
    {
        std::cerr << error.what() << std::endl;
    }


    // std::any original = std::string("Hello C++ Programmers");
    // std::any copyable = original;

    // std::string data = std::any_cast<std::string>(copyable);
    // std::cout << data << std::endl;

    // copyable = 1659;

    // std::string original_data = std::any_cast<std::string>(original);
    // std::cout << original_data << std::endl;


    // int copy_number = std::any_cast<int>(copyable);

    // std::cout << copy_number << std::endl;

    std::any original = std::string("Hello C++ Programmers");
    std::any copyable = std::move(original);

    if (original.has_value())
    {
        std::cout << "original is owner " << std::endl;
    }
    else 
        std::cout << "original is not owner" << std::endl;


    std::string data = std::any_cast<std::string>(copyable);

    std::cout << "Data is " << data << std::endl;
    
    std::cin.get(); 
    return EXIT_SUCCESS;
}