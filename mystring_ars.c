#include <stdio.h>
#include <stddef.h>
#include <assert.h>
#include "mystring.h"
#include <string.h>

/*A__MS_LENGTH*/
/*The function ms_length when is executed from the computer through
 *a while loop traverses the s_array string and for each element the counter size_cnt is incremented by one.
 *That way we actually determine the length of the string that is
 *given by the user.And that is the value that the function returns. The runtime error that the function checks is if the sting that is given
 is empty or not.
 */
size_t ms_length(const char s_array[]){
  int size_cnt=0U;
  assert(s_array!=NULL);
  while(s_array[size_cnt]!='\0'){
    size_cnt++;
  }
  return size_cnt;
}


/*A__MS_COPY*/
/*The function ms_copy, after it calculates the length of the string in the array newStr,
 * through a for loop puts the elements of the string in the array newStr in the string array original
 * whether or not it has inside an other string.After the for loop ends and the newStr is copied in the string
 * array original, in the line 51 we put at the position after the sting has ended the string termination character.
 * That happens to prevent "garbage" elements in the string array original if the newStr's length is less than
 * the lenght of the original string array. The function returns the newlly feeled original string array and checks
 * for the runtime error of the newStr to be NULL.
 */
char* ms_copy(char original[], const char newStr[]) {
    int i;
	int newLen=0;
    int oriLen=0;
    assert(newStr != NULL);
	newLen = ms_length(newStr);

	for (i=0; i < newLen; ++i) {
		original[i] = newStr[i];
	}

	original[newLen]='\0';

  return original;
}

/*A__MS_NCOPY*/
/*The functlion ms_ncopy copies n elements of the given string from the user(newString[])
into another string(original[]).The n number of elements is also given from the user.
The function checks whether or not the given string(newString[]) is empty.
It returns the string original with its new content.
*/
char* ms_ncopy(char original[], const char newStr[], size_t n) {
    int i;
    assert(newStr != NULL);

	for (i = 0; i < n; ++i) {
		original[i] = newStr[i];
	}
	original[n]='\0';
    return original;
}

/*A__MS_CONCAT*/
/*The function ms_concat combines two strings to one.That means that we put the
string Str at the end of the string catStr.If the string catStr is empty we just copy
the Str string into the catStr string.The function checks whether of not the string Str
is empty or not and it returns the concatenated catStr array.
*/
char *ms_concat(char catStr[], const char Str[]) {
	int conclen = 0;
	int strlen = 0;
	int i;
    int j;
    assert(Str != NULL);

	conclen = ms_length(catStr);
	strlen = ms_length(Str);
	j = conclen;
	for (i = 0; i < strlen; ++i) {
		catStr[j] = Str[i];
		++j;
	}
	catStr[conclen+i] = '\0';

	return catStr;
}

/*A__MS_NCONCAT*/
/*The function ms_nconcat does the same work as the ms_concat with the only difference that puts at the end
 *of the string in the array catStr only the n first characters of the string in the array Str. The n first chara-
 *cters are given from the user. The function returns the concatenated catStr string array and checks for the runtime
 *error if the string array is empty or not.
 */
char *ms_nconcat(char catStr[],const char Str[], size_t n){
    int conclen=0;
	int i;
    int j;
    assert(Str!=NULL);

	conclen = ms_length(catStr);
	j = conclen;
	for (i = 0; i < n; ++i) {
		catStr[j] = Str[i];
		++j;
	}
	catStr[conclen+i] = '\0';

	return catStr;
}

/*A__MS_COMPARE*/
/*The function ms_compare compares the strings Str1 and Str2 according to the position of the letters
 *in the alphabet. If the string Str2 is less that the string Str1 the function returns 1,if the string Str1 is less
 *than the string Str2 the function returns -1 and if they are equal it returns 0. The runtime errors the
 *function checks is whether or not the two strings are empty.
 */
int ms_compare(const char Str1[], const char Str2[]){
    int i=0;
    assert(Str1!=NULL);
    assert(Str2!=NULL);

    while(Str1[i]!='\0' || Str2[i]!='\0'){// Vazoume || logiko giati den 8eloume na stamathsei otan kai ta duo einai == me to
        if(Str1[i] > Str2[i]){            // \0 alla otan ena apo ta duo ginei iso me auto.
            return 1;
        }
        else if(Str1[i] < Str2[i]){
            return -1;
        }
        else{
            ++i;
        }
    }
    return 0;
}

/*A__MS_NCOMPARE*/
/*The function ms_ncompare works as the function ms_compare but it doesn't compare all the charactes
 *of the two strings Str1,Str2. It compares only the n first characters.And it returns the same results for the
 *same cases. The function checks whether or not the two strings Str1 and Str2 are empty.
 */
int ms_ncompare(const char Str1[], const char Str2[], size_t n){
     int i=0;
     assert(Str1!=NULL);
     assert(Str2!=NULL);

     while(i < n){
        if(Str1[i] > Str2[i]){
            return 1;
        }
        else if(Str1[i] < Str2[i]){
            return -1;
        }
        else{
            ++i;
        }
    }
    return 0;
}

/*A__MS_SEARCH*/
/*The function ms_search searches for the part of the string Str that contains the string subStr.
 *Thus it returns the subStr string and the rest of the Str string. And if the string subStr does not
 *exist in the Str sting the funtion returns null.The runtime errors the function checks is
 *whether or not the two strings Str and subStr are empty.
 */
char *my_search(const char Str[], const char subStr[]){
    int i=0;
    int cmp_res=0;
    int subLen=0;
    assert(Str!=NULL);
    assert(subStr!=NULL);

    subLen=ms_length(subStr);

    while(Str[i] != '\0'){
        if(Str[i]==subStr[0]){
            cmp_res=ms_ncompare(Str, subStr, subLen);
            if(cmp_res==0){
                return ((char *)Str);
            }
        }
        ++i;
    }

    return (NULL);
}
