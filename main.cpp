#include<iostream>
#include<cassert>
#include "HanoiOfTowers.h"
using namespace std;


int main() {
    int numberOfDisks = 0;
    HanoiRecord testrec;
    stack HanoiStack;
    cout << "How many disks? " << flush;
    cin >> numberOfDisks;

    //Push into the stack
    HanoiStack.push(HanoiRecord(numberOfDisks, 1, 2, 3));

    /* I used the lines after this comment to debug and made sure that my code was working correctly
    cout << "Number of disks: " << testrec._numberDisks << endl;
    cout << "Received input: " << numberOfDisks << endl;

    if (HanoiStack.is_empty()) {
        cout << "The stack is empty!" << endl;
    }   else {
        testrec = HanoiStack.pop();
        cout << "Source Pole: " << testrec._sourcePole << endl;
        cout << "Spare Pole: " << testrec._sparePole << endl;
        cout << "Destination Pole: " << testrec._destinationPole << endl;
    }

    So for convience of programming and understanding
        n = _numberDisks
        i = _sourcePole
        j = _sparePole
        k = __destinationPole
   */

    while (!HanoiStack.is_empty()){
        testrec = HanoiStack.pop();
        
        if (testrec._numberDisks == 1) {
            //move the top disk from pole i to pole k
            cout << "Move Disk from " << testrec._sourcePole << " to " << testrec._destinationPole << ". " << endl;
        } else {

            // for these, I followed the procedure you gave us step my step
    
            //S ⇐ (n − 1, j, i, k)
            HanoiStack.push(HanoiRecord(testrec._numberDisks - 1, 
                                        testrec._sparePole, 
                                        testrec._sourcePole, 
                                        testrec._destinationPole));
            //S ⇐ (1, i, j, k)
            HanoiStack.push(HanoiRecord(1, testrec._sourcePole, 
                                        testrec._sparePole, 
                                        testrec._destinationPole));
            //S ⇐ (n − 1, i, k, j)
            HanoiStack.push(HanoiRecord(testrec._numberDisks - 1, 
                                        testrec._sourcePole, 
                                        testrec._destinationPole, 
                                        testrec._sparePole));
        }
    }

    return 0;

}
