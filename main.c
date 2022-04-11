#include <stdio.h>
int main(){
    //Tabuada 0 ao 10
    int i;
    int j;
    int mult;
    for (i = 0; i<=10; i++){
        printf("Tabuada do %i \n",i);
        for(j = 0; j<=10; j++){
            mult = i * j;
            printf("%i x %i = %i \n", i, j, mult);
        }
    }
    return 0;
}
