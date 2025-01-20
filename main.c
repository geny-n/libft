#include "libft.h"

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <limits.h>

/****************************ft_strmapi****************************/
int	ft_plus(int s)
{
	return (s + 1);
}
/****************************ft_striteri****************************/

void	printNumber(int nbr)
{
    printf("%d\n", nbr);
}
void	myFunction(void (*f)(int))  
{
    for(int i = 0; i < 5; i++) 
    {
        (*f)(i);
    }
}


int main ()
{
/****************************ft_isalpha****************************/
	printf("\n---- isalpha ----\n");
	printf("5 isalpha : %d, real : %d\n", ft_isalpha('5'), isalpha('5'));
	printf("p isalpha : %d, real : %d\n", ft_isalpha('p'), isalpha('p'));
	printf("O isalpha : %d, real : %d\n", ft_isalpha('O'), isalpha('O'));
    printf("%d\n", ft_isalpha(97));
    printf("%d\n", ft_isalpha('A'));
    printf("%d\n", ft_isalpha('5'));
	printf("%d\n", ft_isalpha('a' + 0x100));

/****************************ft_isdigit****************************/
	printf("\n---- isdigit ----\n");
	printf("5 isdigit : %d, real : %d\n", ft_isdigit('5'), isdigit('5'));
	printf("p isdigit : %d, real : %d\n", ft_isdigit('p'), isdigit('p'));
	printf("0 isdigit : %d, real : %d\n", ft_isdigit('0'), isdigit('0'));

    printf("%d\n", ft_isdigit('5'));
    printf("%d\n", ft_isdigit('A'));
    printf("%d\n", ft_isdigit('0'));

/****************************ft_isalnum****************************/
	printf("\n---- isalnum ----\n");
	printf("5 isalnum : %d, real : %d\n", ft_isalnum('5'), isalnum('5'));
	printf("p isalnum : %d, real : %d\n", ft_isalnum('p'), isalnum('p'));
	printf("D isalnum : %d, real : %d\n", ft_isalnum('D'), isalnum('D'));
	printf("! isalnum : %d, real : %d\n", ft_isalnum('!'), isalnum('!'));

	printf("%d\n", ft_isalnum('6'));
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum('B'));
	printf("%d\n", ft_isalnum('^'));

/****************************ft_isascii****************************/
	printf("\n---- isascii ----\n");
    printf("%d\n", ft_isascii('5'));
    printf("%d\n", ft_isascii('A'));
	printf("5 isascii : %d, real : %d\n", ft_isascii('5'), isascii('5'));
	printf("¡ isascii : %d, real : %d\n", ft_isascii(0xA1), isascii(0xA1));

/****************************ft_isprint****************************/
	printf("\n---- isprint ----\n");
	printf("%d\n", ft_isprint('\r'));
    printf("%d\n", ft_isprint('A'));
	printf("5 isprint : %d, real : %d\n", ft_isprint('5'), isprint('5'));
	printf("¥ isprint : %d, real : %d\n", ft_isprint(0xA5), isprint(0xA5));

/****************************ft_strlen****************************/
	printf("\n---- strlen ----\n");
	char s[] = "bonjour";
    printf("%zu\n", strlen(s));
	printf("\"Hello 42\" strlen : %zu, real : %zu\n", ft_strlen("Hello 42"), strlen("Hello 42"));
	printf("\"\" strlen : %zu, real : %zu\n", ft_strlen(""), strlen(""));


/****************************ft_memset****************************/
 	printf("\n---- memset ----\n");

	char str_real[50];
	strcpy(str_real, "Hello 42");
	memset(str_real, '-', 10);
	char str_test[50];
	strcpy(str_test, "Hello 42");
	ft_memset(str_test, '-', 10);
	printf("\"Hello 42\" memset ('-', 10) : %s, real : %s\n", str_test, str_real);

/****************************ft_bzero****************************/
 printf("\n---- bzero ----\n");
	char str_test2[50];
	strcpy(str_test2, "Hello 42");
	ft_bzero(str_test2, 2);
	printf("\"Hello 42\" : %s \n", str_test2);
	
/****************************ft_memcpy****************************/
	printf("\n---- memcpy ----\n");
	char src_real1[50];
	char src_test1[50];
	char dest_real1[50];
	char dest_test1[50];
	strcpy(src_real1, "Lorem ipsum dolor sit amet");
	strcpy(src_test1, "Lorem ipsum dolor sit amet");
	strcpy(dest_real1, "consectetur adipiscing");
	strcpy(dest_test1, "consectetur adipiscing");
	printf("src content : %s,\n dest content : %s\n", src_real1, dest_real1);
	memcpy(dest_real1, src_real1, 6);
	ft_memcpy(dest_test1, src_test1, 6);
	printf("test : %s,\n real : %s\n", dest_test1, dest_real1);


