#ifndef FUNCS
#define FUNCS
#include <string.h>
#include <math.h>
#include <unistd.h>

extern int screen_width;
extern int screen_height;
extern int bgASCIICode;
extern int camDist;
extern float cubeWidth;
extern float zBuffer[160 * 44];
extern char buffer[160 * 44];
extern float zPrime;
extern float incSpeed;
extern float A, B, C;
extern float x, y, z;
extern float ooz;
extern int xp, yp;
extern int inx;

float calculateX(int i, int j, int k);
float calculateY(int i, int j, int k);
float calculateZ(int i, int j, int k);
void calculatePoint(float i, float j, float k, char ch);

#endif //FUNCS
