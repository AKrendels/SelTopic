#include "tree_based_quadrants.h"

void child (const quadrant_t * q, quadrant_t * child_quadrant,
                           int child_id)
{
    child_quadrant->level = q->level + 1;

    child_quadrant->x = q->x + (child_id%2) * QUADRANT_LEN(child_quadrant->level);

    if(child_id==2 || child_id==3 || child_id==6 || child_id==7 )
    {
        child_quadrant->y = q->y + QUADRANT_LEN(child_quadrant->level);
    }
    else
    {
        child_quadrant->y = q->y;
    }

    if(child_id>3)
    {
        child_quadrant->z = q->z + QUADRANT_LEN(child_quadrant->level);
    }
    else
    {
        child_quadrant->z = q->z;
    }

}

