#include <stdio.h>

int main(void)
{
	int su = 0X000035;
	FILE *fb;
	errno_t err;

	err = fopen_s(&fb, "binary.txt", "wb");   // ���� ���� ���̳ʸ� ���� ����

	if (NULL != fb)    // ���� ���⸦ ������ ���
	{
		printf(" >> ���̳ʸ� ���� ���� : ���� \n");
		printf(" >> ���� ���� binary.txt ���� ���� : �Ϸ� \n");

		fwrite(&su, sizeof(int), 1, fb);
		fclose(fb);
	}
	else            // ���� ���⸦ ������ ���
		printf(" >> ���̳ʸ� ���� ���� ���� !! \n");

	return 0;
}