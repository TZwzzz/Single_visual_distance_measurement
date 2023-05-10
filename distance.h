#ifndef DISTANCE_H_
#define DISTANCE_H_

#include <iostream>
#include <math.h>
#include "rkmedia_api.h"

#define umTOmm 1000.0
#define SINGLE_PIXEL_SIZE 2.0 //um
#define FOCAL_LENGTH 4.4 //mm
#define LENS_HEIGHT (90.0-25.0-9.03) //mm
#define ZOOM_RATIO (2704.0/video_width)



double distance(double x1, double y1, double x2, double y2);

#endif
