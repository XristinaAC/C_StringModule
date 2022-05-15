#include <stdio.h>
#include <stddef.h>

/*Returns the length of string pcStr.
It checks the runtime error for string to be NULL.*/
size_t ms_length(const char *string);

/*Returns the original string to which is copied the string newStr.
It checks the runtime error for newStr to be NULL.*/
char *ms_copy(char* original, const char* newStr);

/*Returns the original string to which the n first characters of the
newStr string are copied.It checks the runtime error for newStr to be NULL.
*/
char *ms_ncopy(char *original, const char *newStr, size_t n);

/*Returns the catStr string to which the string Str and the original
 catStr string are concatenated.It checks the runtime error for Str to be NULL.*/
char *ms_concat(char *catStr,const char *Str);

/*Returns the catStr string to which the n first characters of the string
Str and the original catStr string are concatenated.It checks the runtime error for the Str
to be NULL.*/
char *ms_nconcat(char *catStr,const char *Str, size_t n);

/*Return 0 if the two strings are equal,1 if Str2 is less than Str1
and -1 if Str1 is less than Str2.It checks the runtime error for Str1 and Str2 to be NULL.*/
int ms_compare(const char *Str1, const char *Str2);

/*It compares the n first characters of the string Str2 with the characters of the string
Str1. And it returns  0 if the two strings are equal,1 if Str2 is less than Str1
and -1 if Str1 is less than Str2.It checks the runtime error for Str1 and Str2 to be NULL.
*/
int ms_ncompare(const char *Str1, const char *Str2, size_t n);

/*Returns the part of the Str string from where the stirng subStr begins.
It checks the runtime error for Str and subStr to be NULL*/
char *ms_search(const char *Str, const char *subStr);
