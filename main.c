#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
    int r1, r2;

    // %c
    r1 = ft_printf("ft : %c\n", 'A');
    r2 = printf("pf : %c\n", 'A');
    printf("retours -> ft:%d | pf:%d\n\n", r1, r2);

    // %s
    r1 = ft_printf("ft : %s\n", "Hello");
    r2 = printf("pf : %s\n", "Hello");
    printf("retours -> ft:%d | pf:%d\n\n", r1, r2);

    r1 = ft_printf("ft : %s\n", (char *)NULL);
    r2 = printf("pf : %s\n", (char *)NULL);
    printf("retours -> ft:%d | pf:%d\n\n", r1, r2);

    // %p
    r1 = ft_printf("ft : %p\n", (void *)0x1234abcd);
    r2 = printf("pf : %p\n", (void *)0x1234abcd);
    printf("retours -> ft:%d | pf:%d\n\n", r1, r2);

    // %d / %i
    r1 = ft_printf("ft : %d %i\n", 42, -42);
    r2 = printf("pf : %d %i\n", 42, -42);
    printf("retours -> ft:%d | pf:%d\n\n", r1, r2);

    // %u
    r1 = ft_printf("ft : %u\n", 4294967295u);
    r2 = printf("pf : %u\n", 4294967295u);
    printf("retours -> ft:%d | pf:%d\n\n", r1, r2);

    // %x / %X
    r1 = ft_printf("ft : %x\n", 255);
    r2 = printf("pf : %x\n", 255);
    printf("retours -> ft:%d | pf:%d\n\n", r1, r2);

    r1 = ft_printf("ft : %X\n", 255);
    r2 = printf("pf : %X\n", 255);
    printf("retours -> ft:%d | pf:%d\n\n", r1, r2);

    // %%
    r1 = ft_printf("ft : %%\n");
    r2 = printf("pf : %%\n");
    printf("retours -> ft:%d | pf:%d\n\n", r1, r2);

    return 0;
}