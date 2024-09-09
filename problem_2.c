#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num_list[], size_t num_list_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int) * 5);

    for (int k = 0; k < num_list_len - 1; k++) {
        for (int z = 0; z < num_list_len - k - 1; z++) {
            if (num_list[z] > num_list[z + 1]) {
                int temp = num_list[z];
                num_list[z] = num_list[z + 1];
                num_list[z + 1] = temp;
            }
        }
    };
    for (int i = 0; i < 5; i++)
        answer[i] = num_list[i];
      
    return answer;
}
