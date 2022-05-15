#include <stdio.h>
#include <stddef.h>
#include <assert.h>
#include "mystring.h"

/*P__MS_LENGTH*/
/*The function ms_length when is executed from the computer through
 *a while loop traverses the string that the pointer s_ptr points to.That way we actually determine the length of the string that is
 *given by the user.And that is the value that the function returns. The runtime error that the function checks is if the sting that is given
 is empty or not.
 */
size_t ms_length(const char *s_ptr){
    const char *ptrtemp=s_ptr;
    assert(s_ptr);
    while(*ptrtemp!='\0'){
        ptrtemp++;
    }

    return ptrtemp-s_ptr;
}

/*P__MS_COPY*/
/*The function ms_copy copies the string that the newStr pointer points to, to the memory address
 *that the char pointer original points to. And after the while loop ends it puts the string terminal character at the
 *end of the sting original to prevent "garbage" elements in the memory adrress the string original points to. The function
 *retunrs the original pointer and checks for the runtime error of the newStr pointer to be empty.
 */
char *ms_copy(char* original, const char* newStr){
    assert(newStr);

    while(*newStr!='\0'){
    *original=*newStr;
     original++;
     newStr++;
    }
    *original='\0';

  return original;

}

/*P__MS_NCOPY*/
/*The function ms_copy copies the n first characters of the string in which the newStr pointer points,
 *at the memory address in which the original char pointer points. The function checks whether or not the newStr
 *pointer is null.It returns the original pointer.
 */
char *ms_ncopy(char* original, const char* newStr,size_t n){
    int i=0;
    assert(newStr);

    while(i < n){
    *original=*newStr;
     newStr++;
     original++;
     i++;
    }

    *original='\0';

  return original;
}

/*P__MS_CONCAT*/
/*The function ms_concat puts the string in the memory address that the Str points at the end of
 *the string that the catStr points. First the function traverses the string of the pointer catStr
 *and after it reaches the end of the string starts placing the sting Str in the adrress memory of the catStr
 *pointer. The function returns the catStr pointer and checks whether or not the Str pointer is NULL.
 */
char* ms_concat(char* catStr, const char* Str) {
	assert(Str);

    while(*catStr!='\0'){
        ++catStr;
    }

    while(*Str!='\0'){
        *catStr=*Str;
        ++Str;
        ++catStr;
    }
    *catStr='\0';
    return catStr;
}

/*P__MS_NCONCAT*/
/*The ms_nconcat function does the same thing as the function ms_concat with the only difference
 *that it concatenates only the n first characters of the string Str with the string catStr. The function
 *returns the concatenated string catStr and checks whether or not the Str pointer is null.
 */
char *ms_nconcat(char *catStr,const char *Str, size_t n){
	int i=0;
    assert(Str);

    while(*catStr!='\0'){
        ++catStr;
    }

    while(i < n){
        *catStr=*Str;
        ++Str;
        ++catStr;
        ++i;
    }
    *catStr='\0';
    return catStr;
}


/*P__MS_COMPARE*/
/*The function ms_compare compares the strings Str1 and Str2 according to the position of the letters
 *in the alphabet. If the string Str2 is less that the string Str1 the function returns 1,if the string Str1 is less
 *than the string Str2 the function returns -1 and if they are equal it returns 0. The runtime errors the
 *function checks is whether or not the two strings are empty.
 */
int ms_compare(const char *Str1, const char *Str2){
    assert(Str1);
    assert(Str2);

    while(*Str1 !='\0' || *Str2 !='\0'){
        if(*Str1 > *Str2){
            return 1;
        }
        else if(*Str1 < *Str2){
            return -1;
        }
        else{
            Str1++;
            Str2++;
        }
    }
    return 0;
}


/*P__MS_NCOMPARE*/
/*The function ms_ncompare works as the function ms_compare but it doesn't compare all the charactes
 *of the two strings Str1,Str2. It compares only the n first characters.And it returns the same results for the
 *same cases. The function checks whether or not the two strings Str1 and Str2 are empty and if the n number is
 *negative or not.
 */
int ms_ncompare(const char *Str1, const char *Str2,size_t n){
    int i=0;
    assert(Str1);
    assert(Str2);

    while(i < n){
        if(*Str1 > *Str2){
            return 1;
        }
        else if(*Str1 < *Str2){
            return -1;
        }
        else{
            Str1++;
            Str2++;
            i++;
        }
    }
    return 0;
}

/*P__MS_SEARCH*/
/*The function ms_search searches for the part of the string Str that the string subStr is contained.
 *Thus it returns the subStr string and the rest of the Str string. And if the string subStr does not
 *exist in the Str sting the funtion returns null.The runtime errors the function checks is
 *whether or not the two strings Str and subStr are empty.
 */
char *my_search(const char *Str, const char *subStr){
    size_t  subLen;
    int cmp_res;
    assert(Str);
    assert(subStr);
    subLen = ms_length(subStr);

    while (*Str != '\0'){
        if (*Str == *subStr){
           cmp_res=ms_ncompare(Str, subStr, subLen);
           if(cmp_res==0){
                return ((char *)Str);
        }
        }
        Str++;
    }
    return (NULL);
}
