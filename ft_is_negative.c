#include "libft.h"
#include <unistd.h>
#include <stdio.h>
void ft_is_negative(int n){
    if (write(1, (n >= 0) ? "P" : "N", 1) == -1)
    {

    }
    
}
int main(){
    int n = -10;
    ft_is_negative(n);
    printf(" ");
    return 0;
}