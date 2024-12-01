#include <stdio.h> // 표준 입출력 함수 사용을 위한 헤더 파일 (e.g., printf, fgets)
#include <stdlib.h> // 메모리 동적 할당 및 해제 함수 사용을 위한 헤더 파일 (e.g., malloc, free)
#include <string.h> // 문자열 처리 함수 사용을 위한 헤더 파일 (e.g., strlen, strcpy)

int main(int argc, char const *argv[]) // 프로그램의 시작점, argc와 argv는 명령줄 인수 전달에 사용
{
    char *p[3]; // 문자열을 저장할 포인터 배열, 3개의 문자열 주소를 저장할 공간 생성
    char temp[100]; // 문자열 입력을 임시로 저장할 배열 (최대 99자 + '\0' 저장 가능)
    int i, size; // 반복문을 위한 변수 `i`와 문자열 크기를 저장할 변수 `size`

    for (int i = 0; i < 3; i++) // 사용자로부터 3개의 문자열을 입력받기 위한 반복문
    {
        printf("%d 번째 문자열: ", i+1); // 사용자에게 몇 번째 문자열을 입력해야 하는지 안내
        fgets(temp, sizeof(temp), stdin); // temp 배열에 입력받은 문자열 저장 (최대 99자 + '\0')
        // fgets는 개행 문자(\n)를 포함해 문자열을 읽음

        size = strlen(temp); // 입력받은 문자열의 길이를 계산 (개행 문자 포함)
        p[i] = (char*) malloc((sizeof(char) * size) + 1); 
        // 동적 메모리 할당: size만큼의 공간 + '\0'을 위한 1바이트 추가
        // malloc의 반환값은 `void*`이므로 `char*`로 캐스팅

        strcpy(p[i], temp); // 입력받은 문자열(temp)을 동적 메모리에 복사
        // p[i]는 할당된 메모리의 시작 주소를 가리킴
    }

    printf("- 입력과 반대로 출력 (포인터) -  "); // 결과 출력의 시작을 알리는 메시지
    for (int i = 2; i >= 0; i--) // 입력된 문자열을 역순으로 출력하기 위한 반복문
    {
        printf("%d : %s \n", i+1, p[i]); // i+1번째 문자열을 출력 (p[i]가 가리키는 문자열)
        // \n은 줄바꿈 문자로, 다음 문자열을 새 줄에 출력
    }
    
    for (int i = 0; i < 3; i++) // 동적 메모리 해제를 위한 반복문
    {
        free(p[i]); // 동적으로 할당한 메모리를 해제
        // 메모리 누수를 방지하기 위해 반드시 호출해야 함
    }
    
    return 0; // 프로그램 종료. 0은 정상 종료를 의미
}