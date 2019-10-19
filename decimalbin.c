#include <stdio.h> // standard
#include <stdlib.h> // for atoi
#include <string.h> // for strcmp

// binary prototype
int bin(int b);

// convert decimal to bin
int
bin(int b) {
  if(b == 1) {
    fprintf(stdout, "%i", b);
    return 1;
  } else if((b % 2) <= 1 ) bin((b/2));
  printf("%i", (b % 2));
  return 0;
}

int
main(int argc, char **argv) {
  if(argv[1] == NULL)
    return 1;
 
  // if input is text
  if((strcmp(argv[1], "--text") == 0)) {
    for(int i=2; i < argc; i++) {
      for(int j=0; j < strlen(argv[i]); j++) {
        putchar(argv[i][j]);
      } putchar(32);
    } putchar(10);
    return 0;
  }

  // convert each decimal
  if((strcmp(argv[1], "--number") == 0)) {
    for(int i=2; i < argc; i++) {
      bin(atoi(argv[i]));
      putchar(32);
    } putchar(10);
  } else { return 1; }
  return 0;
}
