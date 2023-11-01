#include <stdio.h>

char * filename1 = "input.txt";
char * filename2 = "output.txt";
FILE * fin = fopen(filename1, "rt");
FILE * fout = fopen(filename2, "wt");

int fib(int n){
    if (n == 0 || n == 1){
        return n;
    }
    else {
        return fib(n - 1) + fib(n - 2);
    }
}

int main(){
    int n;
    fscanf(fin, "%d", &n);
    for (int i = 0; i < n; i++){
        fprintf(fout, "%d ", fib(i));
    }
    return 0;
}