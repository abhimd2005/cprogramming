/* These are comments*/
#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(){
    printf("size of char: %u bytes\n", sizeof(char));
    printf("size of integer: %u bytes\n", sizeof(short int));
    printf("size of float: %u bytes\n", sizeof(float));
    printf("size of double: %u bytes\n", sizeof(double));
    printf("size of long double: %u bytes\n", sizeof(long double));
    printf("min size of signed char: %d\n",SCHAR_MIN);
    printf("max  size of signed char: %d\n",SCHAR_MAX);
    printf("max size of unsigned char: %d\n",UCHAR_MAX);
    printf("SHRT_MIN = %d\n",SHRT_MIN);
    printf("SHRT_MAX = %d\n",SHRT_MAX);
    printf("INT_MIN = %d\n",INT_MIN);
    printf("INT_MAX = %d\n",INT_MAX);
    printf("UINT_MAX = %u\n",UINT_MAX);
    printf("LONG_MIN = %ld\n",LONG_MIN);
    printf("LONG_MAX = %ld\n",LONG_MAX);
    printf("ULONG_MAX = %lu\n",ULONG_MAX);
    printf("FLT_MIN = %e\n",FLT_MIN);
    printf("FLT_MAX = %e\n",FLT_MAX);
    printf("DBL_MIN = %e\n",DBL_MIN);
    printf("DBL_MAX = %e\n",DBL_MAX);
    printf("LDBL_MIN = %e\n",LDBL_MIN);
    printf("LDBL_MAX = %e\n",LDBL_MAX);
    /*Number of digits of precision*/
    printf("FLT_DIG = %d\n",FLT_DIG);
    printf("DBL_DIG = %d\n",DBL_DIG);
    printf("LDBL_DIG = %d\n",LDBL_DIG);
 return 0;   
}