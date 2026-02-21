#pragma once

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
    double px, py, pz;
    double vx, vy, vz;
    double qx, qy, qz, qw;
    double wx, wy, wz;
} SimState;

void simInit(SimState* s);
void simStep(SimState* s, double dt);

#ifdef __cplusplus
}
#endif
