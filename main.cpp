#include <iostream>
#include <set>
using namespace std;

int main()
{
    std::string str = "This is a string, ok?";
    std::set<char> unique_char;

    for (auto x : str)
        if(isalpha(x))
            unique_char.insert(tolower(x));

    std::cout << "String : " << str << std::endl;
    std::cout << "Unique characters (alpha/Case Insensitive) : " << unique_char.size() << std::endl;
    return 0;
}
