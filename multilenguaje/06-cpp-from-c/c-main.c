#include <stdio.h>

#define NUM 200

extern int sum_abs(const int * const inp, const int num);

int main(int argc, char **argv)
{
    int data[NUM], num, i;

    num = NUM;
    for (i=0; i < num; i++) {
        data[i] = i - 100 + 1;  /* NOTE: difference in array numbering */  
    }

    printf("sum=%d\n", sum_abs(data, num));

    return 0;
}
