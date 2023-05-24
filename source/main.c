#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <switch.h> 

void clear() {
    printf("Factorial NX [1.0.0] [2023]\nHomebrew by Zamacian\nThis work is freely distributable under public domain.\n\n");
    printf("      <<   a to add 1  >>\n");
    printf("      <<   b to sub 1  >>\n");
    printf("      <<   y to set 0  >>\n");
    printf("      <<   x to set 0  >>\n");
    printf("      <<   l to clear  >>\n");
    printf("      <<   r to clear  >>\n");
    printf("      <<  - to factor  >>\n");
    printf("      <<   + to exit   >>\n");
    printf("      << else for help >>\n\n");
}

void help() {
    printf("\n");
    printf("           a to add 1 \n");
    printf("           b to sub 1 \n");
    printf("           y to set 0 \n");
    printf("           x to set 0 \n");
    printf("           l to clear \n");
    printf("           r to clear \n");
    printf("           - to factor \n");
    printf("           + to exit \n");
    printf("           else for help \n\n");
}

long factorial(long f) {
    if(f == 0 || f == 1) {
        return 1;
    } else {
        return f * factorial(f-1);
    }
}

int main(int argc, char* argv[])
{
    consoleInit(NULL);

    // Configure our supported input layout: a single player with standard controller styles
    padConfigureInput(1, HidNpadStyleSet_NpadStandard);
    PadState pad;
    padInitializeDefault(&pad);

    printf("Factorial NX [1.0.0] [2023]\nHomebrew by Zamacian\nThis work is freely distributable under public domain.\n\n");
    printf("      <<   a to add 1  >>\n");
    printf("      <<   b to sub 1  >>\n");
    printf("      <<   y to set 0  >>\n");
    printf("      <<   x to set 0  >>\n");
    printf("      <<   l to clear  >>\n");
    printf("      <<   r to clear  >>\n");
    printf("      <<  - to factor  >>\n");
    printf("      <<   + to exit   >>\n");
    printf("      << else for help >>\n\n");
    printf("(S) Number : 0\n");

    int number = 0;

    // Main loop
    while (appletMainLoop())
    {
        // Scan the gamepad. This should be done once for each frame
        padUpdate(&pad);
        u64 kDown = padGetButtonsDown(&pad);

        // Faites défiler la console verticalement avec l'axe Y du joystick gauche

        if (kDown & HidNpadButton_Plus) {
            break; // break in order to return to hbmenu
        } else if (kDown & HidNpadButton_A) {
            number = number + 1;
            if (number > 25) {
                number = 25;
            } else {
                printf("(A) Number : %d\n", number);
            }
        } else if (kDown & HidNpadButton_B) {
            number = number - 1;
            if (number < 0) {
                number = 0;
            } else {
                printf("(B) Number : %d\n", number);
            }
        } else if (kDown & HidNpadButton_Minus) {
            printf("\n");
            printf("    >>  Factorial of %d is %ld\n", number, factorial(number));
            printf("\n");
            number = 0;
            printf("(S) Number : %d\n", number);
        } else if (kDown & HidNpadButton_X) {
            if (number != 0) {
                number = 0;
                printf("(X) Number : %d\n", number);
            }
        } else if (kDown & HidNpadButton_Y) {
            if (number != 0) {
                number = 0;
                printf("(Y) Number : %d\n", number);
            }
        } else if (kDown & HidNpadButton_R) {
            consoleClear();
            clear();
            printf("(S) Number : %d\n", number);
        } else if (kDown & HidNpadButton_L) {
            consoleClear();
            clear();
            printf("(S) Number : %d\n", number);
        } else if (kDown & HidNpadButton_ZR) {
            consoleClear();
            clear();
            printf("(S) Number : %d\n", number);
        } else if (kDown & HidNpadButton_ZL) {
            consoleClear();
            clear();
            printf("(S) Number : %d\n", number);
        } else if (kDown) {
            printf("\n");
            printf("    <<  Help  >>\n");
            help();
            printf("(S) Number : %d\n", number);
        }

        // Update the console, sending a new frame to the display
        consoleUpdate(NULL);
    }

    // Deinitialize and clean up resources used by the console (important!)
    consoleExit(NULL);
    return 0;
}