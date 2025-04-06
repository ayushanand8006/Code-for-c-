#include<stdio.h>
using namespace std;

	struct simp
	{
		int i = 6;
    char city[10]="hennai";
	};
int main()
{
	struct simp s1;
	printf("%s",s1.city);
	printf("%d", s1.i);
	return 0;
}
