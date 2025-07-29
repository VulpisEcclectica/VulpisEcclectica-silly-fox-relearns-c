# Variables & Data types
## Data Types
Reviews Several basic data types this is a good thing to write down to reference:
- integers (As with mathemaical definitions this refers to a positive or negative whole number)
    - char
    - int
    - short
    - long
    - long long
For each integer type there is an unsigned version; that is a version which can only be whole, analagous perhaps to the natural numbers.
There are also floating point (analagous to R, as can contain irrational)
- Floats
- Doubles
> noting that C does not have an inbuilt bool type
## Defining Variables
we can define variables both as un-initialised 
```
int x;
```
or initialised to a value such as:
```
int x = 42;
```
Though it is generally considered bad practice to leave a value uninitialised as it may cause security issues or crashes, if no value is needed right away one can always initialise to 0 as below
```
int x = 0;
float y = 0.0;
```
## Learning task

in the acompanying [lesson](../code/l2) do some basic arithmatic with variables!
