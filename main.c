#include <stdio.h>
#include <string.h>

void count_upper_lower(char *sentence)
{
     int upper_case_count = 0, lower_case_count = 0;

     while(*sentence)
	 {
	 	if(*sentence >= 'A'  && *sentence  <= 'Z')
			{
					++upper_case_count;
			}

        if(*sentence >= 'a'  && *sentence  <= 'z')
			{
					++lower_case_count;
			}

		++sentence;
	 }

	 printf("\nTotal upper case letters are: %d\n ", upper_case_count);
	  printf("\nTotal lower case letters are: %d\n ", lower_case_count);
}




int main()
{
	char *in_sentence;

	in_sentence = (char *)malloc(100);

    printf("Please enter a sentence\n");
    gets(in_sentence);

   count_upper_lower(in_sentence);
    return 0;
}
