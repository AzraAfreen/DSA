#include <stdio.h>
#include <string.h>
void reverse_string (char *);

 
void reverse_words (char *);

 
 
int 
main () 
{
  
 
char a[100];
  
 
 
gets (a);
  
 
 
reverse_words (a);
  
 
 
printf ("%s\n", a);
  
 
 
return 0;

 
}


 
 
 
void 
reverse_words (char *s) 
{
  
 
char b[100], *temp, *z;
  
 
int i = 0;
  
 
 
temp = s;
  
 
 
while (*temp)
    
 
    {				//processing complete string
      while (*temp != '.' && *temp != '\0')
	
	{			//extracting word from string
	  b[i] = *temp;
	  
 
temp++;
	  
 
i++;
	
 
}
      
 
b[i] = '\0';
      
 
i = 0;
      
 
 
reverse_string (b);	// reverse the extracted word
      
z = b;
      
 
 
while (*z)
	
	{			//copying the reversed word into original string
	  *s = *z;
	  
 
z++;
	  
 
s++;
	
 
}
      
 
 
while (*s == '.')
	
	{			// skipping space(s)
	  s++;
	
 
}
      
 
	/*
	 * You may use if statement in place of while loop if
	 * you are assuming only one space between words. If condition is
	 * used because null terminator can also occur after a word, in
	 * that case we don't want to increment pointer.
	 * if (*s == '.') {
	 *   s++;
	 * }
	 */ 
	temp = s;			// pointing to next word
    }

 
}


 
 
 
/*
 * Function to reverse a word.
 */ 

void 
reverse_string (char *temp) 
{
  
 
int l, i;
  
 
char *e, s;
  
 
 
l = strlen (temp);
  
 
e = temp + l - 1;
  
 
 
for (i = 0; i< l / 2; i++)
    
    {
      
 
s = *temp;
      
 
*temp = *e;
      
 
*e = s;
      
 
temp++;
      
 
e--;
    
 
}

 
}


