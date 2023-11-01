#include <stdio.h>

int main() {
    int str, stol, sum = 0, proizv = 1, number;
    scanf("%d%d\n", &str, &stol);
    if (stol == 1){
        for (int z = 0; z < str; z++){
            scanf("%d", &number);
            sum = sum + number;
        }
        printf("%d", sum);
        return 0;
    }
    else {
        int matrix[str][stol];
        for (int i = 0; i < str; i++) {
            for (int j = 0; j < stol; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }
        for (int x = 0; x < str; x++) {
            proizv = matrix[x][0] * matrix[x][stol - 1];
            sum = sum + proizv;
        }
        printf("%d", sum);
        return 0;
    }
}