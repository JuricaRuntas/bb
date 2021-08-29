// Generating Candidate Busy Beaver Machines (Or How to Build the Zany Zoo) - https://arxiv.org/abs/1610.03184

/* *** DEFINITIONS ***

TRANSITION FORM - (State, Input, Output, Direction, NewState)

if NewState == z (halting state) then it is a 'halting transition' otherwise it is a 'standard transition'

We say a Turing machine M is
 - K-HALTING if there are k transitions of the form (_,_,_,_,z) in M.
 
 - EXHAUSTIVE if transition function is a total function which means that it produces output for each state and symbol combination
   - DELTA(q, y) = <q', y', D>

 - MAXIMISING if for every tuple of the form (_,_,O,_,z) in M, O != 0
 - MINIMISING if for every tuple of the form (_,_,O,_,z) in M, O = 1
 - i.e the halting transition, can be guaranteed (not) to reduce the number of non-blank symbols on the tape

- WHEN SEARCHING FOR BB MACHINES, IT SEEMS NATURAL TO FOCUS ON MACHINES WHICH ARE 1-halting, exhaustive AND maximising

- Why 1-halting? - As there is only one input on which the machine is evaluated (the blank input),
  there is only ever one halting transition that can be executed
- Why exhaustive? - For similar reasons, as non-exhaustive machines are potentially wasteful
- Why maximising - trivial

- It should be noted that we have a rather unusual property for Turing machines, which is that we are only interested in
  their execution on the blank input - we can make some significant reductions on the machines that need to be considered

*/

#define N 2 // states
#define M 4 // symbols

#define HALT_STATE 'z'
#define START_STATE 'a'
#define BLANK_SYMBOL 0

int main(int argc, char *argv[]){
  return 0;
}
