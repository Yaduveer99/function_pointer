#include <stdio.h>

typedef void (*fpCallToLib)(void* pRefData, int a);

//*fpCallToLib gCall;

void sum(int a, int b);

void InitializeLibJoin(fpCallToLib call, void* pRefData);
