#include<stdio.h>
main ()
{
	int num1, num2, lcm;
	printf("Enter first number \n");
	scanf("%d", &num1);
	printf("Enter 2nd number \n");
	scanf("%d", &num2);
	
	for (lcm=1;lcm<=num1*num2;lcm++)
	{
		if (lcm%num1==0 && lcm%num2==0)
		{
			break;
		}
}
printf("LCM of your given numbers will be: %d", lcm);
}