#include <stdio.h>
#include <math.h>

struct tipoPonto
{
    int x, y;
};

double distancia(struct tipoPonto pa, struct tipoPonto pb)
{
    double dx = pb.x - pa.x;
    double dy = pb.y - pa.y;

    return sqrt((dx * dx) + (dy * dy));
}