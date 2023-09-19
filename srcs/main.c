#include <stdio.h>
#include <string.h>
#include "libft.h"

int main() {
    // テストデータの用意
    char src[] = "Hello, World!";
    char dest1[50];
    char dest2[50];

    // 自作のft_memmoveを使ってコピー
    ft_memmove(dest1, src, strlen(src) + 1);

    // 標準のmemmoveを使ってコピー
    memmove(dest2, src, strlen(src) + 1);

    // 比較して結果を出力
    if (strcmp(dest1, dest2) == 0) {
        printf("ft_memmoveとmemmoveは同じ結果を返しました。\n");
    } else {
        printf("ft_memmoveとmemmoveは異なる結果を返しました。\n");
    }

    return 0;
}
