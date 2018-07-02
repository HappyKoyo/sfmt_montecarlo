#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "SFMT.h"

int main()
{
  int i,cnt;
  double x,y,pi;
  
  sfmt_t sfmt;
  int seed = time(NULL);
  sfmt_init_gen_rand( &sfmt, seed );
  uint64_t v;

  for(i=0; i<10000; i++){
    v = sfmt_genrand_uint64( &sfmt );
    x = sfmt_to_res53( v );
    v = sfmt_genrand_uint64( &sfmt );
    y = sfmt_to_res53( v );
    printf("[%5d]%lf,%lf\n",i,x,y);
    if(x*x+y*y < 1){
      cnt++;
    }
  }
  pi = (float)cnt / 10000.0 * 4;
  printf("[%5d] %f \n",cnt,pi);
  
  
  printf("hello\n");
}
