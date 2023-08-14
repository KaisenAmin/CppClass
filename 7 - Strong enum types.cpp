#include <iostream>
#include <string>
#include <fstream>


enum class Color 
{   
    RED,
    WHITE,
    BLACK
};

enum struct StatusCode : uint16_t // underlying type 
{   
    BAD_REQUEST = 404,
    INTERNAL_SERVER = 501
};


enum class FileStatus 
{
    OPEN,
    FAILED,
    READ,
    WRITE 
};

enum struct Gender : char 
{
    MALE = 'M',
    FEMALE = 'F'
};

FileStatus readFile(const std::string& fileName) 
{
    std::ofstream file(fileName);

    if (file.is_open())
    {
        return FileStatus::OPEN;
    }
    else 
        return FileStatus::FAILED;
}


auto toString(const Gender& sex) -> std::string 
{
    std::string result;

    switch (sex)
    {
        case Gender::FEMALE:
            result = "Female";
            break; 
        case Gender::MALE:
            result = "Male";
            break; 
        default:
            result = "what is your gender!!!";
            break;        
    }

    return result;
}

int main(int argc, char** argv)
{

    Color color = Color::RED; // socpe 
    int var = static_cast<int>(Color::BLACK); // eplicit cast & type safety

    std::cout << var << '\n';

    StatusCode data = StatusCode::BAD_REQUEST;

    if (data == StatusCode::INTERNAL_SERVER) 
        std::cout << "this is a internal server error \n";
    else 
        std::cout << "this is user kind of error\n";

    FileStatus reader = readFile("./main.c");

    switch (reader)
    {
        case FileStatus::OPEN:
            std::cout << "open the main.c file" << '\n';
            break;
        case FileStatus::FAILED:
            std::cout << "Sorry can not open the file" << '\n';
            break;
        default:
            std::cout << "what is this flag!!!" << '\n';
            break;
    }

    Gender gender = Gender::FEMALE;
    std::cout << "Your gender is " << toString(gender) << '\n';
    
    std::cout << 
    std::cin.get();
    return EXIT_SUCCESS;
}