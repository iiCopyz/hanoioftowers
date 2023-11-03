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
        stack() { 
            //instalizes the stack as null
            _top = nullptr;
        }
        void push( HanoiRecord );
        HanoiRecord pop();
        HanoiRecord top() {
            //checking to make sure the stack isn't empty
            assert((!is_empty() && "Stack is empty!"));
            return _top -> value;
        }
        bool is_empty() { 
            //returns true if top is null
            return _top == nullptr;
        }
};
