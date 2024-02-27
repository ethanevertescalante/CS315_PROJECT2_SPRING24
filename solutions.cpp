#include "reclists.hpp"
#include "solutions.hpp"
#include <cassert>

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


list append(list p, list q){
    if(is_null(p)) {
        return q;
    }

    return cons(car(p), append(cdr(p), q));

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

list last(list p){

    if(is_null(cdr(p))){
        return car(p);
    }

    return last(cdr(p));

}

list list_pair(list p , list q){
    //p and q are both lists of atoms
    assert(!is_atom(p));
    if(is_null(p)){
        return null();
    }


    return cons (cons(car(p), cons(car(q), null())), list_pair(cdr(p), cdr(q)));
    //list_pair(cdr(p), cdr(q)) : grabs the next two elements to match up

    //cons(car(p), cons(car(q), null()) : grabs the first element in list p
    //and pairs it up with the first element in list q

    //note: cons(car(q), null()) == ([atom in q])
    // so cons( [atom in p], [atom in q] )


}

list firsts(list p){
    if(is_null(p)){
        return null();
    }


    return cons(car(p), null());

}
