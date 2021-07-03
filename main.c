#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	ft_printf("\n-------------------------------------------------------\n");
	/*{
		int q = ft_printf("Hello!|%4c|PRIVET|%-4c|Hey!!|%c|\n", 'Y', 'P', 54);
		int i = printf("Hello!|%4c|PRIVET|%-4c|Hey!!|%c|\n", 'Y', 'P', 54);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("-------------------------------------------------------\n");
	{
		int q = ft_printf("%*c\n", 3, 'Y');
		int i = printf("%*c\n", 3, 'Y');
		printf("\nq = %d, i = %d", q, i);
	} 
	{
		int q = ft_printf("|%1.2s|\n", "abc");
		int i = printf("|%1.2s|\n", "abc");
		printf("\nq = %d, i = %d", q, i);
	}*/
	/*
	{
		int q = ft_printf("|%1.5d|\n", 123);
		int i = printf("|%1.5d|\n", 123);
		printf("\nq = %d, i = %d", q, i);
	}
	*/
/*
	{
		int q = ft_printf("|%-12.3u, u = %u|\n", 123456, 34);
		int i = printf("|%-12.3u, u = %u|\n", 123456, 34);
		printf("\nq = %d, i = %d", q, i);
	}
	*/
/*	{
		int q = ft_printf("|%12.9x|\n", 25031);
		int i = printf("|%12.9x|\n", 25031);
		printf("\nq = %d, i = %d", q, i);
	}*/
/*
	{
		char *ptr = "NULLlllllllllllllllllllllllllllllllllllllllllllllll";
		int q = ft_printf("|%50.0p|\n", ptr);
		int i = printf("|%p|\n", ptr);
		printf("\nq = %d, i = %d", q, i);
	}*/
	/*
	{
		int q = ft_printf("|%*c|\n", -3, 'Y');
		int i = printf("|%*c|\n", -3, 'Y');
		printf("\nq = %d, i = %d", q, i);
	}
	*/
/*
	{
		int q = ft_printf("|*%c%*c|\n", '0', 10, '1');
		int i = printf("|*%c%*c|\n", '0', 10, '1');
		printf("\nq = %d, i = %d", q, i);
	}
	*/
	/*
	"%-c%-c%c*", 1, '0', 0
	{
		int q = ft_printf("|%*c%c*|\n", -10, '0', '1');
		int i = printf("|%*c%c*|\n", -10, '0', '1');
		printf("\nq = %d, i = %d", q, i);
	}
	*/
/*
	{
		int q = ft_printf("|%-c%-c%c*|\n", 45, '0', 100);
		int i = printf("|%-c%-c%c*|\n", 45, '0', 100);
		printf("\nq = %d, i = %d", q, i);
	}
	*/
/*
	{
		int q = ft_printf("|%-8.4s|\n", "123456");
		int i = printf("|%-8.4s|\n", "123456");
		printf("\nq = %d, i = %d", q, i);
	}*/
	/*{
		int q = ft_printf("|%.d|\n", 0);
		int i = printf("|%.d|\n", 0);
		printf("\nq = %d, i = %d", q, i);
	}*/
	/*
	{
		int q = ft_printf("|%10.0d|\n", 13);
		int i = printf("|%10.0d|\n", 13);
		printf("\nq = %d, i = %d", q, i);
	}
	*/
/*
	{
		char *str = NULL;
		int q = ft_printf("|%.p|\n", -1);
		(void) q;
		int i = printf("|%.p|\n", -1);
		printf("\nq = %d, i = %d", q, i);
	}
	*/
/*
	{
		int i = ft_printf("| 0*%-0*.10d*0 0*%-0*.0d*0 |\n", 21, 1021, 21, -1011);
		int q = printf("| 0*%-0*.10d*0 0*%-0*.0d*0 |\n", 21, 1021, 21, -1011);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------\n");
	{
		int i = ft_printf("| 0*%0-*d*0 0*%0*d*0 |\n", 21, 1021, 21, -1011);
		int q = printf("| 0*%0-*d*0 0*%0*d*0 |\n", 21, 1021, 21, -1011);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------\n");
	
	{
		int i = ft_printf("|%*d|\n", 21, 21);
		int q = printf("|%*d|\n", 21, 21);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------\n");
	
	{
		int i = ft_printf("|%*d|\n", 21, -21);
		int q = printf("|%*d|\n", 21, -21);
		printf("\nq = %d, i = %d", q, i);
	}

	ft_printf("\n-------------------------------------------------------\n");
	
	{
		int i = ft_printf("|%-*d|\n", 21, 21);
		int q = printf("|%-*d|\n", 21, 21);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------\n");
	
	{
		int i = ft_printf("|%10.2d|\n", -2147483647);
		int q = printf("|%10.2d|\n", -2147483647);
		printf("\nq = %d, i = %d", q, i);
	}
	*/
	{
		int i = ft_printf("| %-3.2d %10.42d |\n", 1, -1);
		int q = printf("| %-3.2d %10.42d |\n", 1, -1);
		printf("\nq = %d, i = %d", q, i);
	}

//	printf("\n\nabc%%");
	return (0);
}