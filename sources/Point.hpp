#ifndef POINT_HPP
#define POINT_HPP
namespace ariel{};
class Point {
  public:
    double x, y;
    Point(){};
    Point(double n1, double n2){x=n1; y=n2;};
    double distance(Point){return 1;};
};
#endif