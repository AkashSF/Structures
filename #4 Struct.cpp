#include<stdio.h>
struct details
{
	char name[20];
	int id;
	float price;
	float discount;
};

details rec()
{
	struct details b;
		scanf("%s", &b.name);
		scanf("%d", &b.id);
		scanf("%f", &b.price);
		scanf("%f", &b.discount);
	return b;
}
void print(struct details c)
{
	printf("Name\tID\tPrice\tDiscount\n");
		printf("%s\t", c.name);
		printf("%d\t", c.id);
		printf("%.2f\t", c.price);
		printf("%.2f%%\n", c.discount);
}
int main()
{
	struct details a;
    a=rec();
	print(a);
}
