#include<iostream>
#include<cassert>
#include "HanoiOfTowers.h"
using namespace std;

void stack::push( HanoiRecord newItem ) {
    // new value via struct
    HanoiRecordLink * newLink = new HanoiRecordLink;

    //storing newItem into the newLink
    newLink -> value = newItem;

    //_top should be pointing to the current top of the link
    newLink -> next = _top;

    //updating the _top so it points to the value
    _top = newLink;
}

HanoiRecord stack::pop() {
    //checking to make sure the stack isn't empty

    /*OLD ASSERT CODE
    assert((!is_empty(), "Stack is empty!"));
    ^^ this gave me huge issues to fix and find out why my code wasn't working
    */

    assert((!is_empty() && "Stack is empty!"));

    // creating a temporary/excess value to refernce the value we want to delete later
    HanoiRecordLink * excess = _top;

    // _top needs to be back to the top of the value stack
    HanoiRecord value2 = _top -> value;

    //updating _top so it points to the next value
    _top = _top -> next;

    // freeing/recycling the memory
    delete excess;

    //return the value that we stored in HanoiRecord
    return value2;
}
