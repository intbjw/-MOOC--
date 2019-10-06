
//函数被调用进行测试的一个可能的例子像这样：
#include <stdio.h>
void reverse(int *array, int size);
int main()
{
    int n;
    scanf("%d", &n);
    int array[n];
    for(int i=0; i<n; i++) scanf("%d", array+i);
    reverse(array, n);
    for(int i=0; i<n-1; i++) printf("%d ", array[i]);
    printf("%d", array[n-1]);
    return 0;
}
/* 你提交的代码将被嵌到这里 */
void reverse(int *array, int size)
{
    if(size==1)
        return;
    int n;
    n = size / 2 - 1;
    int i,temp;
    for(i=0;i<=n;i++)
    {
        temp = array[i];
        array[i] = array[size-1-i];
        array[size-1-i] = temp;
    }
}
