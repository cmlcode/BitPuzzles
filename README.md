# BitManipulationPuzzles

## File Makeup
answers.* = possible answers to the puzzles  
puzzles.* = user's answers to the puzzles  
tests.c = Grades the solutions, more info in next section  
Makefile = Make the project, use make clean to clean all created files  
README.md = what you're reading now.  

## Grader (test.c)
Grades solutions  
If testAnswers is defined as 1, tests solutions in answers.c  
If testAnswers is defined as 0, tests solutions in puzzles.c  
  
To add more tests:  
1) Write new function to test all test cases.  
    The function should return 1 if passes everything, 0 otherwise.  
    Print the outcome of the new test in the test function in order to see results.  
2) Add the functions name to the func array in main().  
3) Update the testNum definition with the new number of tests.
  
## Puzzles
* bitAnd (&)
* bang (!)
* xor (^)
* implication (->)
* if and only if (<->)