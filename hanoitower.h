#include<iostream>
#include<cassert>
using namespace std;

struct HanoiRecord {
    int _numberDisks;
    int _sourcePole, _sparePole, _destinationPole;
    HanoiRecord() {_sourcePole = _sparePole = _destinationPole = 0;
    _numberDisks = 0;
    }

HanoiRecord(int numberDisks, int sourcePole, int sparePole,
    int destinationPole) {
    _numberDisks = numberDisks;
    _sourcePole = sourcePole;
    _sparePole = sparePole;
    _destinationPole = destinationPole;
    }
};

class stack {
    private:
    struct HanoiRecordLink {
    HanoiRecord value;
    HanoiRecordLink * next;
    };
    HanoiRecordLink * _top;
    public:
    stack() { /* missing code */ }
    void push( HanoiRecord );
    HanoiRecord pop();
    HanoiRecord top() {

        /* missing code */
    }

bool is_empty() { /* missing code */ 
        }
};