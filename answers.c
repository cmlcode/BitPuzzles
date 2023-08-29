#include "answers.h"

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
  return (p || q) & !(p && q);
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
int implication_ans(int p, int q){
  return !p || q;
}

/*
 * if and only if (<->)
 * For any 2 propositions p and q, the statement "p iff q" is <->
 *  -----------------
 * | p | q | p <-> q |
 *  -----------------
 * | 1 | 1 |    1    |
 * | 1 | 0 |    0 
 * |
 * | 0 | 1 |    0    |
 * | 0 | 0 |    1    |
 *  -----------------
 */
int iff_ans(int p, int q){
  return 0;
}

/*
 * All puzzles after this will begin with citations from where puzzle was found
 * Until next citation, all puzzles came from there
 */
