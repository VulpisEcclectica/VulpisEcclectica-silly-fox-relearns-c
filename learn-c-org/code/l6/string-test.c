# include <stdio.h>
# include <string.h>

int main(void) {
  /* 
   note that the length of the dest string is the length of the two combined
   (+ 1 for the null terminator). If we were to instead make it the length of 
   characters in "Hello " + 1 it would return a memory error.
  */

  char dest[12] = "Hello ";
  char src[6] = "World";

  strncat(dest, src, 7); // length of dest + 1
  printf("%s\n", dest);
}
