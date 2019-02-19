#include <iostream>
#include <math.h>


int main(int argc, char const *argv[])
{
    int n = 0;
    int i = 1;
    scanf("%d", &n);
    while(i <= sqrt(n))
        {
            if(n % i == 0) {
                printf("%d,", i);
                if (i != (n / i)) {
                    printf("%d,", n / i);
                }
            } 
            i++;
        }
    return 0;
}
