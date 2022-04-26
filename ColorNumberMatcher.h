#ifndef COLORNUMBERMATCHER_H
#define COLORNUMBERMATCHER_H

#include <stdio.h>
#include <assert.h>

const int MAX_COLORPAIR_NAME_CHARS ;

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

int numberOfMajorColors;
int numberOfMinorColors;


typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

ColorPair GetColorFromPairNumber(int pairNumber);
void ColorPairToString(const ColorPair* colorPair, char* buffer);
int GetPairNumberFromColor(const ColorPair* colorPair);

extern const char* majorColorNames[];
extern const char* minorColorNames[];

#endif