#include "answers.h"
#include "puzzles.h"
#include <stdio.h>

#define testAnswers 1
#define testNum 5

int and_test(){
  int passed = 1;
  if (testAnswers){
    passed &= and_ans(1,1);
    passed &= !and_ans(1,0);
    passed &= !and_ans(0,1);
    passed &= !and_ans(0,0);
  }
  else{
    passed &= and_puzzle(1,1);
    passed &= and_puzzle(1,0);
    passed &= and_puzzle(0,1);
    passed &= and_puzzle(0,0);
  }
  printf("%s\t\t%d\n", __func__, passed);
  return passed;
}

int bang_test(){
  int passed = 1;
  if (testAnswers){
    passed &= bang_ans(0);
    passed &= !bang_ans(1);
    
    passed &= !bang_ans(2);
    passed &= !bang_ans(-1);
  }
  else {  
    passed &= bang_puzzle(0);
    passed &= !bang_puzzle(1);
    passed &= !bang_puzzle(2);
    passed &= !bang_puzzle(-1);
  }
  printf("%s\t\t%d\n", __func__, passed);
  return passed;
}

int xor_test(){
  int passed = 1;
  if (testAnswers){
    passed &= !xor_ans(1,1);
    passed &= xor_ans(1,0);
    passed &= xor_ans(0,1);
    passed &= !xor_ans(0,0);
  }
  else{
    passed &= !xor_puzzle(1,1);
    passed &= xor_puzzle(1,0);
    passed &= xor_puzzle(0,1);
    passed &= !xor_puzzle(0,0);
  }
  printf("%s\t\t%d\n", __func__, passed);
  return passed;
}

int implication_test(){
  int passed = 1;
  if (testAnswers){
    passed &= implication_ans(1,1);
    passed &= !implication_ans(1,0);
    passed &= implication_ans(0,1);
    passed &= implication_ans(0,0);
  }
  else{ 
    passed &= implication_puzzle(1,1);
    passed &= !implication_puzzle(1,0);
    passed &= implication_puzzle(0,1);
    passed &= implication_puzzle(0,0);
  }
  
  printf("%s\t%d\n", __func__, passed);
  return passed;
}

int iff_test(){
  int passed = 1;
  if (testAnswers){
    passed &= iff_ans(1,1);
    passed &= !iff_ans(1,0);
    passed &= !iff_ans(0,1);
    passed &= iff_ans(0,0);
  }
  else{ 
    passed &= iff_puzzle(1,1);
    passed &= !iff_puzzle(1,0);
    passed &= !iff_puzzle(0,1);
    passed &= iff_puzzle(0,0);
  }
  printf("%s\t\t%d\n", __func__, passed);
  return passed;
}

typedef int (*f)();

int main(){
  f func[] = {&and_test, &bang_test, &xor_test, &implication_test, &iff_test};

  int tests_passed = 0;
  int tests_total = 0;
  
  printf("Function\t\tScore\n----------------------------------\n");
  for (int curr_test = 0; curr_test < testNum; curr_test++){
    tests_passed += func[curr_test]();
    tests_total += 1;
  }
  printf("----------------------------------\n");
  printf("Final score: %.0f%%\n", ((double)tests_passed/tests_total)*100);
}
