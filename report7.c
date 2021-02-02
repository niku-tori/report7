#include <stdio.h>

void sort(int array[], int size);
void print_scores(int array[], int size);

int main(){
    /*const int SIZE = 5;                           
    int scores[SIZE] = {0, 60, 70, 100, 90};*/

    const int SIZE = 6;
    int scores[SIZE] = {100, 60, 70, 100, 90, 80};

    //ソートをする前
    printf("scores ");
    print_scores(scores,SIZE);

    //ソートを行う
    sort(scores,SIZE);
    printf("result ");
    print_scores(scores,SIZE);

    return 0;
}


void sort(int array[],int size){
    int flag = 0;
    int num,i;
    while (flag == 0){
        flag = 1;
        for(i = 0; i < size - 1; i++){
            if (array[i] < array[i + 1]) {
                num = array[i];
                array[i] = array[i + 1];
                array[i + 1] = num;
                flag = 0;
            }
        }
    } 
}

void print_scores(int array[], int size){
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]); 
    }
    printf("\n");
}
