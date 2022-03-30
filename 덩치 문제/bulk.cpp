#include <stdio.h> 

typedef struct {
	int weight;
	int height;
	int rank;
} person; //사람의 몸무게, 키, 등수를 나타내는 구조체를 person이라는 type으로 선언

int main()
{
	int N; //사람의 수를 나타내는 변수 N
	person list[50]; //사람의 수를 최대 50명으로 제한

	scanf_s("%d", &N); //사람의 수를 입력받음

	for (int i = 0; i < N; i++) {
		scanf_s("%d %d", &list[i].weight, &list[i].height);
		list[i].rank = 1;
	}
	//list배열에 사람의 몸무게와 키를 저장
	for (int j = 0; j < N; j++) {
		for (int k = 0; k < N; k++) {
			if ((list[j].weight < list[k].weight) && (list[j].height < list[k].height)) {
				list[j].rank = list[j].rank + 1;
			}
		}
	}
	//weight와 height값을 비교하여 weight와 height 둘다 값이 크다면 rank에 1을 더해 등수를 낮춤
	for (int i = 0; i < N; i++) {
		printf("%d ", list[i].rank);
	}
	//list배열의 rank를 모두 출력한다
}