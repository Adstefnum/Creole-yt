#include "MathUtilities.h"
#define _USE_MATH_DEFINES
#include <math.h>

float MathUtilities::arccos(float angleInDegrees)
{
   float angleInRadians = angleInDegrees * M_PI / 180.0;
   float arcosInRadians = acos(angleInRadians);
   return arcosInRadians * 180.0 / M_PI;

}
