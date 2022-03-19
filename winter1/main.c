//
// Created by 天博 on 20/02/2022.
//
#include <stdio.h>
#include <string.h>
//左旋字符串
// 该方法每次左旋一个字符
//void left_move(char* str,int k)
//{
//    int i =0;
//    for(i=0;i<k;i++)
//    {
//第一个元素储存至临时变量
//        char tmp=*str;
//        int len= strlen(str);
//        int j=0;
//所有元素前移
//        for(j=0;j<len-1;j++)
//        {
//            *(str+j) = *(str + j +1);
//        }
//最后一个元素更新为左旋的元素
//        *(str+len-1)=tmp;
//    }
//}
//逆转字符串
//void reverse(char* left,char* right)
//{
//当右指针在左指针之后时，左指针所指变量赋给临时变量，右指针覆盖左指针所指变量，临时变量覆盖右指针所指变量，左指针加，右指针减。
//    while (left<right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}

//
//void left_move_2(char* str,int k)
//{
//    int len = strlen(str);
//    k%=len;
//分组逆转，k前的逆转，k后的逆转，最后整体逆转，可以得到同样的左旋结果
//    reverse(str,str+k-1);
//    reverse(str+k,str+len-1);
//    reverse(str,str+len-1);
//}

//int main() {
//    char arr[] = "abcdef";
//
//    int k=0;
//    scanf("%d",&k);
//    left_move(arr,k);
//    printf("%s\n",arr);
//

//杨氏矩阵
//接收四个参数，一个二阶矩阵，一个行，一个列，一个要找的元素k。
//void find_int_arr(int arr[3][3],int r,int c,int k)
//{   int x=0;
//    //y是每行最后一个元素
//    int y=c-1;
//
//    while(y>=0 && x<=r-1)
//    {
//        //不在行内则找下一行最后的元素。
//        if (arr[x][y]<k)
//        {
//            x++;
//            //在行内则在行内换列找
//        }else if(arr[x][y]>k)
//        {
//            y--;
//        }else
//        {
//            printf("found it,its :x=%d y=%d",x,y);
//            return;
//        }
//    }
//    printf("cant find it");
//}
//
//
//int main()
//{
//
//    int arr[3][3]={1,2,3,4,5,6,7,8,9};
//    int x=0;
//    int y=2;
//    int k=0;
//    scanf("%d",&k);
//    find_int_arr(arr,3,3,k);
//    return 0;
//
//}
//

//杨氏矩阵搜索函数，接收四个参数，一个二维矩阵，一个行数，一个列数（行列由指针给出），一个要找的数字。
//void find_int_arr(int arr[3][3],int *px , int *py, int k)
//{
//y为每行最后一个坐标，x为第一个。
//    int x=0;
//    int y= *py-1;
//    while(y >= 0 && x <= *px-1)
//    {

//比较第一行最后一个元素与k，如果比这个数小则找下一行
//        if(arr[x][y]<k)
//        {
//            x++;
//        }
//如果比这个数大，就在该行找
//        else if (arr[x][y]>k)
//        {
//            y--;
//        }
//        else
//        {
//找到就把x，y值赋予*px，*py指针中的值
//            *px=x;
//            *py=y;
//            return;
//        }
//    }
//跳出循环没找到，则用负一赋值给两个指针
//    *px=-1;
//    *py=-1;
//
//}
//
//int main()
//{
//    int arr[3][3]={1,2,3,4,5,6,7,8,9};
//    int k=0;
//    int x=3;
//    int y=3;
//
//    scanf ("%d",&k);
//
//    find_int_arr(arr,&x,&y,k);
//    if (x==-1 && y==-1)
//    {
//        printf("couldn't find \n");
//    }
//    else
//    {
//        printf("found it , its : %d %d \n",x,y);
//    }
//
//    return 0;
//}

