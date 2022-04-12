#ifndef TESTCOLORPAIR_H
#define TESTCOLORPAIR_H

#include <ColorNumberMatcher.h>

void testNumberToPair(int pairNumber,
    enum MajorColor expectedMajor,
    enum MinorColor expectedMinor);
    
void testPairToNumber(
    enum MajorColor major,
    enum MinorColor minor,
    int expectedPairNumber);

#endif