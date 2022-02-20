//
// Created by 天博 on 20/02/2022.
//
#include <stdio.h>
#include <string.h>
void left_move(char* str,int k)
{
    int i =0;
    for(i=0;i<k;i++)
    {
        char tmp=*str;
        int len= strlen(str);
        int j=0;
        for(j=0;j<len-1;j++)
        {
            *(str+j) = *(str + j +1);
        }
        *(str+len-1)=tmp;
    }
}
//void reverse(char* left,char* right)
//{
//    while (left<right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//void left_move_2(char* str,int k)
//{
//    int len = strlen(str);
//    k%=len;
//    reverse(str,str+k-1);
//    reverse(str+k,str+len-1);
//    reverse(str,str+len-1);
//}

int main() {
    char arr[] = "abcdef";

    int k=0;
    scanf("%d",&k);
    left_move(arr,k);
    printf("%s\n",arr);


    return 0;
}
