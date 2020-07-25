#include <iostream>
#include "second.h"
#ifdef __cplusplus // to include the c files in cpp code
extern "C"
{
#include "../first.h"
}
#endif

using namespace std;

fpCallToLib call; //function pointer daclared in C module
Task::Task()
{
cout<<"this is Task class constructor"<<endl;

//assigning static method's address to functionPointer
call = callToLib;

//call the initialize method of C library
InitializeLibJoin(call , (void*)this);
}

void Task::second(int a)
{
cout<<"\n In second function of cpp"<<endl;
cout<<"sum is = "<<a<<endl;
}

void Task::callToLib(void *pRef, int a)
{
((Task*)pRef)->second(a);
}

int main()
{
cout<< "\n In main function of cpp"<<endl;
Task t1;
cout<< "\n task object created to trigger constructor call"<<endl;
sum(1,2);
return 0;
}

