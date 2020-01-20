#include <stdio.h>

// Problem - wyszukiwanie skojarzenia pełnego w grafie.
// Ogólnie algorytm Edmondsa.
// Można też zastosować algorytm max. przepływu Edmondsa-Karpa np.

int main(int argc, char **argv) {
    printf("Hello, Dear User!\n");

    if (argc == 1){
        printf("Missing argument.");
        return 1;
    }

    printf("Pierwszy argument: %s", argv[1]);
    return 0;
}
