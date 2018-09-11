/* A simple ("brute strength") solution to the Coconuts problem. */

#include <stdlib.h>
#include <stdio.h>

int main( int argc, char ** argv)
{
    int  m;     /* Maximum N.  Default = 100000. */
    int  n;     /* Initial nut count. */
    int  p;     /* Person counter. */
    int  r;     /* Final nut count, per person. */

    if (argc <= 1)
    {
        m = 0;
    }
    else
    {
        m = atol( argv[ 1]);
    }

    if (m <= 0)
    {
        m = 100000;
    }

    printf( "   At Start     At End\n");

    for (n = 1 ; n <= m ; n++)
    {
        r = n;
        for (p = 1 ; p <= 5 ; p++)
        {
            r = r- 1;
            if (r/ 5* 5 != r)
            {
                p = 0;
                break;
            }
        r = r/ 5* 4;
        }
        if (p == 0) continue;

        if (r/ 5* 5 == r)
        {
            printf( " %10d %10d\n", n, r);
        }
    }
    return 0;
}

