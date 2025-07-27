#include "libft.h"
#include <unistd.h>
#include <stdio.h>
void ft_puthcar(char c){
    write(1, &c, 1);
}
void ft_print_comb2(void){
    int j;
    int i = 0;
    
    while (i <= 98){
        j = i + 1;
        while (j <= 99){
            write(1, &((char []){i / 10 + '0'}), 1);
            write(1, &((char []){i % 10 + '0'}), 1);
            write(1, " ", 1);
            write(1, &((char []){j / 10 + '0'}), 1);
            write(1, &((char []){j % 10 + '0'}), 1);
            if (!(i == 98 && j == 99))
            {
                write(1, " ,", 1);
            }
            j++;
        }
        i++;
    }
}
int main(){
    ft_print_comb2();
    return 0;
}