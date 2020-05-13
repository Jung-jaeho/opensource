#include <stdio.h>

#define max(x,y) ((x)>(y)?(x):(y))


int max_arr2(int arr[],int arr_len);


int main()
{
    int a[10] = { 0 };
    int i;

    for (i = 0; i < 10; i++)
        a[i] = 9 - i;


    printf("%d\n", max_arr2(a, 10));

    return 0;

}

int max_arr2(int arr[],int arr_len)
{
    if (arr_len == 1)
        return arr[0];
    else
        return max(arr[arr_len - 1], max_arr2(arr, arr_len - 1));
}