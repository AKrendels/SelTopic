#include "tree_based_quadrants.h"

void child (const quadrant_t * q, quadrant_t * child_quadrant,
                           int child_id)
{
    child_quadrant->level = q->level + 1;

    child_quadrant->x = q->x + (child_id & 1 ? QUADRANT_LEN(child_quadrant->level) : 0);

    child_quadrant->y = q->y + (child_id & 2 ? QUADRANT_LEN(child_quadrant->level) : 0);

    child_quadrant->z = q->z + (child_id & 4 ? QUADRANT_LEN(child_quadrant->level) : 0);

}
