#include "answers.h"
#include "puzzles.h"
#include <stdio.h>

#define testAnswers 0
#define testNum 1

int test_xor(){
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
  printf("%s\t%d\n",__func__, passed);
  return passed;
}

typedef int (*f)();

int main(){
  f func[] = {&test_xor};

  int tests_passed = 0;
  int tests_total = 0;
  
  printf("Function\tScore\n");
  for (int curr_test = 0; curr_test < testNum; curr_test++){
    tests_passed += func[curr_test]();
    tests_total += 1;
  }
  printf("Final score: %d%\n", (tests_passed/tests_total*100));
}
