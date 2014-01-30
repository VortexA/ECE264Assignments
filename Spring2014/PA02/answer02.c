#include "answer02.h"

size_t my_strlen(const char * str){
	int i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int my_countchar(const char * str, char ch){
	int i = 0;
	int count = 0;
	for(;str[i]!='\0';i++)
		if(str[i]==ch)
			count++;
	return (count);
}

char * my_strchr(const char * str, int ch){
	int i = 0;
	while(1)
	{
		if(str[i]==ch)
			return (char *)&str[i];
		if(str[i]=='\0')
			return NULL;
		i++;
	}
}

char * my_strrchr(const char * str, int ch){
	int i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	while(1)
	{
		if(str[i]==ch)
			return (char *)&str[i];
		if(i==0)
			return NULL;
		i--;
	}
}

char * my_strstr(const char * haystack, const char * needle){
	int i = 0;
	int j = 0;
	if(needle[0]=='\0')
		return (char *)haystack;
	for(;haystack[i]!='\0';i++)
	{
		if(haystack[i]==needle[0])
		{
			for(j=0;needle[j]!='\0';j++)
				if(needle[j]!=haystack[i+j])
					break;
			if(needle[j]=='\0')
				return (char *)&haystack[i];
		}
	}
	return NULL;
}

char * my_strcpy(char * dest, const char * src){
	char *temp=dest;
	while(1)
	{
		*dest=*src;
		if(*src=='\0')
			break;
		dest++;
		src++;
	}
	return temp;
}

char * my_strcat(char * dest, const char * src){
	size_t lengthd = 0;
	size_t lengths = 0;
	int i = 0;
	lengths = my_strlen(src);
	lengthd = my_strlen(dest);

	for (i=0; i <= lengths; ++i)
	{
		dest[i+lengthd] = src[i];/* code */
	}
	return dest;
}

int my_isspace(int ch){
	if (ch == ' ' || ch == '\f' || ch == '\n' || ch == '\r' || ch == '\t' || ch == '\v')
	{
		return 1;/* code */
	}else{
		return 0;
	}
}

int my_atoi(const char * str){
	int ret = 0;
	size_t length = 0;
	int minus = 0;
	int i = 0;
	length = my_strlen(str);

	for (; i < length; ++i)
	{
		if (my_isspace(str[i])){
		}else{
			if (str[i] == '-')
			{
				minus = 1;/* code */
			}else if (str[i] >= '0' && str[i] <= '9')
			{
				ret *= 10;
				ret += (str[i] - '0');/* code */
			}
		}

		/* code */
	}
	if (minus == 1)
	{
		return(-ret);/* code */
	}else{
		return(ret);
	}
	
}
