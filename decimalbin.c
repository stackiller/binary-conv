#include <stdio.h> // standard
#include <stdlib.h> // for atoi();

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
  fprintf(stdout, "binary-> ");
  // convert each decimal
  for(int i=1; i < argc; i++) {
    bin(atoi(argv[i]));
    putchar(32);
  } putchar(10);
  return 0;
}