#include<stdio.h>
#include<string.h>
int main() // Corrected from 'main()' to 'int main()' to specify the return type.
{
  char a[100];
  int i,j,n,temp,count=0;
  scanf("%s",a);
  n=strlen(a);
  for(i=0;i<n;i++)
  {
    if(a[0]==a[i])
    count++; // Corrected from 'coun++' to 'count++'.
  }
  if(count==n) // Changed the condition to check if all characters are the same as the first character.
  {
    printf("-1");
  }
  else
  {
    // Sort the array in ascending order
    for(i=0;i<n;i++)
    {
      for(j=i+1;j<n;j++)
      {
        if(a[j]<a[i]) // Corrected from '<=' to '<' to properly sort the array.
        {
          temp=a[j];
          a[j]=a[i];
          a[i]=temp;
        }
      }
    }
    count=0; // Reset count to 0 to reuse it for a new purpose
    for(i=1;i<n;i++)
    {
      if(a[0]!=a[i]) // Count characters not matching the first character.
      count++;
    }
    printf("%d",count); // Print the count of characters not matching the first character.
  }
  return 0; // Added return statement which is good practice in C.
}