//判断一个字符串是否由另一个字符串左旋而来，
//左旋函数，
//void left_move(char* str, int k)
//{
//    int i=0;
//    for(i=0;i<k;i++)
//    {
//        //每次旋转一个字符
//        char tmp = *str;
//        int len = strlen(str);
//        int j=0;
//        for(j=0;j<len-1;j++)
//        {
//            *(str+j)=*(str+j+1);
//        }
//        *(str+len-1)=tmp;
//    }
//}
////判断是arr2是否为arr1左旋而来
//int is_left_move_1(char* arr1,char* arr2) {
//    int len = strlen(arr1);
//    int i = 0;
//    for (i = 0; i < len; i++) {
//        //每左旋一次就对比一次
//        left_move(arr1, 1);
//        if (strcmp(arr1, arr2) == 0)
//            return 1;
//    }
//    return 0;
//}
//int main()
//{
//    char arr1[]="aabcd";
//    char arr2[]="bcdaa";
//    int ret= is_left_move_1(arr1,arr2);
//    printf("%d\n",ret);
//    return 0;
//}


//int is_left_move_2(char* arr1,char* arr2)
//{
//    int len1=strlen(arr1);
//    int len2=strlen(arr2);
//    if(len1 !=len2)
//        return 0;
//
//    strncat(arr1,arr1,len1);
//    if(strstr(arr1,arr2))
//        return 1;
//    else
//        return 0;
//}
//
//int main()
//{
//    char arr1[20]="aabcd";
//    char arr2[]="bcdaa";
//    int ret= is_left_move_2(arr1,arr2);
//    printf("%d\n",ret);
//    return 0;
//}

//判断一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字
//
//int main()
//{
//    int arr[]={1,2,3,4,5,1,2,3,4,6,6,5,8,9};
//    //先全部亦或,不同为1，相同为0，最后就相当于两个只出现一次的数字进行亦或，8：1000，9：1001
//    int ret=0;
//    int sz=sizeof (arr)/sizeof (arr[0]);
//    int i=0;
//    for (i=0;i<sz;i++)
//    {
//        ret^=arr[i];
//    }
//
//    //计算ret的二进制中第几个位是1
//    int pos=0;
//    for (i=0;i<32;i++)
//    {
//        if((( ret>>i ) & 1) ==1 )
//        {
//            pos=i;
//            break;
//        }
//    }
//    //按照pos位为0或1来分组
//    int n=0;
//    int m=0;
//    for (i=0;i<sz;i++)
//    {
//        if(((arr[i]>>pos)&1)==1)
//        {
//            //按这样的一组全部亦或在一起得到其中一个数字
//            n^=arr[i];
//        }
//    }
//    //用之前全部亦或的结果再亦或n就可以的到另一个数字
//    m=ret^n;
//
//    printf("%d %d\n",n,m);
//    return 0;
//}


//将两个数组合并按从小到大排列
//int main() {
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr1[n];
//    int arr2[m];
//    int i = 0;
//    int k = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i=0;i<m;i++)
//    {
//        scanf("%d",&arr2[i]);
//    }
//    int j=0;
//    i=0;
//    //先排列数量小的，比如1数组有5个数字，2数组有8个数字，那就先将各自前五个拿出来比一比。小的先打印
//    while (i<n && j<m)
//    {
//        if(arr1[i]<arr2[j])
//        {
//            printf("%d",arr1[i]);
//            i++;
//        }
//        else
//        {
//            printf("%d",arr2[j]);
//            j++;
//        }
//    }
//    //如果第二个数组排完了，那直接打印剩余1数组的元素
//    if(j==m)
//    {
//        for(;i<n;i++)
//        {
//            printf("%d",arr1[i]);
//        }
//    }
//    else
//    {
//        for(;j<m;j++)
//        {
//            printf("%d",arr2[j]);
//        }
//    }
//    return 0;
//}

//10000-99999中的所有水仙花数，分成两部分相乘，所有相乘结果相加还是原来那个数
//#include <math.h>
//int main()
//{
//    int i=0;
//    for(i=10000;i<=99999;i++)
//    {
//        int j=0;
//        int sum=0;
//        for(j=1;j<=4;j++)
//        {
//            //取后面的部分
//            int m=i%(int)pow(10,j);
//            //取前面的部分
//            int n=i/ pow(10,j);
//            //sum相加
//            sum+=m*n;
//        }
//        if(i==sum)
//        {
//            printf("%d",i);
//        }
//    }
//
//    return 0;
//}