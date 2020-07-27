#include <stdio.h>
#include <stdlib.h>

#define foreach(array, item) \
    for(int keep = 1, \
            count = 0,\
            size = sizeof (array) / sizeof *(array); \
        keep && count != size; \
        keep = !keep, count++) \
      for(item = (array) + count; keep; keep = !keep)
      
    main(){
	  
	int values[] = { 1, 2, 3, 4, 5, 20, 26, 36, 45, 76};

	foreach(values, int *x ) {
    	
		/*if(*x>5)
		{
    		printf("passou");
		}
		else
		{
			printf("não passou");
		}*/
		
		(*x>5) ? printf("passou") : printf("nao passou");
		
		printf("value: %d\n", *x);
		
	}
	
	system("pause");
}
