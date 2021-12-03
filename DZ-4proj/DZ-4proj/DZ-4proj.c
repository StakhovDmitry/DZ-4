#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdbool.h>
int main(void) {
    int ver;
    int reb;
    int step;
    int count = 0;
    scanf_s("%d %d", &ver, &reb);
    int* arr = (int*)malloc(ver * reb * sizeof(int));
    bool* flag = (bool*)malloc(reb * sizeof(bool));
    
    for (int i = 0; i < reb; i++) {
        flag[i] = false;
    }
    
    for (int i = 0; i < reb; i++) {
        printf("%d:", i);

        for (int j = 0; j < ver; j++) {
            scanf_s("%d", (arr + i * ver + j));
        }
    }
    
    printf("\n");
    
    for (int i = 0; i < reb; i++) {

        for (int j = 0; j < ver; j++) {
            count = count + arr[i * ver + j];
        }
        if (count != 2) {
            printf("INPUT ERROR");
            return(-1);
        }
        count = 0;
    }
    
    scanf_s("%d", &step);
    
    for (int j = 0; j < ver; j++) {
        
        for (int i = 0; i < reb; i++) {
            count = count + arr[i * ver + j];
        }
        if (count == step) {
            for (int k = 0; k < reb; k++) {
                
                if ((arr[k * ver + j] != 0) && (flag[k] == false)) {
                    printf("%d", k);
                    flag[k] = true;
                }
            }
        }
        count = 0;
    }
}