/****************************ft_memmove****************************/
	printf("\n---- memmove ----\n");
	
	char str_test7[] = "123456";
	char str_real7[] = "123456";
	
	ft_memmove(str_test7 + 2, str_test7 + 1, 3);
	memmove(str_real7 + 2, str_real7 + 1, 3);
	
	printf("Test : %s\n", str_test7);
	printf("Real : %s\n", str_real7);

/****************************ft_strlcpy****************************/
printf("\n---- strlcpy ---\n");
	char src_real2[] = "Hello 42 !";
    //char dest_real2[19];
    char dest_test2[19];
   // int src_real2_s;
    int src_test2_s;
    src_test2_s = ft_strlcpy(dest_test2, src_real2, 6);
    //src_real2_s = strlcpy(dest_real2, src_real2, 5);
   // printf("Real : Copied '%s' into '%s', length %d\n", src_real2, dest_test2, src_test2_s);
   printf("Test : Copied '%s' into '%s', length %d\n", src_real2, dest_test2, src_test2_s);

/****************************ft_strlcat****************************/
printf("\n---- strlcat ----\n");
	char src_real6[] = "Hello 42 !";
    //char dest_real6[19];
    char dest_test6[19];
   // int src_real6_s;
    int src_test6_s;
	//strcpy(dest_real6, "Hi, ");
	strcpy(dest_test6, "Hi, ");
    src_test6_s = ft_strlcat(dest_test6, src_real6, 9);
    //src_real6_s = strlcat(dest_real6, src_real6, 9);
    //printf("Real : Added '%s' : '%s', length %d\n", src_real6, dest_real6, src_real6_s);
    printf("Test : Added '%s' : '%s', length %d\n", src_real6, dest_test6, src_test6_s);

/****************************ft_toupper****************************/
 printf("\n---- toupper ----\n");
 printf("%c\n", ft_toupper('t'));
     printf("%c", toupper('t'));
	 printf("\n---- toupper ----\n");
	printf("t, H, 5, k, z toupper : %c, %c, %c, %c, %c\n", ft_toupper('t'), ft_toupper('H'), ft_toupper('5'), ft_toupper('k'), ft_toupper('z'));


/****************************ft_tolower****************************/
 printf("\n---- tolower ----\n");
    printf("%c\n", ft_tolower('T'));
     printf("%c", tolower('T'));

	printf("t, H, 5, k, Z tolower : %c, %c, %c, %c, %c\n", ft_tolower('t'), ft_tolower('H'), ft_tolower('5'), ft_tolower('k'), ft_tolower('Z'));

/****************************ft_strchr****************************/
printf("\n---- strchr ----\n");

	char st_test[] = "hello.world.42";
    char set_test = '.';
    printf("%s\n", ft_strchr(st_test, set_test));
	printf("reel %s\n", strchr(st_test, set_test));
	
	char str_real3[50];
	strcpy(str_real3, "Hello 42 !");
	char *pos_real1 = strchr(str_real3, 'o');
	char *pos_test1 = ft_strchr(str_real3, 'o');
	printf("str : %s : strchr : %s, real : %s\n", str_real3, pos_test1, pos_real1);

/****************************ft_strrchr****************************/
  printf("\n---- strrchr ----\n");
	char st[] = "hello.world.42";
    char set = '.';
    printf("%s\n", ft_strrchr(st,set));
	
	char str_real4[50];
	strcpy(str_real4, "Hello 42 ! ! 24 olleH");
	char *pos_real2 = strrchr(str_real4, 'e');
	char *pos_test2 = ft_strrchr(str_real4, 'e');
	printf("str : %s :\n test : %s,\n real : %s\n", str_real4, pos_test2, pos_real2);


