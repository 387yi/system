#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//system��shotdown�� ʹ��
//int main() {
//	system("shotdown /a");
//}
int main()
{
	char arr[20] = { 0 };
	system("shutdown /s  /t 10");
ass:
	printf("��ע�⣬��ĵ�����һ�����ڹػ���������룺�Һ�˧����ȡ���ػ�\n������:>");
	scanf("%s", arr);
	if (strcmp(arr, "�Һ�˧") == 0)
		system("shutdown /a");
	else
		goto ass;
	return 0;
}