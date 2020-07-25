#include <iostream>

class Task
{
private:
int total;
public:
Task();
static void callToLib(void *pRef, int a);
void second(int a);
};

