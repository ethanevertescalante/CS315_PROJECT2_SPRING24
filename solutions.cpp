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
/*
list_pair takes two lists of atoms of the same length (you may check for an error if you
like—or just bomb out) and returns a list that consists of lists of two atoms each, which
are the corresponding atoms paired up. For example:
list_pair( (a b c),(d e f) ) = ( (a d) (b e) (c f) )
 */


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
/*
firsts takes as an argument a list whose elements are lists of atoms and returns a list
which contains the first element from each of the lists. For example:
firsts( ( (a b c) (d e f) (c d b a) ) ) = ( a d c )
 */
    if (is_null(p)) {
        return null();
    }else if(is_atom(car(p))){
        return cons(car(p), firsts(cdr(p)));
    }

    return cons(car(car(p)), firsts(cdr(p)))    ;

}
list flat(list p) {
    /*
flat takes a non-atomic list and returns a list which is the original list with the parenthesis
     removed (except for the outer set). For the lists in (3) of the definition, flat yields
        (a b)
        (c)
        (a b c d e)
        (a b c b)
*/
    if (is_null(p)) {
        return null();
    }
    else if (is_atom(p)) {
        return cons(p, null());
    }
    else {
        return cons(car(p), flat(cdr(p)));
    }




}