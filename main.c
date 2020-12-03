#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

/* Create conflict in remote */
/*******************************************************************************
* Declaration Function
******************************************************************************/
bool allocate10Bytes(uint8_t *outPtr);

/*******************************************************************************
* main coding
******************************************************************************/
int main(int argc, char *argv[]) {
    uint8_t *outPtr=NULL;
    int i;
    bool check = allocate10Bytes(&outPtr);

    if(check)
    {
        printf("Memory successfully allocated!");
        printf("\nAddreess: %x",outPtr);
    }
    else
    {
        printf("\nMemory not allocated!");
        exit(0);
    }
    return 0;
}

/*FUNCTION**********************************************************************
 *
 * Function Name : allocate10Bytes
 * Description   : Memory allocated using malloc
 *
 *END**************************************************************************/
bool allocate10Bytes(uint8_t *outPtr)
{
	uint8_t **m=(uint8_t**)outPtr;
	
    *m=(uint8_t*)malloc(10*sizeof(uint16_t));
    if(outPtr==NULL)
        return false;
    else
    {
        return true;
    }
}
