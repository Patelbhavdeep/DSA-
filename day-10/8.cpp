#include <stdio.h>

int main() {
    int raw, col ;


    for(raw = 5; raw >= 1; raw--)
     {
       
        for(col = 1; col <= raw; col++) {
            printf("%d ", col);
        }
         
        for (int space  = raw; space <= 4 ; space++)
        {
            printf("    ");
        }
        
        for(col = raw; col >= 1; col--) {
            printf("%d ", col);
        }
        printf("\n");
        
    }
     for(raw = 1; raw <= 5; raw++)
     {
       
        for(col = 1; col <= raw; col++) {
            printf("%d ", col);
        }
         
        for (int space  = raw; space <= 4 ; space++)
        {
            printf("    ");
        }
        
        for(col = raw; col >= 1; col--) {
            printf("%d ", col);
        }
        printf("\n");
        
    }

}