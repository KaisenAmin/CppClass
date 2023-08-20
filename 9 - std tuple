#include <iostream>
#include <tuple>
#include <string>
#include <typeinfo>
#include <vector>


typedef std::tuple<int, std::string, double> Students;

template <typename T, typename U>
auto getMaxTuple(T x, T y) -> std::tuple<T, U>
{
    return x > y? std::make_tuple(x, y): std::make_tuple(y, x);
}

auto addStudents(std::vector<Students> student, const int& id, const std::string& name, const double& grade) -> void 
{

}

auto printStatus(const std::vector<Students> student) -> void
{

}


/*
    write a function for get the max grade 
*/

int main(int argc, char** argv)
{
    // std::tuple<> t1; // empty tuple
    std::tuple<int, std::string, double> t2(40, "C++", 52.326);
    std::tuple<int, std::string, double> t3(50, "Hello", 32.6);

    int myNumber = std::get<0>(t2);
    std::string myName = std::get<1>(t2);
    double myGrade = std::get<2>(t2);

    std::cout << "My name is " << myName << std::endl;
    std::cout << "My double is " << myGrade << std::endl;
    std::cout << "My number is " << myNumber << std::endl;


    size_t size_t2 = std::tuple_size<decltype(t2)>::value;

    std::cout << "Size of t2 is " << size_t2 << std::endl;

    typedef std::tuple_element<2, decltype(t2)>::type FirstType;

    FirstType value;


    std::cout << typeid(value).name() << std::endl;

    int i;
    std::string s;
    double d;

    std::tie(i, s, d) = t2;

    std::cout << "intger is " << i <<  '\t' << s << std::endl;

    std::get<1>(t2) = "Hello World";

    std::cout << "After change the string in tuple " << std::get<1>(t2) << '\n';

    std::tie(i, s, std::ignore) = t2; // i = 40, s = Hello World, d = ignore 

    std::cout << std::boolalpha << (t2 < t3) << std::endl;

    // how to make a tuple 
    auto newTuple = std::make_tuple(15, 16.326, "C++ is grate");

    std::cout << std::get<2>(newTuple) << std::endl;


    auto result = getMaxTuple<int, double>(15, 16.326);
    int integer;
    double dou;

    std::tie(integer, dou) = result;

    std::cout << integer << std::endl;
    std::cout << dou << std::endl;


    std::cin.get();
    return EXIT_SUCCESS;
}