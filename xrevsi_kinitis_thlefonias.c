// xrewsi_kinitis_tilefonias.cpp : This file contains the 'main' function. Program execution begins and ends there.




#include<stdio.h>

main()

{
	int d;
	float poso;

	printf("diarkeia ana sec:\t");
	scanf("%d", &d);
	
	if (d <= 500)
		poso = d * 0.004;
	else if (d <= 800)
		poso = 500 * 0.004 + (d - 500) * 0.003;
	else
		poso = 500 * 0.004 + 300 * 0.003 + (d - 800) * 0.002;
	poso += 10;
	printf("xreosi :%5.2f\n", poso);



}
