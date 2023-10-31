#include<stdio.h>
#include<cstring>
struct complex
{
	int a;
	int b;
};
int main()
{
	struct complex c={2,4};
	printf("%d+%di",c.a,c.b);
	return 0;
}
