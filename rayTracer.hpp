#ifndef RAYTRACER_HPP_INCLUDED
#define RAYTRACER_HPP_INCLUDED
#include "sphere.hpp"

class rayTracer
{
public:
    rayTracer(sf::Image* Timg);

    sf::Image returnImage(){return *img;}

    sf::Color traceRay(Ray& ray, int depth);
    void render();
private:

    sphere* getNearestSphere(Ray& ray, float& distanceToIntersect);

    std::vector<sphere> spheres;

    sf::Image* img;

    sf::Vector3f cameraPos;
};

#endif // RAYTRACER_HPP_INCLUDED
