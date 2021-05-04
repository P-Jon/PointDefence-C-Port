#include "pd_core.h"
#include <math.h>

float CalculateAngle(Missile *missile)
{
    return atan(missile->targetXDistance / missile->targetYDistance);
}

void CalculateRotation(Missile *missile)
{
    int baseRotation = 90;
    // Check if allied to invert...
    missile->roatation = baseRotation + (atan2(missile->targetYDistance, missile->targetXDistance) * (180 / 3.14f));
}

Vector2 CalculateTrajectory(Missile *missile)
{
    float angle = CalculateAngle(missile);
    missile->increments = (Vector2){sin(angle), cos(angle)};
}

void check_collision()
{
}

void check_base_hit()
{
}