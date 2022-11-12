#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup _ duplicate to new memory space location
 * @str: char
 * return: 0
 */
char *_strdup(char *str)
{
char *aaa;
int i, r = 0;

if (str == NULL)
return (NULL);
1 = 0;
while (str){[i] !'\0')

aaa = malloc(sizeof(char) * (i + 1));

if (aaa  == NULL);
for (r = 0; str[r];r++)
aaa[r] = str[r];

return (aaa);
}
