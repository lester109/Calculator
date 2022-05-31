#pragma once

#include <stdio.h>
#include <string.h>

#define OPT_RUNNING 1

void operational()
{
    char stat;
    int argc;
    char operator_;
    double result, first_num, second_num;

    printf("\n[MODE]: Operational Mode On\n\n");
    
    while (OPT_RUNNING)
        {
            printf(">> ");
            argc = scanf(" %lf %c %lf", &first_num, &operator_, &second_num);
            if (argc <= 0)
            {
                scanf(" %c", &stat);
                if (stat == 'e'){puts("\nExiting...\n");break;};
            };

            switch (operator_)
                {
                    case '*':
                        result = first_num * second_num;
                        printf("%.3lf %c %.3lf = %.3lf\n", first_num, operator_, second_num, result);
                        break;
                    case '/':
                        result = first_num / second_num;
                        printf("%.3lf %c %.3lf = %.3lf\n", first_num, operator_, second_num, result);
                        break;
                    case '+':
                        result = first_num + second_num;
                        printf("%.3lf %c %.3lf = %.3lf\n", first_num, operator_, second_num, result);
                        break;
                    case '-':
                        result = first_num - second_num;
                        printf("%.3lf %c %.3lf = %.3lf\n", first_num, operator_, second_num, result);
                        break;
                    default:
                        printf("Invalid operator (%c).\n", operator_);
                        break;
                }; 
        }
}
