#include "functions.h"

int screen_width = 160;
int screen_height = 44;
int bgASCIICode = ' ';
int camDist = 100;
float cubeWidth = 20;
float zBuffer[160 * 44];
char buffer[160 * 44];
float zPrime = 40;
float incSpeed = 0.6;
float A, B, C;
float x, y, z;
float ooz;
int xp, yp;
int inx;


float calculateX(int i, int j, int k){
    
    return j * sin(A) * sin(B) * cos(C) - k * cos(A) * sin(B) * cos(C) +
           j * cos(A) * sin(C) + k * sin(A) * sin(C) + i * cos(B) * cos(C);

}

float calculateY(int i, int j, int k){

   return j * cos(A) * cos(C) + k * sin(A) * cos(C) -
          j * sin(A) * sin(B) * sin(C) + k * cos(A) * sin(B) * sin(C) -
          i * cos(B) * sin(C);

}

float calculateZ(int i, int j, int k){
    
    return k * cos(A) * cos(B) - j * sin(A) * cos(B) + i * sin(B);

}

void calculatePoint(float i, float j, float k, char ch){
    
    x = calculateX(i, j, k);
    y = calculateY(i, j, k);
    z = calculateZ(i, j, k) + camDist;
    
    ooz = 1 / z;

    xp = (int)(screen_width / 2 + zPrime * ooz * x * 2);
    yp = (int)(screen_height / 2 + zPrime * ooz * y);
    
    inx = xp + yp * screen_width;
    if(inx >= 0 && inx < screen_width * screen_height){
    
        if(ooz > zBuffer[inx]){
            zBuffer[inx] = ooz;
            buffer[inx] = ch;
        }       
    }
}

