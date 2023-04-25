#include "main.h"

int main(void)
{	int len;
	char *s = "xyz";
	len = _printf("Let's try to printf a simple sentence.\n");
	_printf("%s\n",s);
	printf("%d\n",len);
	_printf("%c%s",'X',"AHmed");
	return 0;
}


