#include "answers.h"
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

int and_ans(int p, int q){
  return ~(~p | ~q); 
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

int bang_ans(int p){
  return ((p >> 31) | ((~p + 1) >> 31)) + 1;
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

int xor_ans(int p, int q){
  return (p | q) & ~(p & q);

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
int implication_ans(int p, int q){
  return (~p & 1) | q;
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
int iff_ans(int p, int q){
  return (p & q) | !(p | q);  
}

/*
 * All puzzles after this will begin with citations from where puzzle was found
 * Until next citation, all puzzles came from there
 */
