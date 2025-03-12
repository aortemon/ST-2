// Copyright 2022 UNN-CS
#ifndef INCLUDE_CIRCLE_H_
#define INCLUDE_CIRCLE_H_
#include <cstdint>

class Circle {
    double radius;
    double ference;
    double area;

 public:
    explicit Circle(double r);

    void setRadius(double);
    void setFerence(double);
    void setArea(double);

    double getRadius() const;
    double getFerence() const;
    double getArea() const;
};

#endif  // INCLUDE_CIRCLE_H_
