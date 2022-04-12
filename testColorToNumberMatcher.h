#ifndef TESTCOLORPAIR_H
#define TESTCOLORPAIR_H

#include "ColorNumberMatcher.h"


void testNumberToPair(int pairNumber,
    Major_Colour expectedMajor,
    Minor_Colour expectedMinor);
    
void testPairToNumber(
    Major_Colour major,
    Minor_Colour minor,
    int expectedPairNumber);

#endif
