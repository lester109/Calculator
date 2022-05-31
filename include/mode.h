// Setting pragma once.
#pragma once

// including C header files.
#include <stdio.h>
#include <string.h>

// including local header files.
#include "operational.h"
#include "conversion.h"
#include "help.h"


// constant array of verified mode strings.
const char all_modes[][15] = {"help", "operational", "conversion", "exit"};



int in_modes(char *mode)
{
    for (int i=0; i<4; i++)
        {
            if (!strcmp(mode, all_modes[i]))
            {
                return 1;
            }
            else
            {
                continue;
            }
        }

    return 0;
}

void eval_mode(int mode)
{
    switch (mode)
        {
            case 0:
                helps_();
                break;
            case 1:
                operational(); break;
            case 2:
                conversion(); break;
        }
}

int get_mode(char *mode)
{
    for (int i=0; i < 4; i++)
        {
            if (!strcmp(mode, all_modes[i])){return i;}
        }
    return 6;
}