/****************************ft_strncmp****************************/
	printf("\n---- strncmp ----\n");
    char str1[] = "hellm world";
    char str2[] = "hellz world";
    printf("%d\n", ft_strncmp(str1, str2, 5));
	
	printf("(\"abcdef\", \"ABCDEF\", 2) : %d, real : %d\n", ft_strncmp("abcdef", "ABCDEF", 2), strncmp("abcdef", "ABCDEF", 2));
	printf("(\"abcdef\", \"abcdef\", 2) : %d, real : %d\n", ft_strncmp("abcdef", "abcdef", 2), strncmp("abcdef", "abcdef", 2));
	printf("(\"abcdef\", \"abcdey\", 5) : %d, real : %d\n", ft_strncmp("abcdef", "abcdey", 5), strncmp("abcdef", "abcdey", 5));
	printf("(\"abcdef\", \"abcdey\", 6) : %d, real : %d\n", ft_strncmp("abcdef", "abcdey", 6), strncmp("abcdef", "abcdey", 6));
	printf("(\"\\200\", \"\\0\", 6) : %d, real : %d\n", ft_strncmp("\200", "\0", 6), strncmp("\200", "\0", 6));
	

/****************************ft_memchr****************************/
printf("\n---- memchr ----\n");
char s5[] = {0, 1, 2 ,3 ,4 ,5};
    ft_memchr(s5, 2 + 256, 3);
    printf("%s\n", s5);
	char str_real5[50];
	strcpy(str_real5, "Hello 42 !");
	char *pos_real3 = memchr(str_real5, 'o', 5);
	char *pos_test3 = ft_memchr(str_real5, 'o', 5);
	printf("str : %s : memchr : %s, real : %s\n", str_real5, pos_test3, pos_real3);

/****************************ft_memcmp****************************/
printf("\n---- memcmp ----\n");
	char st1[] = {0, 0, 127, 0};
	char st2[] = {0, 0, 42, 0};
    printf("%d\n", ft_memcmp(st1, st2, 4));
	
	/* printf("(\"abcdef\", \"ABCDEF\", 2) : %d, real : %d\n", ft_memcmp("abcdef", "ABCDEF", 2), memcmp("abcdef", "ABCDEF", 2));
	printf("(\"abcdef\", \"abcdef\", 2) : %d, real : %d\n", ft_memcmp("abcdef", "abcdef", 2), memcmp("abcdef", "abcdef", 2));
	printf("(\"abcdef\", \"abcdey\", 5) : %d, real : %d\n", ft_memcmp("abcdef", "abcdey", 5), memcmp("abcdef", "abcdey", 5));
	printf("(\"abcdef\", \"abcdey\", 6) : %d, real : %d\n", ft_memcmp("abcdef", "abcdey", 6), memcmp("abcdef", "abcdey", 6));	
	printf("(\"\\200\", \"\\0\", 6) : %d, real : %d\n", ft_memcmp("\200", "\0", 1), memcmp("\200", "\0", 1));
	 */


/****************************ft_strnstr****************************/

printf("\n---- strnstr ----\n");
char *tab1 = "Hello 42";
	char *tof = "o ";
    printf("%s\n", ft_strnstr(tab1, tof, 6));

	 
	/* 	printf("hay = 'Hello 42', need = '',\n");
		printf("len = 4 : %s\n", ft_strnstr(str, tof, 4));
		printf("hay = 'Hello 42', need = 'lo', len = 5 : %s, real : %s\n", ft_strnstr("Hello 42", "lo", 5), strnstr("Hello 42", "lo", 5));
		printf("hay = 'Hello 42', need = 'lo', len = 100 : %s, real : %s\n", ft_strnstr("Hello 42", "lo", 100), strnstr("Hello 42", "lo", 100));
		printf("hay = 'Hello 42', need = 'uiok', len = 100 : %s, real : %s\n", ft_strnstr("Hello 42", "uiok", 100), strnstr("Hello 42", "uiok", 100));
	 */	

/****************************ft_atoi****************************/
printf("\n---- atoi ----\n");
	char nptr[] = "  -1234ab567";
	printf("%d\n", ft_atoi(nptr));
	
	printf("'1456' : %d, real : %d\n", ft_atoi("1456"), atoi("1456"));
	printf("'-1456' : %d, real : %d\n", ft_atoi("-1456"), atoi("-1456"));
	printf("'   +1456' : %d, real : %d\n", ft_atoi("   +1456"), atoi("   +1456"));
	printf("'   +-+1456' : %d, real : %d\n", ft_atoi("   +-+1456"), atoi("   +-+1456"));
	printf("' y  +-+1456' : %d, real : %d\n", ft_atoi(" y  +-+1456"), atoi(" y  +-+1456"));
	printf("'   145o6' : %d, real : %d\n", ft_atoi("   145o6"), atoi("   145o6"));
	printf("'o' : %d, real : %d\n", ft_atoi("o"), atoi("o"));


