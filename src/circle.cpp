// Copyright 2022 UNN-CS
#include <cstdint>
#include <cmath>
#include <stdexcept>

#include "circle.h"

#define pi 3.1415926535

Circle::Circle(double rad) {
    if (rad < 0) throw std::invalid_argument("");
    radius = rad;
    ference = 2 * pi * radius;
    area = pi * radius * radius;
}

double Circle::getRadius() const {
    return radius;
}

double Circle::getFerence() const {
    return ference;
}

double Circle::getArea() const  {
    return area;
}

void Circle::setRadius(double x) {
    if (x < 0) throw std::invalid_argument("");
    radius = x;
    ference = 2 * pi * radius;
    area = pi * radius * radius;
}

void Circle::setFerence(double x) {
    if (x < 0) throw std::invalid_argument("");
    ference = x;
    radius = x / 2 / pi;
    area = pi * radius * radius;
}

void Circle::setArea(double x) {
    if (x < 0) throw std::invalid_argument("");
    area = x;
    radius = std::sqrt(x / pi);
    ference = 2 * pi * radius;
}
