#include <iostream>
#include <stdlib.h>
#include <time.h> 
using namespace std; 
int main()
{ 

srand((unsigned)time(NULL)); 
for(int i = 0; i < 1;i++ ) 
        cout << (rand()%(100))+1 << '\t'; 
cout << endl; 
return 0;
}

