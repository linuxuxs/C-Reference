#include <stdio.h>
#include "functions.h"

int main(void){
    printf("\x1b[2J");
   
    while(1){
    
        memset(zBuffer, 0, screen_width * screen_height * 4);
        memset(buffer, bgASCIICode, screen_width * screen_height);

        for(float cubeX = -cubeWidth; cubeX < cubeWidth ; cubeX += incSpeed){
            for(float cubeY = -cubeWidth; cubeY < cubeWidth; cubeY += incSpeed){
               calculatePoint(cubeX, cubeY, -cubeWidth, '#'); 
               calculatePoint(cubeWidth,cubeY, cubeX, '&'); 
               calculatePoint(-cubeWidth, cubeY, -cubeX, '$'); 
               calculatePoint(-cubeX, cubeY, cubeWidth, '@'); 
               calculatePoint(cubeX, -cubeWidth, -cubeY, '!'); 
               calculatePoint(cubeX, cubeWidth, cubeY, '*');
            }
        }
        printf("\x1b[H");
        for(int i = 0; i < screen_width * screen_height; i++){
            if (i % screen_width == 0)  putchar('\n');
            char curr = buffer[i];
            if(curr == '#')
                printf("\x1b[1;30m%c\x1b[0m", curr);
            else if(curr == '$')
                printf("\x1b[1;35m%c\x1b[0m", curr);
            else if(curr == '&')
                printf("\x1b[1;30m%c\x1b[0m", curr);  
            else if (curr == '@')
                printf("\x1b[1;36m%c\x1b[0m", curr);
            else if (curr == '!')
                printf("\x1b[1;32m%c\x1b[0m", curr);
            else if( curr == '*')
                printf("\x1b[1;34m%c\x1b[0m", curr);
            else
                putchar(curr);
        }

        A += 0.05;
        B += 0.05;
        C += 0.01;
        usleep(8000 * 2);
    }


   return 0; 
}



