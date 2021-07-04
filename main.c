#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	ft_printf("\n-------------------------------------------------------\n");
	/*
	{
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
	}
	
	{
		int q = ft_printf("|%1.5d|\n", 123);
		int i = printf("|%1.5d|\n", 123);
		printf("\nq = %d, i = %d", q, i);
	}
	

	{
		int q = ft_printf("|%-12.3u, u = %u|\n", 123456, 34);
		int i = printf("|%-12.3u, u = %u|\n", 123456, 34);
		printf("\nq = %d, i = %d", q, i);
	}
	
	{
		int q = ft_printf("|%12.9x|\n", 25031);
		int i = printf("|%12.9x|\n", 25031);
		printf("\nq = %d, i = %d", q, i);
	}

	{
		char *ptr = "NULLlllllllllllllllllllllllllllllllllllllllllllllll";
		int q = ft_printf("|%50.0p|\n", ptr);
		int i = printf("|%p|\n", ptr);
		printf("\nq = %d, i = %d", q, i);
	}
	
	{
		int q = ft_printf("|%*c|\n", -3, 'Y');
		int i = printf("|%*c|\n", -3, 'Y');
		printf("\nq = %d, i = %d", q, i);
	}
	

	{
		int q = ft_printf("|*%c%*c|\n", '0', 10, '1');
		int i = printf("|*%c%*c|\n", '0', 10, '1');
		printf("\nq = %d, i = %d", q, i);
	}
	
	
	{
		int q = ft_printf("|%*c%c*|\n", -10, '0', '1');
		int i = printf("|%*c%c*|\n", -10, '0', '1');
		printf("\nq = %d, i = %d", q, i);
	}
	

	{
		int q = ft_printf("|%-c%-c%c*|\n", 45, '0', 100);
		int i = printf("|%-c%-c%c*|\n", 45, '0', 100);
		printf("\nq = %d, i = %d", q, i);
	}
	

	{
		int q = ft_printf("|%-8.4s|\n", "123456");
		int i = printf("|%-8.4s|\n", "123456");
		printf("\nq = %d, i = %d", q, i);
	}
	{
		int q = ft_printf("|%.d|\n", 0);
		int i = printf("|%.d|\n", 0);
		printf("\nq = %d, i = %d", q, i);
	}
	
	{
		int q = ft_printf("|%10.0d|\n", 13);
		int i = printf("|%10.0d|\n", 13);
		printf("\nq = %d, i = %d", q, i);
	}
	

	{
		char *str = NULL;
		int q = ft_printf("|%.p|\n", -1);
		(void) q;
		int i = printf("|%.p|\n", -1);
		printf("\nq = %d, i = %d", q, i);
	}
	





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
	ft_printf("\n-------------------------------------------------------33\n");
	{
		int i = ft_printf("| 0*%0-*d*0 0*%0*d*0 |\n", 21, 1021, 21, 1011);
		int q = printf("| 0*%0-*d*0 0*%0*d*0 |\n", 21, 1021, 21, 1011);
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
	ft_printf("\n-------------------------------------------------------\n");

	{
		int i = ft_printf("| %-3.2d %10.42d |\n", 1, -1);
		int q = printf("| %-3.2d %10.42d |\n", 1, -1);
		printf("\nq = %d, i = %d", q, i);
	}
	
ft_printf("\n-------------------------------------------------------\n");
	
	{
		int i = ft_printf("| 0*%0-*.*d*0 0*%0*.*d*0 |\n", 6, 2, 102, 10, 21, -423);
		int q = printf("| 0*%0-*.*d*0 0*%0*.*d*0 |\n", 6, 2, 102, 10, 21, -423);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------\n");
	
	{
		int i = ft_printf("| %*.*d*0 |\n", 21, 7, -123);
		int q = printf("| %0*.*d*0 |\n", 21, 7, -123);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------\n");
	
	{
		int i = ft_printf("|%0*d|\n", 7, -1011);
		int q = printf("|%0*d|\n", 7, -1011);
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
		int i = ft_printf("|%4s|\n", "123");
		int q = printf("|%4s|\n", "123");
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------\n");
	{
		int i = ft_printf("| %4s %4s |\n", "123", "4567");
		int q = printf("| %4s %4s |\n", "123", "4567");
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------\n");

	{
		int i = ft_printf("| |%-4s| |%4s| |\n", "123", "4567");
		int q = printf("| |%-4s| |%4s| |\n", "123", "4567");
		printf("\nq = %d, i = %d", q, i);
	}

	ft_printf("\n-------------------------------------------------------\n");

	{
		int i = ft_printf("| %4s %-4s |\n", "123", "4567");
		int q = printf("| %4s %-4s |\n", "123", "4567");
		printf("\nq = %d, i = %d", q, i);
	}



	ft_printf("\n-------------------------------------------------------\n");

	{
		int i = ft_printf("| %-4s %-4s |\n", "123", "4567");
		int q = printf("| %-4s %-4s |\n", "123", "4567");
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------\n");

	{
		int i = ft_printf("| %-4s %-4s |\n", "123", "4567");
		int q = printf("| %-4s %-4s |\n", "123", "4567");
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------\n");

	{
		int i = ft_printf("| %*s %*s |\n", 1, "123", 10, "4567");
		int q = printf("| %*s %*s |\n", 1, "123", 10, "4567");
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------\n");

	{
		int i = ft_printf("| *%s %*s |\n", "123", 10, "4567");
		int q = printf("| *%s %*s |\n", "123", 10, "4567");
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------\n");
	{
		int i = ft_printf("| %*s %s |\n", 10, "123", "4567");
		int q = printf("| %*s %s |\n", 10, "123", "4567");
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------\n");
	{
		int i = ft_printf("|%4.3s %-4.3s |\n", "123", "4567");
		int q = printf("|%4.3s %-4.3s |\n", "123", "4567");
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------\n");
	{
		int i = ft_printf("| %4.2s %-4.2s |\n", "123", "4567");
		int q = printf("| %4.2s %-4.2s |\n", "123", "4567");
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------\n");
	{
		int i = ft_printf("|%.*s|", -2, NULL);
		ft_printf("\n%d", i);
	}
	{
		int i = ft_printf("%p", 9223372036854775807);
		printf("\n%d", i);
	}
	

	{
		int i = ft_printf("|%c*|\n",  0);
		int q = printf("|%c*|\n", 0);
		printf("\ni = %d, q = %d\n\n", i, q);
	}
	{
		int i = ft_printf("|%c|\n",  56);
		int q = printf("|%c|\n", 56);
		printf("\ni = %d, q = %d", i, q);
	}
	

	{
		int i = ft_printf("| -%*c* -%-*c* |\n", -2, 0, 2, 0);
		int q = printf("| -%*c* -%-*c* |\n", -2, 0, 2, 0);
		printf("\ni = %d, q = %d", i, q);
	}

	{
		int i = ft_printf("|%-c%-c%c*|\n", 1, '0', 0);
		int q = printf("|%-c%-c%c*|\n", 1, '0', 0);
		printf("\ni = %d, q = %d", i, q);
	}
	
	
	ft_printf("\n-------------------------------------------------------\n");
	{
		int i = ft_printf("| -%*c* -%-*c* |\n", -1, 0, 1, 0);
		int q = printf("| -%*c* -%-*c* |\n", -1, 0, 1, 0);
		printf("\ni = %d, q = %d", i, q);
	}
	ft_printf("\n-------------------------------------------------------\n");
	{
		int i = ft_printf("| -%-*c* -%-*c* |\n", 2, 0, -2, 0);
		int q = printf("| -%-*c* -%-*c* |\n", 2, 0, -2, 0);
		printf("\ni = %d, q = %d", i, q);
	}
	ft_printf("\n-------------------------------------------------------\n");
	{
		int i = ft_printf("| -%-2c* -%2c* |\n", 0, 0);
		int q = printf("| -%-2c* -%2c* |\n", 0, 0);
		printf("\ni = %d, q = %d", i, q);
	}

	{
		int i = ft_printf("|%0*.*d*0 |\n", 21, 10, -101);
		int q = printf("|%0*.*d*0 |\n", 21, 10, -101);
		printf("\ni = %d, q = %d", i, q);
	}
	

	{
		int i = ft_printf("|%-0.2c|\n", 'Y');
		int q = printf("|%-0.2c|\n", 'Y');
		printf("\ni = %d, q = %d", i, q);
	}
	

	{
		int i = ft_printf("[%0-*x|%0*x]\n", 21, 1021, 21, -1011);
		int q = printf("[%0-*x|%0*x]\n", 21, 1021, 21, -1011);
		printf("\ni = %d, q = %d", i, q);
	}

*/
	{
		int i = ft_printf("|%0*.*d|\n", 21, 10, -234);
		int q = printf("|%0*.*d|\n", 21, 10, -234);
		printf("\ni = %d, q = %d", i, q);
	}


	ft_printf("\n-------------------------------------------------------16\n");
	{
		int i = ft_printf("| --0*%0*.0d*0 0*%0*.10d*0-- |\n", -2, 0, 21, 1);
		int q = printf("| --0*%0*.0d*0 0*%0*.10d*0-- |\n", -2, 0, 21, 1);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------17\n");
	{
		int i = ft_printf("| --0*%0*.0d*0 0*%0*.10d*0-- |\n", -21, 2147483647, 21, -2147483648);
		int q = printf("| --0*%0*.0d*0 0*%0*.10d*0-- |\n", -21, 2147483647, 21, -2147483648);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------18\n");
	{
		int i = ft_printf("| --0*%0*.0d*0 0*%0*.10d*0-- |\n", -21, 9223372036854775807, 21, -9223372036854775808);
		int q = printf("| --0*%0*.0d*0 0*%0*.10d*0-- |\n", -21, 9223372036854775807, 21, -9223372036854775808);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------23\n");
	{
		int i = ft_printf("|%9.2d|\n", 4294967295);
		int q = printf("|%9.2d|\n", 4294967295);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------27\n");
	{
		int i = ft_printf("|%10.2d|\n", 4294967295);
		int q = printf("|%10.2d|\n", 4294967295);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------31\n");
	{
		int i = ft_printf("|%11.2d|\n", 4294967295);
		int q = printf("|%11.2d|\n", 4294967295);
		printf("\nq = %d, i = %d", q, i);
	}

	ft_printf("\n-------------------------------------------------------45\n");
	{
		int i = ft_printf("|%09.0d|\n", 4294967295);
		int q = printf("|%09.0d|\n", 4294967295);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------46\n");
	{
		int i = ft_printf("|%09.1d|\n", 4294967295);
		int q = printf("|%09.1d|\n", 4294967295);
		printf("\nq = %d, i = %d", q, i);
	}

	ft_printf("\n-------------------------------------------------------49\n");
	{
		int i = ft_printf("|%010.0d|\n", 4294967295);
		int q = printf("|%010.0d|\n", 4294967295);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------50\n");
	{
		int i = ft_printf("|%010.1d|\n", 4294967295);
		int q = printf("|%010.1d|\n", 4294967295);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------51\n");
	{
		int i = ft_printf("|%010.2d|\n", 4294967295);
		int q = printf("|%010.2d|\n", 4294967295);
		printf("\nq = %d, i = %d", q, i);
	}


	ft_printf("\n-------------------------------------------------------53\n");
	{
		int i = ft_printf("|%011.0d|\n", 4294967295);
		int q = printf("|%011.0d|\n", 4294967295);
		printf("\nq = %d, i = %d", q, i);
	}

	ft_printf("\n-------------------------------------------------------54\n");
	{
		int i = ft_printf("|%011.1d|\n", 4294967295);
		int q = printf("|%011.1d|\n", 4294967295);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------55\n");
	{
		int i = ft_printf("|%011.2d|\n", 4294967295);
		int q = printf("|%011.2d|\n", 4294967295);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------56\n");
	{
		int i = ft_printf("|%011.10d|\n", 4294967295);
		int q = printf("|%011.10d|\n", 4294967295);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------57\n");
	{
		int i = ft_printf("|%09.0d|\n", 4294967295 + 1);
		int q = printf("|%09.0d|\n", 4294967295 + 1);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------58\n");
	{
		int i = ft_printf("|%09.1d|\n", 4294967295 + 1);
		int q = printf("|%09.1d|\n", 4294967295 + 1);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------59\n");
	{
		int i = ft_printf("|%09.2d|\n", 4294967295 + 1);
		int q = printf("|%09.2d|\n", 4294967295 + 1);
		printf("\nq = %d, i = %d", q, i);
	}

	ft_printf("\n-------------------------------------------------------61\n");
	{
		int i = ft_printf("|%010.0d|\n", 4294967295 + 1);
		int q = printf("|%010.0d|\n", 4294967295 + 1);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------62\n");
	{
		int i = ft_printf("|%010.1d|\n", 4294967295 + 1);
		int q = printf("|%010.1d|\n", 4294967295 + 1);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------63\n");
	{
		int i = ft_printf("|%010.2d|\n", 4294967295 + 1);
		int q = printf("|%010.2d|\n", 4294967295 + 1);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------68\n");
	{
		int i = ft_printf("|%011.10d|\n", 4294967295 + 1);
		int q = printf("|%011.10d|\n", 4294967295 + 1);
		printf("\nq = %d, i = %d", q, i);
	}


	ft_printf("\n-------------------------------------------------------70\n");
	{
		int i = ft_printf("|%.0d|\n", 0);
		int q = printf("|%.0d|\n", 0);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------71\n");
	{
		int i = ft_printf("|%.0d|\n", 5);
		int q = printf("|%.0d|\n", 5);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------72\n");
	{
		int i = ft_printf("|%1.d|\n", 0);
		int q = printf("|%1.d|\n", 0);
		printf("\nq = %d, i = %d", q, i);
	}

	ft_printf("\n-------------------------------------------------------73\n");
	{
		int i = ft_printf("|%2.d|\n", 0);
		int q = printf("|%2.0d|\n", 0);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------74\n");
	{
		int i = ft_printf("|%3.d|\n", 0);
		int q = printf("|%3.d|\n", 0);
		printf("\nq = %d, i = %d", q, i);
	}


	ft_printf("\n-------------------------------------------------------25\n");
	{
		int i = ft_printf("|%10.0d|\n", 4294967295);
		int q = printf("|%010.0d|\n", 4294967295);
		printf("\nq = %d, i = %d", q, i);
	}

	ft_printf("\n-------------------------------------------------------26\n");
	{
		int i = ft_printf("|%10.1d|\n", 4294967295);
		int q = printf("|%10.1d|\n", 4294967295);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------29\n");
	{
		int i = ft_printf("|%11.0d|\n", 4294967295);
		int q = printf("|%11.0d|\n", 4294967295);
		printf("\nq = %d, i = %d", q, i);
	}
	ft_printf("\n-------------------------------------------------------30\n");
	{
		int i = ft_printf("|%11.1d|\n", 4294967295);
		int q = printf("|%11.1d|\n", 4294967295);
		printf("\nq = %d, i = %d", q, i);
	}
	
/*
	{
		int i = ft_printf("| 0*%0-*.*u*0 0*%0*.*u*0 |\n", 2, 6, 102, 21, 10, -101);
		int q = printf("| 0*%0-*.*u*0 0*%0*.*u*0 |\n", 2, 6, 102, 21, 10, -101);
		printf("\nq = %d, i = %d\n", q, i);
	}
	
	{
		int i = ft_printf("|%0*x|\n", 21, -1011);
		int q = printf("|%0*x|\n", 21, -1011);
		printf("\nq = %d, i = %d", q, i);
	}
	{
		int i = ft_printf("|%.p|\n", NULL);
		int q = printf("|%p|\n", NULL);
		printf("\nq = %d, i = %d", q, i);
	}
	
	//ft_printf("|%5%|\n");
	printf("|%-5%|\n");
	ft_printf("|%0*.*s|\n", 10, 2, "hello");
	printf("|%0*.*s|\n", 10, 2, "hello");

	ft_printf("------------\n");
	ft_printf("|%03x|\n", 698334);
	printf("|%03x|\n", 698334);
	ft_printf("------------\n");
	ft_printf("|%0*.*i test|\n",2, -2, 8);
	printf("|%0*.*i test|\n",2, -2, 8);

	ft_printf("|%0.7c|\n", 'Y');
	printf("|%0.7c|\n", 'Y');
	

	ft_printf("|%02x|\n", 698334);
	printf("|%04x|\n", 698334);
	*/
/*
{
	int	q = ft_printf("|%-8.%|");
	printf("\nq = %d", q);
}
*/	
/*
	{
		int i = ft_printf("|%04d|\n", -4825);
		int q = printf("|%04d|\n", -4825);
		printf("i = %d, q = %d\n", i, q);
	}
	*/
/*
	int i = ft_printf("| 0*%0-*u*0 0*%0*u*0 |\n", 21, 1021, 21, -1011);
	int q = printf("| 0*%0-*u*0 0*%0*u*0 |\n", 21, 1021, 21, -1011);
	printf("i = %d, q = %d\n", i, q);
	ft_printf("|%03x|\n", 698334);
	ft_printf("--------------\n");
	ft_printf("|%4.15s|\n", "42");
	printf("|%4.15s|\n", "42");
	ft_printf("--------------\n");
	ft_printf("| %-4s %-4s |\n", "123", "4567");
	printf("| %-4s %-4s |\n", "123", "4567");
	ft_printf("--------------\n");
	ft_printf("| %*s %*s |\n", 1, "123", 10, "4567");
	printf("| %*s %*s |\n", 1, "123", 10, "4567");
	
	ft_printf("--------------\n");
	*/
	ft_printf("|%.5d|\n", -2372);
	printf("|%.5d|\n", -2372);
	
	//ft_printf("\n\nFINAL!!!"); " %*s %*s ", 1, "123", 10, "4567"
	return (0);
}
