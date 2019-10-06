/* 此测试程序仅为示例，实际的测试程序可能不同 */
#include <stdio.h>
#define MAXSIZE 100
int indexOfMax(int *array, int size);
int main(){
    int num[MAXSIZE];
    int total;
    scanf("%d",&total);
    for(int i=0; i<total; i++) scanf("%d",&num[i]);
    printf("%d\n",num[indexOfMax(num,total)]);
    return 0;
}

/* 你所编写的函数代码将被嵌在这里 */
int indexOfMax(int *array, int size)
{
    int max=-11111111,k=0,i;
    for(i=0;i<size;i++)
    {
        if(array[i]>max)
        {
            max = array[i];
            k = i;
        }
    }
    return k;
}
