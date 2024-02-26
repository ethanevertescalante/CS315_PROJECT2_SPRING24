#ifndef __MYSOLUTION_HPP
#define __MYSOLUTION_HPP

#include<iostream>
#include"reclists.hpp"

int numNodesAtTheTopLevel(list p);
list append(list p, list q);
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









#endif
