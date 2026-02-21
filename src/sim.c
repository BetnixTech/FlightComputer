#include "sim.h"

// extern ASM functions
extern void vec3_add(double* out, const double* a, const double* b);

void simInit(SimState* s) {
    memset(s, 0, sizeof(*s));
    s->qw = 1.0;
}

void simStep(SimState* s, double dt) {
    // simple physics example
    s->vy -= 9.81 * dt; // gravity
    s->py += s->vy * dt;
}
