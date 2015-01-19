#include <string>
using std::string;

string repeatToLength ( unsigned len, string s ) {
  string r, si = s;
  for ( unsigned q = len / s.size(); q > 0; q >>= 1 ) {
    if ( q & 1 ) r += si;
    si +=  si;
  }
  r += s.substr ( 0, len - r.size() );
  return r;
}
  
