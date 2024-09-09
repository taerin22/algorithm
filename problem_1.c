#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(const char* my_string, int k) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(my_string);
    char* answer = (char*)malloc(len*k+1);

    answer[0] = '\0';

    for (int i = 0; i < k; i++)
        strcat(answer,my_string);

    return answer;
}
