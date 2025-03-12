// Copyright 2022 UNN-CS
#include <cstdint>
#include "circle.h"

void Circle::setRadius(double _r) {
    radius = _r;
    ference = 2 * PI * radius;
    area = PI * radius * radius;
}

void Circle::setFerence(double _f) {
    ference = _f;
    radius = ference / 2 / PI;
    area = ference * ference / 4 / PI;
}

void Circle::setArea(double _a) {
    area = _a;
    radius = sqrt(_a / PI);
    ference = 2 * radius * PI;
}

double Circle::getRadius() {
    return radius;
}
double Circle::getFerence() {
    return ference;
}
double Circle::getArea() {
    return area;
}
