#include <stdio.h>
#include <assert.h>
#include "ReferenceManual.h"
#include "ColorNumberMatcher.h"

void DisplayColorCoding()
{
    int PairNumber = 0;
  
    printf(" MAJOR_COLOUR \t MINOR_COLOUR \t  PAIR_NUMBER \t\t COLOUR_PAIR_NAME \n");
    printf("\n*********************************************************************\n");
    for (int MajorColorIterator = 0 ; MajorColorIterator< numberOfMajorColors; MajorColorIterator++)
    {
	for (int MinorColorIterator = 0 ; MinorColorIterator< numberOfMinorColors; MinorColorIterator++)
        {	
            ++PairNumber;
 		    ColorPair colorPair = GetColorFromPairNumber(PairNumber);
    		char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    		ColorPairToString(&colorPair, colorPairNames);
	    	printf("\t %d\t\t  %d\t\t %d\t\t %s\t\n", MajorColorIterator , MinorColorIterator ,PairNumber, colorPairNames);
	}

    }

}
