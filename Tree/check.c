#include<stdio.h>
int main()
{
	char name[50],sec;
	int stand;
	int m,e,h,s,soc,total;
puts("___________");
	puts("Jawahar Navodaya Vidyalaya\n");
	puts("Annual Report Card\n");
	printf("Name:");
	scanf("%s",name);
	printf("Standerd:");
	scanf("%d",&stand);
	printf("Section:");
    fflush(stdin);
	scanf("%c",&sec);
	puts("Marks Secured out of 100\n");
	printf("Mathematics:");
	scanf("%d",&m);
	printf("English:");
	scanf("%d",&e);
	printf("Hindi:");
	scanf("%d",&h);
	printf("Science:");
	scanf("%d",&s);
	printf("SocialScience:");
	scanf("%d",&soc);
	printf("\n");
	total = (m+e+h+s+soc);
	printf("Total marks secured:",total);
		if(total >=450 && total < 500)
		{
		printf("Grade A\n");
		}
	if(total >=400 && total < 449)
		{
		printf("Grade B\n");
		}
	if(total >=350 && total < 399)
		{
		printf("Grade C\n");
		}
	if(total >= 300 && total <349)
		{
		printf("Grade D\n");
		}
	if(total >= 200  && total< 299 )
		{
		printf("Grade E\n");
		}
	if(total >=0 && total <200)
		{
		printf("Grade F \n");
		}

               return 0;
                
                 }