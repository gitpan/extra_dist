#include "EXTERN.h"
#define PERL_HASH_INTERNAL_ACCESS
#define PERL_CORE
#include "perl.h"

/* Bug in .def: Perl_share_hek() not exported */

#if 0
char*
Perl__sharepvn(const char* sv, I32 len, U32 hash)
{
  return(Perl_sharepvn(sv, len, hash));
}

#else

char*
Perl__sharepvn(const char* sv, I32 len, U32 hash)
{
  char *s;

  New(1026, s, len, char);
  Copy(sv, s, len, char);
  return s;
}
#endif
