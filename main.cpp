#include<iostream>
#include"reclists.hpp"
#include"solutions.hpp"

int main()
{

    std::cout << "Enter a list p: ";
    list p = read_list();
    std::cout << "Enter a list q: ";
    list q = read_list();
    std::cout << "Echoing the list that you entered below." << std::endl;
    write_list(p);
    std::cout << "The number of nodes at the top level of the input list is: "
        << numNodesAtTheTopLevel(p) << std::endl;
    //std::cout << "is_lat test p: " << is_lat(p) << std::endl;
    //std::cout << "is_lat test q: " << is_lat(q) << std::endl;
    std::cout << "member test: " << member(p,q) << std::endl;

    std::cout << "append test:";
    write_list(append(p,q));
    std::cout << std::endl;

    std::cout  << "last test: ";
    write_list(last(p));
    std::cout << std::endl;

    std:: cout << "list_pair test:";
    write_list(list_pair(p,q));
    std::cout << std::endl;
    return 0;
}
