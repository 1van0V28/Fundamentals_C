#include <stdio.h>

int main(){
    int n, sum_counter, start_index, end_index;
    double sum = 0;
    scanf("%d", &n);
    double numbers[n];
    for (int i = 0; i < n; i++){
        scanf("%lf", &numbers[i]);
    }
    scanf("%d", &sum_counter);

    int j = 0;
    double summi[sum_counter];
    while (j < sum_counter){
        scanf("%d%d", &start_index, &end_index);
        sum = ((numbers[start_index - 1] + numbers[end_index - 1]) / 2) * (end_index - start_index + 1);
        summi[j] = sum;
        j = j + 1;
    }
    for (int z = 0; z < sum_counter; z++){
        printf("%.0lf ", summi[z]);
    }
    return 0;
}