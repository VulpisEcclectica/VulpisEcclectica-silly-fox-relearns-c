# Multidimensional arrays:
It appears from the way they are explained here – as well as what I have seen in the past – that arrays of any dimension essentially function as tensors of that order[^1].

To elaborate consider a single integer or char, in other words a 0 dimensional array
```
int x = 97;
char y = 'a'; 
// give what we know about chars the statement x == y is true

```
Here both (when considering 'a''s ascii value of 97) funtion as a single real number, therefore refered to as a scalar or a 0 order tensor.
Furthermore consider the single dimensional array below;
```
int a[3] = {3, 4, 7};

```
This behaves functionally like a 3d vector (movement in x direction = 3, y = 4, z = 7) i.e. 1st order tensor. 
Then for:

```
int b[3][3] = {
    {1, 2, 3}, 
    {4, 5, 6},
    {7, 8, 9}
};

```
Is very similar to a matrix (2nd order tensor);
```
int w[2][2][2] = {
    {
        {1, 2},
        {3, 4}
    },
    {
        {5, 6},
        {7, 8}
    }
};
Here w is analagous to a tensor of 3rd order (where they typically begin being called _tensors_) and so on, this is mathematically useful.

