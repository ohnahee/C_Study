#include <stdio.h>

//삼중자 출력시 물음표 사이 역슬래시 넣기

int main() {
	char id[50];
	scanf("%s", id);
	printf("%s?\?!", id);

	return 0;
}


/* string 사용

#include <stdio.h>
#include <string.h>

int main() {
    char id[50];
    fgets(id, sizeof(id), stdin); 줄 바꿈 문자를 포함하여 입력 받음
    id[strcspn(id, "\n")] = 0; 줄 바꿈 문자를 NULL로 바꿈
    strcat(id, "?\?!"); 문자열의 끝에 "?\?!" 추가
    printf("%s", id);

    return 0;
}


*/