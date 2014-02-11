/*
  * The program prints the sequence of the numbers for typing in old mobile keyboard layout. 
  * Sequence to type "abcc" will be. And a pause for re-typing the same character consecutively is represented by a space.
  * for abcc - 2 22 222 222
  * for bad - 22 23
  * for badd - 22 23 3 
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *str = new char[1500];
    gets(str);
   
    char *c;
    //c = (char *)malloc(sizeof(char));
    c=str;
   
    while(*c)
    {
        int num;
        if(*c == ' ')
        {
            num=0;
            printf("%d", num);
        }
        
        if(*c == 'a')
        {
            if(*(c+1) == 'b' or *(c+1) == 'c' or *(c+1) == 'a')
            {
             num=2;
             printf("%d ", num);
            }
            else
            {
             num=2;
             printf("%d", num);
            }
        }
        
    if(*c == 'b')
        {
            if(*(c+1) == 'a' or *(c+1) == 'c' or *(c+1) == 'b')
            {
             num=22;
             printf("%d ", num);
            }
            else
            {
             num=22;
             printf("%d", num);
            }
        }
     
    if(*c == 'c')
    {
        {
            if(*(c+1) == 'a' or *(c+1) == 'b' or *(c+1) == 'c')
            {
             num=222;
             printf("%d ", num);
            }
            else
            {
             num=222;
             printf("%d", num);
            }
        }
    }
     if(*c == 'd')
        {
            if(*(c+1) == 'e' or *(c+1) == 'f' or *(c+1) == 'd')
            {
             num=3;
             printf("%d ", num);
            }
            else
            {
             num=3;
             printf("%d", num);
            }
        }
     if(*c == 'e')
       {
            if(*(c+1) == 'd' or *(c+1) == 'f' or *(c+1) == 'e')
            {
             num=33;
             printf("%d ", num);
            }
            else
            {
             num=33;
             printf("%d", num);
            }
        }
     if(*c == 'f')
        {
            if(*(c+1) == 'd' or *(c+1) == 'e' or *(c+1) == 'f')
            {
             num=333;
             printf("%d ", num);
            }
            else
            {
             num=333;
             printf("%d", num);
            }
        }
     if(*c == 'g')
       {
            if(*(c+1) == 'h' or *(c+1) == 'i' or *(c+1) == 'g')
            {
             num=4;
             printf("%d ", num);
            }
            else
            {
             num=4;
             printf("%d", num);
            }
        }
     if(*c == 'h')
        {
            if(*(c+1) == 'g' or *(c+1) == 'i' or *(c+1) == 'h')
            {
             num=44;
             printf("%d ", num);
            }
            else
            {
             num=44;
             printf("%d", num);
            }
        }
     if(*c == 'i')
        {
            if(*(c+1) == 'g' or *(c+1) == 'h' or *(c+1) == 'i')
            {
             num=444;
             printf("%d ", num);
            }
            else
            {
             num=444;
             printf("%d", num);
            }
        }
     if(*c == 'j')
       {
            if(*(c+1) == 'k' or *(c+1) == 'l' or *(c+1) == 'j')
            {
             num=5;
             printf("%d ", num);
            }
            else
            {
             num=5;
             printf("%d", num);
            }
        }
     if(*c == 'k')
        {
            if(*(c+1) == 'j' or *(c+1) == 'i' or *(c+1) == 'k')
            {
             num=55;
             printf("%d ", num);
            }
            else
            {
             num=55;
             printf("%d", num);
            }
        }
     if(*c == 'l')
        {
            if(*(c+1) == 'j' or *(c+1) == 'k' or *(c+1) == 'l')
            {
             num=555;
             printf("%d ", num);
            }
            else
            {
             num=555;
             printf("%d", num);
            }
        }
     if(*c == 'm')
        {
            if(*(c+1) == 'n' or *(c+1) == '0' or *(c+1) == 'm')
            {
             num=6;
             printf("%d ", num);
            }
            else
            {
             num=6;
             printf("%d", num);
            }
        }
     if(*c == 'n')
        {
            if(*(c+1) == 'm' or *(c+1) == 'o' or *(c+1) == 'n')
            {
             num=66;
             printf("%d ", num);
            }
            else
            {
             num=66;
             printf("%d", num);
            }
        }
     if(*c == 'o')
        {
            if(*(c+1) == 'm' or *(c+1) == 'n' or *(c+1) == 'o')
            {
             num=666;
             printf("%d ", num);
            }
            else
            {
             num=666;
             printf("%d", num);
            }
        }
     if(*c == 'p')
        {
            if(*(c+1) == 'q' or *(c+1) == 'r' or *(c+1) == 's' or *(c+1) == 'p')
            {
             num=7;
             printf("%d ", num);
            }
            else
            {
             num=7;
             printf("%d", num);
            }
        }
     if(*c == 'q')
       {
            if(*(c+1) == 'p' or *(c+1) == 'r' or *(c+1) == 's' or *(c+1) == 'q')
            {
             num=77;
             printf("%d ", num);
            }
            else
            {
             num=77;
             printf("%d", num);
            }
        }
     if(*c == 'r')
        {
            if(*(c+1) == 'p' or *(c+1) == 'q' or *(c+1) == 's' or *(c+1) == 'r')
            {
             num=777;
             printf("%d ", num);
            }
            else
            {
             num=777;
             printf("%d", num);
            }
        }
     if(*c == 's')
        {
            if(*(c+1) == 'p' or *(c+1) == 'q' or *(c+1) == 'r' or *(c+1) == 's')
            {
             num=7777;
             printf("%d ", num);
            }
            else
            {
             num=7777;
             printf("%d", num);
            }
        }
     if(*c == 't')
       {
            if(*(c+1) == 'u' or *(c+1) == 'v' or *(c+1) == 't')
            {
             num=8;
             printf("%d ", num);
            }
            else
            {
             num=8;
             printf("%d", num);
            }
        }
     if(*c == 'u')
        {
            if(*(c+1) == 't' or *(c+1) == 'v' or *(c+1) == 'u')
            {
             num=88;
             printf("%d ", num);
            }
            else
            {
             num=88;
             printf("%d", num);
            }
        }
     if(*c == 'v')
        {
            if(*(c+1) == 't' or *(c+1) == 'u' or *(c+1) == 'v')
            {
             num=888;
             printf("%d ", num);
            }
            else
            {
             num=888;
             printf("%d", num);
            }
        }
     if(*c == 'w')
        {
            if(*(c+1) == 'x' or *(c+1) == 'y' or *(c+1) == 'z' or *(c+1) == 'w')
            {
             num=9;
             printf("%d ", num);
            }
            else
            {
             num=9;
             printf("%d", num);
            }
        }
     if(*c == 'x')
        {
            if(*(c+1) == 'w' or *(c+1) == 'y' or *(c+1) == 'z' or *(c+1) == 'x')
            {
             num=99;
             printf("%d ", num);
            }
            else
            {
             num=99;
             printf("%d", num);
            }
        }
     if(*c == 'y')
        {
            if(*(c+1) == 'w' or *(c+1) == 'x' or *(c+1) == 'z' or *(c+1) == 'y')
            {
             num=999;
             printf("%d ", num);
            }
            else
            {
             num=999;
             printf("%d", num);
            }
        }
     if(*c == 'z')
        {
            if(*(c+1) == 'w' or *(c+1) == 'x' or *(c+1) == 'y' or *(c+1) == 'z')
            {
             num=9999;
             printf("%d ", num);
            }
            else
            {
             num=9999;
             printf("%d", num);
            }
     }
    c++;
    }
    return 0;
}
