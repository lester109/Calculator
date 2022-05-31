// Setting pragma and including C header files.
#pragma once
#include <stdio.h>


// constant title string.
const char TITLE[] = "   _____      _            _       _             \n  / ____|    | |          | |     | |            \n | |     __ _| | ___ _   _| | __ _| |_ ___  _ __ \n | |    / _` | |/ __| | | | |/ _` | __/ _ \\| '__|\n | |___| (_| | | (__| |_| | | (_| | || (_) | |   \n  \\_____\\__,_|_|\\___|\\__,_|_|\\__,_|\\__\\___/|_|";

// constant credits string.
const char CREDITS[] = "\n\t\t\t   Made By: Group 7";

// all modes string.
char HMODES[] = "Available Modes:\n\tHelp - type 'help' to run help command.\n\tOperational - type 'operational' for single operation calculations.\n\tConversion - type 'conversion' for other conversion calculations.\n\tExit - type 'exit' to exit the terminal/console.\n";

// Printing the "heads" header file variables.
void start_head()
{
    /*
    Printing the title, credits, and modes string.
    */
    printf("%s\n\n", TITLE);
    printf("%s\n\n\n", CREDITS);
    printf("%s\n\n\n", HMODES);
}
                     