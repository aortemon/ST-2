// Copyright 2025 UNN-CS Team

#include <gtest/gtest.h>
#include <cstdint>
#include "circle.h"
#include "tasks.h"

#define pi 3.1415926535

TEST(CircleSuite, fails_on_negative_radius) {
    EXPECT_ANY_THROW(Circle(-1));
}

TEST(CircleSuite, can_construct_circle) {
    EXPECT_NO_THROW(Circle(1));
}

TEST(CircleSuite, getRadius_works_well) {
    Circle c(1);
    EXPECT_NEAR(c.getRadius(), 1, 1e-3);
}

TEST(CircleSuite, getArea_works_well) {
    Circle c(1);
    EXPECT_NEAR(c.getArea(), pi, 1e-3);
}

TEST(CircleSuite, getFerence_works_well) {
    Circle c(0.5);
    EXPECT_NEAR(c.getFerence(), pi, 1e-3);
}

TEST(CircleSuite, setRadius_fails_on_negative_arg) {
    Circle c(0.5);
    EXPECT_ANY_THROW(c.setRadius(-1));
}

TEST(CircleSuite, setFerence_fails_on_negative_arg) {
    Circle c(0.5);
    EXPECT_ANY_THROW(c.setFerence(-1));
}

TEST(CircleSuite, setArea_fails_on_negative_arg) {
    Circle c(0.5);
    EXPECT_ANY_THROW(c.setArea(-1));
}

TEST(CircleSuite, setRadius_recalc_other_params) {
    Circle c(0.5);
    c.setRadius(1);
    EXPECT_NEAR(c.getFerence(), 2 * pi, 1e-3);
    EXPECT_NEAR(c.getArea(), pi, 1e-3);
}

TEST(CircleSuite, setFerence_recalc_other_params) {
    Circle c(0.5);
    c.setFerence(2 * pi);
    EXPECT_NEAR(c.getRadius(), 1, 1e-3);
    EXPECT_NEAR(c.getArea(), pi, 1e-3);
}

TEST(CircleSuite, setArea_recalc_other_params) {
    Circle c(0.5);
    c.setArea(pi);
    EXPECT_NEAR(c.getRadius(), 1, 1e-3);
    EXPECT_NEAR(c.getFerence(), 2 * pi, 1e-3);
}

TEST(CircleSuite, check_on_radius_1) {
    const double rad = 1;
    const double ference = 2 * pi * rad;
    const double area = pi * rad * rad;

    Circle c(rad);

    EXPECT_NEAR(c.getFerence(), ference, 1e-3);
    EXPECT_NEAR(c.getArea(), area, 1e-3);
}

TEST(CircleSuite, check_on_radius_2) {
    const double rad = 2;
    const double ference = 2 * pi * rad;
    const double area = pi * rad * rad;

    Circle c(rad);

    EXPECT_NEAR(c.getFerence(), ference, 1e-3);
    EXPECT_NEAR(c.getArea(), area, 1e-3);
}

TEST(CircleSuite, check_on_radius_3) {
    const double rad = 3;
    const double ference = 2 * pi * rad;
    const double area = pi * rad * rad;

    Circle c(rad);

    EXPECT_NEAR(c.getFerence(), ference, 1e-3);
    EXPECT_NEAR(c.getArea(), area, 1e-3);
}

TEST(CircleSuite, check_on_radius_4) {
    const double rad = 4;
    const double ference = 2 * pi * rad;
    const double area = pi * rad * rad;

    Circle c(rad);

    EXPECT_NEAR(c.getFerence(), ference, 1e-3);
    EXPECT_NEAR(c.getArea(), area, 1e-3);
}

TEST(CircleSuite, check_on_radius_5) {
    const double rad = pi;
    const double ference = 2 * pi * rad;
    const double area = pi * rad * rad;

    Circle c(rad);

    EXPECT_NEAR(c.getFerence(), ference, 1e-3);
    EXPECT_NEAR(c.getArea(), area, 1e-3);
}

TEST(CircleSuite, check_on_radius_6) {
    const double rad = 3.01;
    const double ference = 2 * pi * rad;
    const double area = pi * rad * rad;

    Circle c(rad);

    EXPECT_NEAR(c.getFerence(), ference, 1e-3);
    EXPECT_NEAR(c.getArea(), area, 1e-3);
}

TEST(CircleSuite, check_on_radius_7) {
    const double rad = 0.05;
    const double ference = 2 * pi * rad;
    const double area = pi * rad * rad;

    Circle c(rad);

    EXPECT_NEAR(c.getFerence(), ference, 1e-3);
    EXPECT_NEAR(c.getArea(), area, 1e-3);
}

TEST(CircleSuite, check_on_radius_8) {
    const double rad = 228;
    const double ference = 2 * pi * rad;
    const double area = pi * rad * rad;

    Circle c(rad);

    EXPECT_NEAR(c.getFerence(), ference, 1e-3);
    EXPECT_NEAR(c.getArea(), area, 1e-3);
}

TEST(CircleSuite, check_on_radius_9) {
    const double rad = 1e-5;
    const double ference = 2 * pi * rad;
    const double area = pi * rad * rad;

    Circle c(rad);

    EXPECT_NEAR(c.getFerence(), ference, 1e-3);
    EXPECT_NEAR(c.getArea(), area, 1e-3);
}

TEST(CircleSuite, check_on_radius_10) {
    const double rad = 3.33333;
    const double ference = 2 * pi * rad;
    const double area = pi * rad * rad;

    Circle c(rad);

    EXPECT_NEAR(c.getFerence(), ference, 1e-3);
    EXPECT_NEAR(c.getArea(), area, 1e-3);
}

TEST(CircleSuite, check_task_earth) {
    EXPECT_NEAR(earth(), 0.0001591549, 1e-9);
}

TEST(CircleSuite, check_task_pool) {
    EXPECT_NEAR(pool(), 113097.335526, 1e-3);
}
