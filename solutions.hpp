#ifndef __MYSOLUTION_HPP
#define __MYSOLUTION_HPP

#include<iostream>
#include"reclists.hpp"

int numNodesAtTheTopLevel(list p);
list append(list p, list q);
list reverse(list p);

//additions for Project 2

bool is_lat(list p);
/*
is_lat takes a non-atomic (a list that is not an atom) list and returns true if the list is a
list (potentially empty) of atoms. (It can bomb out if p is an atom, or you may check for
errors and report them if you prefer.)

For example
is_lat( (a b c) ) = true
is_lat( (a (b) c) ) = false

 */

bool member(list p, list q);
/*
p is an atom and q is an non-atomic list. member returns true if p appears anywhere in q.
(If p is not an atom or q is not a non-atomic list, the call is in error—you may detect this
or just bomb out.)

 */

list last(list p);
/*
last returns the last element, ln, of a non-atomic, non-empty list. (Do this without using
reverse.) Note that last of (a b c) is c, not (c)

 */

list list_pair(list p , list q);
/*
list_pair takes two lists of atoms of the same length (you may check for an error if you
like—or just bomb out) and returns a list that consists of lists of two atoms each, which
are the corresponding atoms paired up. For example:
list_pair( (a b c),(d e f) ) = ( (a d) (b e) (c f) )

 */

list firsts(list p);
/*
firsts takes as an argument a list whose elements are lists of atoms and returns a list
which contains the first element from each of the lists. For example:
firsts( ( (a b c) (d e f) (c d b a) ) ) = ( a d c )
 */

list flat(list p) ;
    /*
flat takes a non-atomic list and returns a list which is the original list with the parenthesis
     removed (except for the outer set). For the lists in (3) of the definition, flat yields
        (a b)
        (c)
        (a b c d e)
        (a b c b)
*/

    bool two_the_same(list p, list q);
/*
two_the_same takes two non-atomic recursive lists and returns true if p and q contain at
least one atom in common.

 */

bool equal(list p, list q);
    /*
equal takes two arbitrary recursive lists and determines if they are identical, that is the
     parentheses are all in the same place and the atoms agree as to place and name. This is
an extension of eq
*/

    list total_reverse(list p);
/*
This function takes a recursive list and returns its mirror image. It is the extension of
reverse that reverses the list and each sub-list, recursively, unto the nth generation.
 */

list shape(list p);
/*
shape takes a non-atomic recursive list and returns a recursive list that consists of only
        the parentheses in the original.
*/

list intersection(list p, list q);
/*
Each of p and q is a list of atoms and the atoms are distinct. That is, no atom appears in
        p or q more than once (they represent sets.) intersection forms their intersection, a list
        that contains atoms that are in both, p and q. (The empty list represents the empty set.)
*/

list list_union(list p, list q);
/*
Each of p and q is a list of atoms and the atoms are distinct. That is, no atom appears in
        p or q more than once (they represent sets.) list_union builds and returns their union
— a list that contains the atoms in p and q, without repitition. That is, if p and q have
        an atom in common then this atom should only appear once in the union.
*/


#endif
