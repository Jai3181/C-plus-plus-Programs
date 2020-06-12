#include <iostream>
using namespace std;
int main()
{
	char a,b;
	for(a='Z';a>='V';a--)
	{
		for(b='Z';b>=a;b--)
		{
			printf("%c",b);
		}
		printf("\n");
	}
}
