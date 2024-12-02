#include <stdio.h>
#include <stdlib.h>

int main() {
    char sourceFileName[20], destFileName[20];
    FILE *sourceFile, *destFile;
    char ch;

    // 원본 파일명 입력
    printf("원본 파일명? ");
    scanf("%s", sourceFileName);

    // 복사할 파일명 입력
    printf("복사할 파일명? ");
    scanf("%s", destFileName);

    // 원본 파일 열기
    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("원본 파일을 열 수 없습니다.\n");
        return 1;
    }

    // 복사할 파일 열기
    destFile = fopen(destFileName, "w");
    if (destFile == NULL) {
        printf("복사할 파일을 생성할 수 없습니다.\n");
        fclose(sourceFile);
        return 1;
    }

    // 파일 복사
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("파일 복사가 완료되었습니다.\n");

    // 파일 닫기
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}