#include "stdio.h"
#include "stdlib.h"
#include "geo.h"

/*
** Create quad from points list ex pa, pb, pc 
** pa is the neigbhore of pb 
** pb is the neighbore of pc
*/
Quad createQuadFromLines(Point *points, int nbPoints)
{
	Quad q; 
	//q.l1 = malloc(sizeof(Line)*nbPoints)
	Line *l = malloc(sizeof(Point)*2*nbPoints);
	for(int i=0; i<nbPoints; ++i)
	{
		int nextPt = (i+1) % nbPoints;
		l[i].p1 = points[i];
		l[i].p2 = points[nextPt];
		
	}
	q.line = l;
	free(l);
	return q;
}


