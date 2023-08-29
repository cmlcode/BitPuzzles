#include "answers.h"
#include <stdio.h>

int test_xor(){
  int passed = 1;
  passed &= !xor(1,1);
  passed &= xor(1,0);
  passed &= xor(0,1);
  passed &= !xor(0,0);
  printf("%s\t%d\n",__func__, passed);
  return passed;
}

typedef int (*f)();

int main(){
  f func[] = {&test_xor};

  int tests_num = 1;
  int tests_passed = 0;
  int tests_total = 0;
  
  printf("Function\tScore\n");
  for (int curr_test = 0; curr_test < tests_num; curr_test++){
    tests_passed += func[curr_test]();
    tests_total += 1;
  }
  printf("Final score: %d%\n", (tests_passed/tests_total*100));
}
