#include<iostream>
#include"reclists.hpp"
#include"solutions.hpp"



void is_lat_test();
void memberTest();
void lastTest();
void last_pair_Test();
void firstTest();
void flatTest();
void two_are_same_Test();
void equalTest();
void totalReverseTest();
void shapeTest();
void intersectionTest();
void list_Union_Test();


int main()
{


    std::cout << "Enter a list p: ";
    list p = read_list();
    std::cout << "Echoing the list that you entered below." << std::endl;
    write_list(p);
    std::cout << "The number of nodes at the top level of the input list is: " << numNodesAtTheTopLevel(p) << std::endl;
    std::cout << std::endl;

    //function tests
    //is_lat_test();
    //memberTest();
    //lastTest();
    //last_pair_Test();
    //firstTest();
    flatTest();
    //two_are_same_Test();
    //equalTest();
    //totalReverseTest();
    //shapeTest();
    //intersectionTest();
    //list_Union_Test();










    return 0;
}



void is_lat_test(){

    std::cout << "IS_LAT TEST: \n";
    std::cout << "Enter a non-atomic list: ";
    list p = read_list();
    std::cout << is_lat(p) << std::endl;

}


void memberTest(){

    std::cout << "MEMBER TEST: \n";
    std::cout << "Enter an atom: ";
    list p = read_list();
    std::cout << "Enter a non-atomic list: ";
    list q = read_list();
    std::cout << member(p,q) << std::endl;

}

void lastTest(){

    std::cout << "LAST TEST: \n";
    std::cout << "Enter a non-atomic, non-empty list: ";
    list p = read_list();
    write_list(last(p));
    std::cout << std::endl;


}

void last_pair_Test(){

    std:: cout << "LIST_PAIR TEST (Same Length): \n";
    std::cout << "Enter list of atom 1: ";
    list p = read_list();
    std::cout << "Enter list of atom 2: ";
    list q = read_list();
    write_list(list_pair(p,q));
    std::cout << std::endl;

}

void firstTest(){

    std::cout << "FIRST TEST: \n";
    std::cout << "Enter list(list of atoms): ";
    list p = read_list();
    write_list(firsts(p));
    std::cout << std::endl;


}

void flatTest(){

    std::cout << "FLAT TEST: \n";
    std::cout << "Enter non-atomic list: ";
    list p = read_list();
    write_list(flat(p));
    std::cout << std::endl;



}

void two_are_same_Test(){

    std:: cout << "TWO_THE_SAME TEST: \n";
    std::cout << "Enter list 1 (non-atomic): ";
    list p = read_list();
    std::cout << "Enter list 2 (non-atomic): ";
    list q = read_list();
    std::cout << two_the_same(p,q) << std::endl;


}

void equalTest(){

    std:: cout << "EQUAL TEST: \n";
    std::cout << "Enter list 1: ";
    list p = read_list();
    std::cout << "Enter list 2: ";
    list q = read_list();
    std::cout << equal(p,q) << std::endl;

}

void totalReverseTest(){

    std::cout << "TOTAL REVERSE TEST: \n";
    std::cout << "Enter non-atomic list: ";
    list p = read_list();
    write_list(total_reverse(p));
    std::cout << std::endl;


}

void shapeTest(){

    std::cout << "SHAPE TEST: \n";
    std::cout << "Enter non-atomic list: ";
    list p = read_list();
    write_list(shape(p));
    std::cout << std::endl;


}

void intersectionTest(){

    std:: cout << "INTERSECTION TEST: \n";
    std::cout << "Enter list of atoms 1: ";
    list p = read_list();
    std::cout << "Enter list of atoms 2: ";
    list q = read_list();
    write_list(intersection(p,q));
    std::cout << std::endl;

}

void list_Union_Test(){

    std:: cout << "LIST_UNION TEST: \n";
    std::cout << "Enter list of atoms 1: ";
    list p = read_list();
    std::cout << "Enter list of atoms 2: ";
    list q = read_list();
    write_list(list_union(p,q));
    std::cout << std::endl;


}




































