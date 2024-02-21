#include "reclists.hpp"
#include "solutions.hpp"

// As you implement functions in this file, you should add the
// function-prototype to the solutions.hpp. The function-prototypes
// for append and reverse are already in solutions.hpp.


int numNodesAtTheTopLevel(list p) {
    // p is one of
    //    a null list
    //    an atom
    //    a recursive list

    // The function returns the number of nodes at the top-level
    // of p.

    if( is_null(p) )
        return 0;
    if( is_atom(p) )
        return 1;
    return 1 + numNodesAtTheTopLevel(cdr(p));
}


bool is_lat(list p){
    if(is_null(p)){
        return true;
    }

    if(!is_atom(car(p))){
        return false;
    }

    return is_lat(cdr(p));

}

/*
 * TODO: fix member() function, does not work when p is in q sublist ex:(((b) a) c d)
 *
 */

bool member(list p, list q){
    //p is an atom
    //q is a non-atomic list
    if(is_null(q)){
        return false;
    }
    if(!is_atom(p)){
        return false;
    }
    if(eq(p, car(q)))
    {
        return true;
    }
    if(!is_null(car(q)) && !is_atom(car(q))){

        return member(p, car(q));
    }


    return member(p, cdr(q));


}