/****************************ft_calloc****************************/
   printf("\n---- calloc ----\n");
	int	*calloc_test;
	calloc_test = (int *)ft_calloc(6, sizeof(int));
	printf("Calloc an array of 6 int\n    ");
	for(int i = 0; i < 6; i++)
		printf("%d ", calloc_test[i]);
	printf("\n");
	free(calloc_test);
   
/****************************ft_strdup****************************/
printf("\n---- strdup ----\n");
	char *str9 = "";
	char *str10;
	str10 = ft_strdup(str9);
	printf("Original : %s, Dup : %s\n", str9, str10);
	free(str10);

/****************************PARTIE 2****************************/
printf("\n\n---- PARTIE 2 ----\n\n");

/****************************ft_substr****************************/
	printf("\n---- substr ----\n");
	char *sub = ft_substr("tripouille", 1, 1);
    printf("%s\n", sub);
	
/****************************ft_strjoin****************************/
	printf("\n---- strjoin ----\n");
	char s1[] = "hello";
	char s2[] = "world";
	char *dest1 = ft_strjoin (s1, s2);
	printf("%s\n", dest1);

/****************************ft_strtrim****************************/
	printf("\n---- strtrim ----\n");
	char const *string1 = "zzzzbonzzzjourzzz";
    char const *set1 = "az";
    printf("%s\n",ft_strtrim(string1,set1));

/****************************ft_split****************************/
	printf("\n---- split ----\n");
	char	**result;
	int		cur;

	printf("Hello World    !! :\n");
	result = ft_split("Hello World    !!", ' ');
	cur = -1;
	while (cur++, result[cur] != 0)
		printf("%d => %s\n", cur, result[cur]);

	printf("\naaaa bbbb..cccc .dddd!!eeee :\n");
	result = ft_split("aaaa bbbb..cccc .dddd!!eeee", '.');
	cur = -1;
	while (cur++, result[cur] != 0)
		printf("%d => %s\n", cur, result[cur]);


/****************************ft_itoa****************************/
	printf("\n---- ft_itoa ----\n");
	printf("1 to string : %s\n", ft_itoa(1));
	printf("10 to string : %s\n", ft_itoa(10));
	printf("101 to string : %s\n", ft_itoa(101));
	printf("9090 to string : %s\n", ft_itoa(9090));
	printf("164616 to string : %s\n", ft_itoa(164616));

	printf("0 to string : %s\n", ft_itoa(0));
	
	printf("-1 to string : %s\n", ft_itoa(-1));
	printf("-10 to string : %s\n", ft_itoa(-10));
	printf("-101 to string : %s\n", ft_itoa(-101));
	printf("-9090 to string : %s\n", ft_itoa(-9090));
	printf("-6115048 to string : %s\n", ft_itoa(-6115048));

	printf("2147483647 to string : %s\n", ft_itoa(INT_MAX));
	printf("-2147483648 to string : %s\n", ft_itoa(INT_MIN));

/****************************ft_strmapi****************************/
	printf("\n---- ft_strmapi ----\n");
	int (*fp)(int);
	fp = ft_plus;
	printf("result %d\n", fp(5));

/****************************ft_striteri****************************/
	printf("\n---- ft_striteri ----\n");
	myFunction(printNumber);

/****************************ft_putchar_fd****************************/
	printf("\n---- ft_putchar_fd ----\n");
	char lettre = 'f';
	ft_putchar_fd (lettre, 2);
	printf("\n");

/****************************ft_putstr_fd****************************/
	printf("\n---- ft_putstr_fd ----\n");
	char c[] = "HELLO";
	ft_putstr_fd(c, 2);
	printf("\n");

/****************************ft_putendl_fd****************************/
	printf("\n---- ft_putendl_fd ----\n");
	char d[] = "hello world";
	ft_putendl_fd (d, 2);
	printf("\n");

/****************************ft_putnbr_fd****************************/
	printf("\n---- ft_putnbr_fd ----\n");
	ft_putnbr_fd(214656, 2);
    ft_putchar_fd('\n', 2);
    ft_putnbr_fd(0, 2);
    ft_putchar_fd('\n', 2);
    ft_putnbr_fd(-2146, 2);
    ft_putchar_fd('\n', 2);
    ft_putnbr_fd(-2147483648, 2);
    ft_putchar_fd('\n', 2);
    ft_putnbr_fd(2147483647, 2);
	printf("\n");

	/****************************PARTIE 2****************************/
	printf("\n\n---- PARTIE 2 ----\n\n");

	/****************************ft_lstnew****************************/
	printf("\n---- ft_lstnew ----\n");
}