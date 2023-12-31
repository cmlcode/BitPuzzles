#include "puzzles.h"
#include <stdio.h>

//Bit Operations

/*
 * Bit And (&)
 * Only use these operations: ~ |
 *  -------------
 * | p | q | p&q |
 *  -------------
 * | 1 | 1 |  1  |
 * | 1 | 0 |  0  |
 * | 0 | 1 |  0  |
 * | 0 | 0 |  0  |
 *  -------------
 */

int and_puzzle(int p, int q){
  return 0;
}

//Logical Operators

/*
 * Bang (!)
 *  ---------
 * | p | !p |
 *  --------
 * | 0 |  1 |
 * | 1 |  0 |
 *  --------
 */

int bang_puzzle(int p){
  return 0;
}

// Logic Gates

/*
 * XOR (^)
 *  -------------
 * | p | q | p^q |
 *  -------------
 * | 1 | 1 |  0  |
 * | 1 | 0 |  1  |
 * | 0 | 1 |  1  |
 * | 0 | 0 |  0  |
 *  -------------
 */

int xor_puzzle(int p, int q){
  return 0;
}
//Discrete Math Problems

/*
 * Implication (->)
 * For any 2 propositions p and q, the statement "if p then q" is p->q
 * -----------------
 * | p | q | p -> q|
 * -----------------
 * | 1 | 1 |   1   |
 * | 1 | 0 |   0   |
 * | 0 | 1 |   1   |
 * | 0 | 0 |   1   |
 * -----------------
 */
int implication_puzzle(int p, int q){
  return 0;
}

/*
 * if and only if (<->)
 * For any 2 propositions p and q, the statement "p iff q" is <->
 *  -----------------
 * | p | q | p <-> q |
 *  -----------------
 * | 1 | 1 |    1    |
 * | 1 | 0 |    0 
 * | 0 | 1 |    0    |
 * | 0 | 0 |    1    |
 *  -----------------
 */
int iff_puzzle(int p, int q){
  return 0;
}

/*
 * All puzzles after this will begin with citations from where puzzle was found
 * Until next citation, all puzzles came from there
 */
