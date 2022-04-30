#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//system与shotdown的 使用
//int main() {
//	system("shotdown /a");
//}
int main()
{
	char arr[20] = { 0 };
	system("shutdown /s  /t 10");
ass:
	printf("请注意，你的电脑在一分钟内关机，如果输入：我好帅，就取消关机\n请输入:>");
	scanf("%s", arr);
	if (strcmp(arr, "我好帅") == 0)
		system("shutdown /a");
	else
		goto ass;
	return 0;
}