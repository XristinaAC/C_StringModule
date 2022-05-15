#include "mystring.h"
#include <string.h>

int main(){
  const char string_array[] = { "hellofvhjkdfjgk" };
  int len = 0;
  char c_array[5];
  char cn_array[10];
  int result=0,result2=0;
  char *subS;
  const char haystack[30] = "TheUnboxholicsAreAwesome";
  const char needle[10] = "Are";

  len = ms_length(string_array);
  printf("test 1, string length %d \n",len);

  ms_copy(c_array,"unboxholicsAreTheBest");
   printf("first test %s\n",c_array);

  ms_ncopy(cn_array,c_array,6);
  printf("the n-copied chars are %s\n", cn_array);

  ms_concat(c_array, "Forever");
  printf("The concatenated c_array is %s\n",c_array);

  ms_nconcat(c_array,"andEver",5);
  printf("The concatenated c_array is %s\n", c_array);

  result = ms_compare("TutorialPoint","Point");
  printf("The result is %d\n",result);

  result2 = ms_ncompare("Point","Point",5);
  printf("The n result is %d\n",result2);

  subS = my_search(haystack,needle);
  printf("The substring is %s\n",subS);

  return 0;
}
