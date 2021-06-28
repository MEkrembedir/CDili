#include <stdio.h>

int main(void)
{
  int *ip, id; 
  // ip pointer adresi *ip ve id  ise int degerdir.
  id = 21;
  //ip ve id aynı pointer adresindedir.
  ip = &id; 

  printf("id değişken değeri: %d\n", *ip);
  printf("%p\n",ip);
  printf("%p",&id);
  
  return 0;
}
