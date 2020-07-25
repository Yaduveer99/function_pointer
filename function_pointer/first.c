#include <stdio.h>
#include "first.h"

fpCallToLib gCall= NULL;
//gCall= NULL;
void* gRefData = NULL;

// intializer to connect function pointer with the calling class' static function
void InitializeLibJoin(fpCallToLib call , void* pRefData)
{
printf("\n inside InitializeLibJoin function ");
    gCall = call;
    gRefData = pRefData;
}

void sum(int a, int b)
{

printf("\n inside sum function \n");
int c = a+b;
printf("\n sum = %d",c);
gCall(gRefData,c);
}
