#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int n, height;
  do
  {
    n = get_int("Height:");
  }
  while (n < 1 || n > 8);

  // print row hashes for left pyramid
  for (int i = 0; i < n ; i++)

{
 // print spaces for left pyramid
      for( int space = 0; space < n-i-1; space++)
      printf(" ");

  // print column hashes
  for(int j= 0; j <= i; j++ )
  printf("#");
  //print gap
  printf("  ");

  {
  for (int x = 0; x <= i; x++)
    printf("#");


  }
  printf("\n");


}
}