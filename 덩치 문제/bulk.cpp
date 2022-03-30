#include <stdio.h> 

typedef struct {
	int weight;
	int height;
	int rank;
} person; //����� ������, Ű, ����� ��Ÿ���� ����ü�� person�̶�� type���� ����

int main()
{
	int N; //����� ���� ��Ÿ���� ���� N
	person list[50]; //����� ���� �ִ� 50������ ����

	scanf_s("%d", &N); //����� ���� �Է¹���

	for (int i = 0; i < N; i++) {
		scanf_s("%d %d", &list[i].weight, &list[i].height);
		list[i].rank = 1;
	}
	//list�迭�� ����� �����Կ� Ű�� ����
	for (int j = 0; j < N; j++) {
		for (int k = 0; k < N; k++) {
			if ((list[j].weight < list[k].weight) && (list[j].height < list[k].height)) {
				list[j].rank = list[j].rank + 1;
			}
		}
	}
	//weight�� height���� ���Ͽ� weight�� height �Ѵ� ���� ũ�ٸ� rank�� 1�� ���� ����� ����
	for (int i = 0; i < N; i++) {
		printf("%d ", list[i].rank);
	}
	//list�迭�� rank�� ��� ����Ѵ�
}