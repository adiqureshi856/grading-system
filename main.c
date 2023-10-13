#include <stdio.h>
int main() {
	int TM=510;

	int per;
	int  en,ur,ma,com,is,ph;
	printf("Enter your English marks (Marks should not be greater then  100)");
	scanf("%d",&en);
	printf("Enter your Urdu marks (Marks should not be greater then  100)");
	scanf("%d",&ur);
	printf("Enter your maths marks (Marks should not be greater then  100)");
	scanf("%d",&ma);
	printf("Enter your Computer marks (Marks should not be greater then  75)");
	scanf("%d",&com);
	printf("Enter your Islamic marks (Marks should not be greater then  50)");
	scanf("%d",&is);
	printf("Enter your phy marks (Marks should not be greater then  85)");
	scanf("%d",&ph);
	
int   OM=en+ur+ma+com+is+ph;
	printf("\n your obtained marks = %d",OM);
	per=(OM*100)/TM;
	if((per>=80)&&(per<=100))
	{
		printf("\nYour grade ia A");
	}
	else if((per>=70)&&(per<=79))
	{
		printf("\nYour grade ia B");
	}
	else if((per>=60)&&(per<=69))
	{
		printf("\nYour grade ia C");
		
	}
	else if((per>=50)&&(per<=59))
	{
		printf("\nYour grade ia D");
	}
else	
	{
		printf("\nYour grade ia F");
	}
	getch();
	return 0;
}
