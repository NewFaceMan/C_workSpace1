#include <stdio.h>
#include <string.h>


typedef struct USERDATA
{
	int nAge;
	char szName[32];
	char szPhone[32];
} USERDATA;

int main(void)
{
	USERDATA user = { 0, "", "" };

	user.nAge = 10;

	strcpy_s(user.szName, sizeof(user.szName), "Hoon");
	strcpy_s(user.szPhone, sizeof(user.szPhone), "010-1234-1234");

	printf("%d��, %s, %s\n", user.nAge, user.szName, user.szPhone);
	return 0;
}