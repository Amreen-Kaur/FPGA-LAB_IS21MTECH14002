#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X[8] = { 0, 0, 0, 0, 1, 1, 1, 1};
    int Y[8] = { 0, 0, 1, 1, 0, 0, 1, 1};
    int Z[8] = { 0, 1, 0, 1, 0, 1, 0, 1};
	int a[8],b[8],c[8],fn[8];
    int i;

    for (i = 0; i < 8; i++) 
	{

        // using the NAND logic
        a[i]= (!(!X[i] && Y[i] ));
        b[i]= (!(Y[i] && !Z[i]));
        c[i]= (!(X[i] && !Y[i] && Z[i]));
		fn[i]=(!(!((!(!(a[i] && b[i]))) && (c[i]))));
        printf("\n %d %d %d  %d\n",X[i],Y[i],Z[i],fn[i]);
    }
}
