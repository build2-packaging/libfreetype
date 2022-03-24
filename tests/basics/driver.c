#include <ft2build.h>
#include <freetype/freetype.h>

int
main ()
{
  FT_Library l;
  return FT_Init_FreeType (&l) == FT_Err_Ok ? 0 : 1;
}
