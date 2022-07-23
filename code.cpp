#include <stdio.h>
#include <stdlib.h>

#ifndef MAX_LINE_SIZE
#define MAX_LINE_SIZE 1000
#endif
int demonitize(int C, int D, int V)
{
  int oldIdx=0, newCnt=0;
  long long maxVal=0;
  int D1[D];
  int i;
  for(i=0;i<D;i++)
  {
      scanf("%d ",&D1[i]);
  }

  while(maxVal<V)
  {
      if(oldIdx<D&&D1[oldIdx]<=maxVal+1)
      {
          maxVal+=D1[oldIdx]*C;
          oldIdx++;
      }
      else
      {
          maxVal+=(maxVal+1)*C;
          newCnt++;
      }
  }
  return newCnt;

  return 0;
}

int main() 
{
    int C,D,V;
    scanf("%d %d %d",&C,&D,&V);
    printf("%d", demonitize(C,D,V));

  return 0;
}
