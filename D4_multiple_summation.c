#include <stdio.h>

int main(){
    int n, number, sum_counter;
    scanf("%d", &n);
    int sum_array[n + 1];
    sum_array[0] = 0;
    for (int i = 1; i < (n+1); i++){
        int last_sum;
        scanf("%d", &number);
        last_sum = sum_array[i-1];
        sum_array[i] = number + last_sum;
    }
    int start_index, last_index;
    scanf("%d", &sum_counter);
    for (int j = 0; j < sum_counter; j++){
        scanf("%d%d", &start_index, &last_index);
        int sum = sum_array[last_index] - sum_array[start_index - 1];
        printf("%d ", sum);
    }
    return 0;
}