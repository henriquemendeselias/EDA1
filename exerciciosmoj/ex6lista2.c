#include <stdio.h>

int pa_recursiva(int *v, int primeiro, int ultimo){
    if (primeiro + 1 >= ultimo -1){
        return 1;
    }
    
    int externo = v[primeiro] + v[ultimo];
    int interno = v[primeiro + 1] + v[ultimo-1];

    if (externo != interno){
        return 0;
    }

    
    return pa_recursiva(v, primeiro+1, ultimo-1);
}