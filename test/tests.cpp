// Copyright 2025 UNN-CS Team
#include <gtest/gtest.h>
#include <cstdint>
#include "tasks.h"



TEST(class_circle, can_create_with_rad_1) {
    Circle c;
    c.setRadius(1.0);
    EXPECT_DOUBLE_EQ(c.getRadius(), 1.0);
}
TEST(class_circle, can_get_ference) {
    Circle c;
    c.setRadius(1.0);
    EXPECT_NEAR(c.getFerence(), 2*PI, 1e-6);
}
TEST(class_circle, can_get_area) {
    Circle c;
    c.setRadius(1.0);
    EXPECT_DOUBLE_EQ(c.getArea(), PI);
}

TEST(class_circle, calculate_ference) {
    Circle c;
    c.setRadius(2.0);
    EXPECT_NEAR(c.getFerence(), 4 * PI, 1e-6);
}

TEST(class_circle, calculate_area) {
    Circle c;
    c.setRadius(2.0);
    EXPECT_NEAR(c.getArea(), 4 * PI, 1e-6);
}

TEST(class_circle, can_set_ference) {
    Circle c;
    c.setFerence(9.0);
    EXPECT_NEAR(c.getRadius(), 1.4323944, 1e-6);
    EXPECT_NEAR(c.getArea(), 6.4457752, 1e-6);
}

TEST(class_circle, can_set_area) {
    Circle c;
    c.setArea(9.0);
    EXPECT_NEAR(c.getRadius(), 1.69256875, 1e-6);
    EXPECT_NEAR(c.getFerence(), 10.6347231, 1e-6);
}

TEST(class_circle, can_create_with_rad_0) {
    Circle c;
    c.setRadius(0.0);
    EXPECT_DOUBLE_EQ(c.getRadius(), 0.0);
    EXPECT_DOUBLE_EQ(c.getFerence(), 0.0);
    EXPECT_DOUBLE_EQ(c.getArea(), 0.0);
}

TEST(class_circle, can_create_with_large_rad) {
    Circle c;
    c.setRadius(100000);
    EXPECT_DOUBLE_EQ(c.getRadius(), 100000);
    EXPECT_NEAR(c.getFerence(), 628318.5307179, 1e-6);
    EXPECT_NEAR(c.getArea(), 31415926535.897932, 1e-6);
}
TEST(class_circle, rad_26_2) {
    Circle c;
    c.setRadius(26.2);
    EXPECT_DOUBLE_EQ(c.getRadius(), 26.2);
    EXPECT_NEAR(c.getFerence(), 164.61945504, 1e-6);
    EXPECT_NEAR(c.getArea(), 2156.51486113, 1e-6);
}
TEST(class_circle, rad_2) {
    Circle c;
    c.setRadius(2.0);
    EXPECT_DOUBLE_EQ(c.getRadius(), 2.0);
    EXPECT_NEAR(c.getFerence(), 12.5663706, 1e-6);
    EXPECT_NEAR(c.getArea(), 12.5663706, 1e-6);
}
TEST(class_circle, rad_36) {
    Circle c;
    c.setRadius(36.0);
    EXPECT_DOUBLE_EQ(c.getRadius(), 36.0);
    EXPECT_NEAR(c.getFerence(), 226.194671, 1e-6);
    EXPECT_NEAR(c.getArea(), 4071.504079, 1e-6);
}
TEST(class_circle, rad_160) {
    Circle c;
    c.setRadius(160.0);
    EXPECT_DOUBLE_EQ(c.getRadius(), 160.0);
    EXPECT_NEAR(c.getFerence(), 1005.309649, 1e-6);
    EXPECT_NEAR(c.getArea(), 80424.771931, 1e-6);
}
TEST(class_circle, ference_50) {
    Circle c;
    c.setFerence(50);
    EXPECT_NEAR(c.getRadius(), 7.957747, 1e-6);
    EXPECT_NEAR(c.getArea(), 198.943679, 1e-6);
}
TEST(class_circle, ference_120) {
    Circle c;
    c.setFerence(120.0);
    EXPECT_NEAR(c.getRadius(), 19.0985932, 1e-6);
    EXPECT_NEAR(c.getArea(), 1145.9155902, 1e-6);
}
TEST(class_circle, ference_555) {
    Circle c;
    c.setFerence(555.0);
    EXPECT_NEAR(c.getRadius(),88.3309934, 1e-6);
    EXPECT_NEAR(c.getArea(), 24511.850672, 1e-6);
}
TEST(class_circle, area_25) {
    Circle c;
    c.setArea(25.0);
    EXPECT_NEAR(c.getRadius(), 2.8209479, 1e-6);
    EXPECT_NEAR(c.getFerence(), 17.7245385, 1e-6);
}
TEST(class_circle, area_1) {
    Circle c;
    c.setArea(9.0);
    EXPECT_NEAR(c.getRadius(), 0.56418958, 1e-6);
    EXPECT_NEAR(c.getFerence(), 3.5449077, 1e-6);
}
TEST(class_circle, area_80) {
    Circle c;
    c.setArea(9.0);
    EXPECT_NEAR(c.getRadius(), 5.04626504, 1e-6);
    EXPECT_NEAR(c.getFerence(), 21.70661838, 1e-6);
}

TEST(test_task_1, earth_and_roop) {
    double out = Earth_Roop();
    EXPECT_NEAR(out, 40074.7904909, 1e-6);
}
TEST(test_task_2, pool) {
    double out = Pool();
    EXPECT_NEAR(out, 72256.63, 1e-2);
}
