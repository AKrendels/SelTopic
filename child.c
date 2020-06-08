#include "tree_based_quadrants.h"

void child (const quadrant_t * q, quadrant_t * child_quadrant,
                           int child_id)
{
    if (!is_valid(q))
    {
        printf("The input quadrant q in child() is not valid!\n", );
        return;
    }
    if (!(0<=child_id && child_id <= 7))
    {
        printf("The child_id %i in child() is not valid!\n", child_id);
        return;
    }

    child_quadrant->level = q->level + 1;

    int shift = QUADRANT_LEN(child_quadrant->level);

    child_quadrant->x = q->x + (child_id & 1 ? shift : 0);

    child_quadrant->y = q->y + (child_id & 2 ? shift : 0);

    child_quadrant->z = q->z + (child_id & 4 ? shift : 0);

}
