#include "distance.h"

using namespace std;

extern RK_U32 video_width;
extern RK_U32 video_height;

static double euclidean_distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double distance(double x1, double y1, double x2, double y2)
{
    double RangingPoint_x = (x1 + x2) / 2.0; // 测距点取两点中点(可修改为最近点)
    double RangingPoint_y = (y1 + y2) / 2.0;
    double midPoint_x = video_width / 2.0; // 焦点中心坐标
    double midPoint_y = video_height / 2.0;
    // 计算焦点到测距点的像素距离
    double RangingPointToFocus = ZOOM_RATIO * SINGLE_PIXEL_SIZE * euclidean_distance(RangingPoint_x,RangingPoint_y,midPoint_x,midPoint_y) / umTOmm;

    return FOCAL_LENGTH * LENS_HEIGHT / RangingPointToFocus;
}
