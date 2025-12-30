#include<stdio.h>
struct de{
	int a;
	char b;
	float p;
};
int main() 
{
struct de q;
q.a =4;
q.b ='xyz';
q.p =20.7;
printf("%f",q.p);
}
