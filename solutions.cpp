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

list reverse(list p) {
// Reverses the nodes of p at the top level.
    if( is_null(p) )
        return null();
    return append( reverse( cdr(p) ), cons( car(p), null() ) );
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


    return cons(car(car(p)), firsts(cdr(p)));

}
// TODO: flat(list p) still needs some work
list flat(list p) {
    /*
flat takes a non-atomic list and returns a list which is the original list with the parenthesis
     removed (except for the outer set). For the lists in (3) of the definition, flat yields
        (a b)
        (c)
        (a b c d e)
        (a b c b)
*/
    if(is_null(p)){
        return null();
    }


}

bool two_the_same(list p, list q){
/*
two_the_same takes two non-atomic recursive lists and returns true if p and q contain at
least one atom in common.

 */

    if (is_null(p) || is_null(q)) {
        return false;
    }
    else if (is_atom(p) && is_atom(q)) {
        return eq(p, q);
    }
    else if (is_atom(p)) {
        return two_the_same(p, car(q)) || two_the_same(p, cdr(q));
    }
    else if (is_atom(q)) {
        return two_the_same(q, car(p)) || two_the_same(q, cdr(p));
    }

    return two_the_same(car(p), q) || two_the_same(cdr(p), q);

}


bool equal(list p, list q) {
/*
equal takes two arbitrary recursive lists and determines if they are identical, that is the
 parentheses are all in the same place and the atoms agree as to place and name. This is
an extension of eq
*/
    if(is_null(p) && is_null(q)){
        return true;
    }else if(is_atom(p) && is_atom(q)){
        if(eq(p,q)){
            return true;
        }
        return false;
    }else if((!is_null(p) && !is_null(q)) && (!is_atom(p) && !is_atom(q))){
        return equal(car(p), car(q)) && equal(cdr(p), cdr(q));
    }

    return false;




}

list total_reverse(list p){
/*
This function takes a recursive list and returns its mirror image. It is the extension of
reverse that reverses the list and each sub-list, recursively, unto the nth generation.
 */
    if(is_null(p)){
        return null();
    }

    //TODO: outer swap will occur, but inner swap will not occur, figure it out
    if(!is_atom(car(p)) && !is_null(car(p))){
        return append(total_reverse(car(p)), cons(cdr(p),null()));
    }

    return append(total_reverse(cdr(p)), cons(car(p), null()));






}