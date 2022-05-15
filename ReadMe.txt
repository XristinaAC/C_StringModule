The exersice creates the module "MyString", which module contains the implementations of the mostly used string functions from the C standard library which functions are contained in the string.h header file. 
In particular, the module MyString will contain the following functions, which will behave like the corresponding functions in C:
      
	- strlen  -> ms_length
	- strcpy  -> ms_copy
	- strncpy -> ms_ncopy
	- strcat  -> ms_concat
	- strncat -> ms_nconcat
	- strcmp  -> ms_compare
	- strncmp -> ms_ncompare
	- strstr  -> ms_search

The module is implemented using arrays in the file "mystring_ars.c" and pointers in the file "mystring_ptrs.c".