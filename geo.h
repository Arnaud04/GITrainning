#ifndef GEO_H
#define GEO_H


typedef struct Normal Normal; 
struct Normal 
{
	int x; 
	int y;
	int z;
};

typedef struct Point Point; 
struct Point 
{
	int x; 
	int y;
	int z;
};

typedef struct Line Line; 
struct Line 
{
	Point p1;
	Point p2;
};

typedef struct Quad Quad; 
struct Quad
{
	Line *line;
	Normal n;
};

/*
** Create quad from points list ex pa, pb, pc 
** pa is the neigbhore of pb 
** pb is the neighbore of pc
*/
Quad createQuadFromLines(Point *points, int nbPoints);


#endif

