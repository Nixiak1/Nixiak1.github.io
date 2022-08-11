#include<conio.h>
#include<stdio.h>
char password[18] = {0}; //存储密码
int i = 0; //记录密码长度
char c; //用于实现密码隐式输入
int main()
{
printf("请输入密码：\n");
while (1) {
    c = getch(); //用 getch() 函数输入，字符不会显示在屏幕上
    if (c == '\r') { //遇到回车，表明密码输入结束
        break; //while 循环的出口
    }
    else if (c == '\b') { //遇到退格，需要删除前一个星号
        printf("\b \b");  //退格，打一个空格，再退格，实质上是用空格覆盖掉星号
        --i;
    }
    else {
        password[i++] = c;//将字符放入数组
        printf("*");     
        }
}
printf("\n");
puts(password);
}
