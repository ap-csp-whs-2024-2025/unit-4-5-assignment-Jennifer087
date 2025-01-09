#include <iostream>  // std::cin, std::cout
#include <string>    // std::string, std::getline
#include <vector>    // std::vector

template <typename T>    // no need to worry about this; Mr. Vu is using this to make teaching easier
void displayList(std::vector<T> const &v);

int main()
{
    // You can follow along with any code in class here
    int x = 5;
    double y = 2.3;
    bool z = true;
    std::string teacher = "Mr. Vu";

    //a list of ints name Jennys
    std::vector<int> jenny = {8, 6, 7, 5, 3, 0, 9};

    std::vector<std::string> siblings = {"Jessie", "Jolie", "Na", "Jayden"};
    std::cout << siblings [0] <<std::endl;

    siblings.push_back ("Jen and Steven");
    displayList(siblings);
    siblings.pop_back();
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