

#include "repeatToLength.h"
#include <cstdio> // printf
#include <cstdlib> // atoi

int main ( int argc, char *argv[] ) {
  unsigned len = atoi(argv[1]);
  char* s = argv[2];
  string r = repeatToLength ( len, s );
  printf ( "repeatToLength ( %u, %s ) = %s (length %lu)\n",
	   len, s, r.c_str(), r.size() );
}
