# Strings !
To define a string with only read permissions we can use:
```
char * name = "Xenia";
```
Say we wished to manipulate this though, we would use:
```
char name[36] = "You already used this feild";
```
Note here the length was declared to an arbitrary maximum value, it is best practice to declare char array (i.e. string) maximum length[^1]
# Comparison
Note that strings cannot be compared in the way scalars (0 order tensors) can. We must use functions such as `strncmp()`, which returns 0 if they are equal and a non-0 integer if not. A usage example is as below:
```
char * name = "Xenia";

if (strncmp(name, "Xenia", 5) == 0) {
  printf("Hello kit, your rather odd");
} else {
  printf("hey... idk anyone named %s, Xen might if you can find her!", name);
}
```
Would print the first message ("Hello kit, your rather odd"). The values passed to the `strncmp()` function as can be seen above are `string1`, `string2` and `maxCompLen`, the first two are rather self explanatory while `maxCompLen` refers to the number of characters to be compared this can be illustrated with the example below which has the same effect as that above.
```
char * name = "Xen";

if (strncmp(name, "Xenia", 3) == 0) {
  printf("Hello kit, your rather odd");
} else {
  printf("hey... idk anyone named %s, Xen might if you can find her!", name);
}
```
# Concatenation
The `strncat()` function is also of note as it is rather useful when you need to join two strings and functions as follows;
```
const int x = 5;
char dest[x] = "Hello";
char src[x] = "World";
char res[2x] = strncat(dest, src, x);
printf("%s\n", res);
```
Which 
[^1]: 36 was used from general practice for databases + 1 for null terminator
