#ifndef STRINGUTIL_H_
#define STRINGUTIL_H_

#include <vector>
#include "Utility/String.h"

// Splits at all instances of split_char.
void Split(ConstStringRef str, char split_char, std::vector<ConstStringRef> * pieces);

// Splits at the first instance of split_char.
void SplitAt(ConstStringRef str, char split_char, ConstStringRef * left, ConstStringRef * right);

char * Tidy(char * s);

#endif // STRINGUTIL_H_