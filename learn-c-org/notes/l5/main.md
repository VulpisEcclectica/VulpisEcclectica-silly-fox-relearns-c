# Conditionals Review

Conditional statements in C are available in two main forms:
 - if/else if statements
 - switch/case statements

## If/else if statements
These allow for basic descision making functionality, more verbose and higher time-complexity when translated by the compiler but as a consequence of switch/case's simplicity else if statements support a higher number of posibilities (see switch/case [section](#switch/case-statements) for more).
for example the program below would exit with the error code 1:
```
# include <stdio.h>

int main(void) {
    int x = 1;
    int y = 2;
    
    if (x == y) {
        return 0;
    }
    return 1;
}
```
This can be extended with the else-if statement as below:
```
# include <stdio.h>

int main(void) {
    int x = 1;
    int y = 2;
    
    if (x == y) {
        return 0;
    } else if (x > y) {
        return 1;
    }
    return 2;
}
```
which returns sucess (0) if x and y are equal, 1 if x is grater and 2 if x is less. When the 'else all'type functionality is actually required and something resembling the above is unfeasable this can be achived with with the else statement in a similar way.
All support many logical expressions as below[^1]
 
 - A == B => A is equal to B
 - A != B => A does not equal B
 - A > B => A greater than B and A >= B => A greater than or equal to B
 - A < B => A less than and A <= B => A less than or wqual to B
 - A || B => satement A is true or statement B is true
 - A && B => statement A and B are both true

if the provided logical expression is true then the code contained in the statement will run for example:
```
#include <stdio.h>

int main(void) {
    int A[2] = {0, 1};
    int B[2] = {0, 1};

    if (A[0] == B[0] && A[1] == B[1]) {
        return 0;
    }
    return 1;
}
```
would return a success. Note these can also be chained together such that:
 - (A && B) || (C && D) => either A and B are true or C and D are true
 - (A || B) && (C || D) => any combination of set 1 and set 2 are true[^2]
And so forth.

#Switch/Case statement

Switch/Case statement notes can be found [here](./supplimentary1.md)
[^1]: to elaborate, all these logical expressions form statements which can be true or false, so for example when I say A == B => A is equal to B, this means that when the statement A == B is inserted into an if statement and A really is equal to B then it returns true and the code is run, otherwise the code is skipped.
[^2]: that is A and C are true or A and D are true or B and C are true or B and D are true, this may not seem like much but imagine how many combinations there woule be in the statement (A || B || C) && (D || E || F). 
The answer is 49 !! (! is not a factorial here btw just surprise)
