// Copyright 2022 UNN-CS
#include "circle.h"
#include "tasks.h"

double earth() {
    const double earth_rad = 6378.1;
    Circle c(earth_rad);
    c.setFerence(c.getFerence() + 0.001);
    return c.getRadius() - earth_rad;
}

double pool() {
    const double pool_rad = 3;
    const double full_rad = pool_rad + 2;
    const double concrete_cost = 1000;
    const double fence_cost = 2000;
    return (Circle(full_rad).getArea() - Circle(pool_rad).getArea()) *
        concrete_cost + Circle(full_rad).getFerence() * fence_cost;
}
