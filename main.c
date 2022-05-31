// Including C header files.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Including local header files.
#include "include/help.h"
#include "include/mode.h"
#include "include/heads.h"
#include "include/conversion.h"
#include "include/operational.h"

// Defining macros.
#define MAX 18
#define RUNNING 1


// Main function
int main(int argc, char **argv){
    /*
    Main function for our calculator.
    
    From the "mode" and "heads" header file, this function
    prints the title and the credits, then scanning
    the user input as mode then running the verified
    and matched mode function.
    */
      char mode[MAX];  // Mode string variable.

      start_head();  // Printing the title and credits.

    // Main event loop
      while (RUNNING) {
        printf("Mode: ");
        scanf("%s", mode);

        // verifying the user's mode using the
        // in_modes function from the "mode" header file.
        if (!in_modes(mode)) {
          printf("Invalid Mode (%s).\n", mode);
        };
        if (!strcmp(mode, "exit")) {
          break;
        };

        // Matching the user's mode to the evaluated
        // mode and running it using the eval_mode and
        // get_mode functions from "modes" header file.
        eval_mode(get_mode(mode));
      }
    
  return 0;  //  Return a success code.
}