先来看看两者在获取斐波那契数列代码上的差异：
- Python
```python
flib=[0,1]
for m in range(2,20):
    flib.append(flib[m-2]+flib[m-1])

print(flib)

```

- C
```c
#include <stdio.h>

int main( )
{
   unsigned int m;	 
   unsigned int  flib[20]={0,1};
   
   for( m=2; m<20;m++)
   {
   	 flib[m] = flib[m-2]+flib[m-1];
   }
   
   for(m=0;m<20;m++)
   {
   	  printf("flib[%u]=%u\n",m,flib[m]);
   }
   	
   while(1);
   return 0;

}
```

