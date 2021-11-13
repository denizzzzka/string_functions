#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include "str_function.h"



bool Test_my_strlen()
{
    char str[] = "abcde"; 
    if (5 ==  my_strlen(str))
    {
        return true;
    }
    return false;
}

bool Test_my_strcpy()
{
    char str[] = "abcde"; 
    char str_copy [10];
    my_strcpy (str_copy, str);
    for (int i = 0; i < (my_strlen(str_copy) + 1); i++)
    {
        if (str[i] != str_copy[i])
        {
          return false;
        }  
    }
    return true;    
}

bool Test_strchr()
{
    char str[] = "abcde";
    if (*my_strchr(str,  'c') == 'c' && my_strchr(str, 'v') == NULL)
    {
        return true;
    }
    return false;
}

bool Test_strdup()
{
    char str[] = "abcde";
    char * str2;
    str2 = my_strdup(str);
    for (int i = 0; i < 6; i++)
    {
      if (str[i] != str2[i])
        {
            free (str2); 
            return false;
        }  
    }
    free (str2); 
    return true;

}

bool Test_strstr()
{
    char str[] = "abcde";
    if (*my_strstr(str, "cde") == 'c' && my_strstr(str, "ce") == NULL)
    {
        return true;
    }
    return false;

}

bool Test_memchr()
{
    char str[] = "abcde";
    if ( *((char *)my_memchr(str,  'c', 5)) == 'c' &&  ((char *)my_memchr(str,  'v', 5)) == NULL)
    {
        return true;
    }
    return false;
}

bool Test_memset()
{
    char str[] = "abcde";
    my_memset(str, 'v', 3);
    for (int i = 0; i < 3; i++)
    {
        if (str[i] != 'v')
        {
            return false;
        }
    }
    return true;
}

bool Test_memcpy()
{
    char str[] = "abcde";
    char str2[10];
    my_memcpy(str2, str, 5);
    for (int i = 0; i < 5; i++)
    {
      if (str[i] != str2[i])
        {
            return false;
        }  
    } 
    return true;
}

void Run_all_tests ()
{
    assert (true == Test_my_strlen());
    assert (true == Test_my_strcpy());
    assert (true == Test_strchr());
    assert (true == Test_strdup());
    assert (true == Test_strstr());
    assert (true == Test_memchr());
    assert (true == Test_memset());
    assert (true == Test_memcpy());
    printf("All is working\n");
    return;
}
