
#include "extname.h"
#include <string.h>

const char *extname(const char *filename)
{
  const char *c = filename;

  // skip leading ./ if it exists
  if (*c != '\0')
  if (*c++ == '.')
  if (*c != '\0')
  if (*c++ == '/')
    filename = c;

  char *loc = strrchr(filename, '.');
  return loc? loc : "";
}
