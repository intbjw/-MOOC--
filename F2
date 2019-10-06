/* 测试程序仅为示例，实际的测试程序可能不同 */
#include <stdio.h>
#include <string.h>
#define MAXLENGTH 100
int isPalindrome(const char* str, char* pch);
int main(){
    char str[MAXLENGTH],mid;
    scanf("%s",str);
    if(isPalindrome(str, &mid))
        printf("是回文！中间字符是%c\n",mid);
    else
        printf("不是回文！中间字符是%c\n",mid);
    return 0;
}

/* 你编写的函数代码将被嵌在这里 */
int isPalindrome(const char* str, char* pch)
{
	int n=strlen(str);
	int i, j,count=0;
	for(i = 0, j = n - 1; i < n, j >= 0; i++, j--)
	{
		if (*(str + i) == *(str + j))
		{
			count++;
		}
	}
    *pch = str[(n-1)/2];
	if (count == n)
		return 1;
    else 
        return 0;
 
}
