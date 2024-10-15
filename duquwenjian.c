#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

const int N = 20;
char zifu[400][30];//读取字符
int main() {
    FILE *fp;
    fp = fopen("E:\\VS程序\\biaoge\\校发--博士生补助157.csv", "r");// fp指针指向文件头部

    int num = 0;
    /*for (int i = 0; i <= N; i++)
    {
          fscanf(fp, "%s", zifu[i]);
          printf("%s", zifu[i]);
    }*/
    while (fscanf(fp, "%s", zifu[num]) != NULL)
    {
        char *find = strchr(zifu[num], '\n');  //strchr字符串搜索函数
        if (find)// 如果找到指针，修改指针指向的元素为\0
        {
            *find = '\0';//将换行符换成\0，因为要FindFirstFile(szFind,&FindFileData)需要没有换行符
        }
        printf("%s\n", zifu[num]);
        num++;
    }

    printf("num%d\n", num);//计数
    fclose(fp);

    return 0;
}
