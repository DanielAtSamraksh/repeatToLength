#include <string>
using std::string;

string repeatToLength ( unsigned len, string s ) {
  string r, si = s;
  // add all the whole multiples of s.
  for ( unsigned q = len / s.size(); q > 0; q >>= 1 ) {
    if ( q & 1 ) r += si; // add si to r if the low bit of q is 1
    si +=  si; // double si
  }
  r += s.substr ( 0, len - r.size() ); // add any remainder
  return r;
}
  
