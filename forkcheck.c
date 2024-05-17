#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

void main()
{
    fork();
    fork();
    printf("Hello\n");
    fork();
    printf("Welcome\n");
}

Time	0	10	20	25	30	40	55	70	75	85	95	100	115	120	135	140	155	160	170	180	185
Job	    p0	p1	p2	p2	p2	p1	p1	p1	p0	p0	p3	p3	p4	p4	p4	p4	p4	p4	p4	p4	
