#include <iostream>
using namespace std;

struct Student

{

	char name[100];

	int age;

	char sex[3];

};


int main(int argc, const char * argv[]) {

	Student *p;

	Student temp;

	int i, j;

	int N;

	scanf("%d", &N);

	p = new Student[N];

	if (p == 0)
	{

		exit(0);

	}

	for (i = 0; i<N; i++)

		scanf("%s %s %d", p[i].name, p[i].sex, &p[i].age);

	for (int i = 0; i<N - 1; i++)

	{
		for (j = 0; j<N - 1 - i; j++)

		{

			if (p[j].age>p[j + 1].age)

			{

				temp = p[j];

				p[j] = p[j + 1];

				p[j + 1] = temp;

			}

		}

	}

	for (i = 0; i<N; i++)

	{
        printf("%s %s %d", p[i].name, p[i].sex, p[i].age);
	}

	delete p;
	return 0;

}