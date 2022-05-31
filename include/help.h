#pragma once
#include <stdio.h>
#include <string.h>

#define MAX 18
#define RUNNING 1

const char helps [][MAX] = {"operational", "conversion"};

char operational_[] = "\nOperational\n\t- operational calculator with four normal operators and a single operation.\n\t  (+ for addition, - for subtraction, * for multiplication and / for division)\n\n\t- Syntax: first_number operator second_number\n\n\t  Example:\n\t\t    69 + 420\n\t\t    ^  ^   ^\n(first_number operator second_number)\n\n\t  Output:\n\t\t    69.000 + 420.000 = 489.000";

char conversion_[] = "\nConversion\n\t- conversion calculator with specified measuring type and units.\n\n\t  All Measuring Types and Units:\n\t\t- Length:\n\t\t\t> mm - Millimeter\n\t\t\t> cm - Centimeter\n\t\t\t> m - Meter\n\t\t\t> km - Kilometer\n\t\t\t> in - Inches\n\t\t\t> ft - Foot\n\t\t\t> yd - Yard\n\t\t\t> mi - Mile\n\t\t- Time:\n\t\t\t> ms - Millisecond\n\t\t\t> s - Second\n\t\t\t> min - Minute\n\t\t\t> hr - Hour\n\t\t\t> day - Day\n\t\t\t> wk - Week\n\t\t\t> mon - Month\n\t\t\t> yr - Year\n\t\t- Temperature:\n\t\t\t> K - Kelvin\n\t\t\t> F - Fahrenheit\n\t\t\t> C - Celcius\n\t\t- Mass/Weight:\n\t\t\t> mg - Milligram\n\t\t\t> g - Gram\n\t\t\t> kg - Kilogram\n\t\t\t> oz - Ounce\n\t\t\t> lb - Pound\n\t\t\t> lt - Ton\n\n\t  Syntax: value unit\n\n\t  Example:\n\t\t  14 m\n\t\t   ^ ^\n\t   value unit\n\n\t";


void helps_ ()
{
    char h_[MAX];
    int argc;

    printf("\n[MODE]: Help Mode On\n\n");
    
    while (RUNNING)    
    {
        printf(">> ");
        argc = scanf(" %s", h_);
        
        if (!strcmp(h_, helps[0]))
        {
            puts(operational_);
        }
        else if (!strcmp(h_, helps[1]))
        {
            puts(conversion_);
        }
        else if (!strcmp(h_, "e") || !strcmp(h_, "exit"))
        {
            break;
        }
        else
        {
          printf("Invalid help command (%s)\n", h_);
        };
    }
}
