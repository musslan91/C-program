768#include <stdio.h>
#include "pos3D.h"

void print_pos3D(pos3D v) {
   printf("<%g %g %g>\n", v.x, v.y, v.z);
}

pos3D pos3D_plus(pos3D v1, pos3D v2) {
   pos3D res;
   res.x = v1.x + v2.x;
   res.y = v1.y + v2.y;
   res.z = v1.z + v2.z;
   return res;
}
