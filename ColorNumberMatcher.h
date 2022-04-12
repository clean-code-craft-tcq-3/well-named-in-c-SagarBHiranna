#ifndef COLORNUMBERMATCHER_H
#define COLORNUMBERMATCHER_H

const int MAX_COLORPAIR_NAME_CHARS = 16;

typedef enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET} Major_Colour;
typedef enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE} Minor_Colour;



const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};
int numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

int numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

typedef struct {
    Major_Colour majorColor;
    Minor_Colour minorColor;
} ColorPair;

void ColorPairToString(const ColorPair* colorPair, char* buffer) ;
ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);

#endif
