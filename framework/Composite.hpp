/* 
 * File:   Composite.hpp
 * Author: Benedikt Vogler
 *
 * Created on 21. August 2014, 10:51
 */

#ifndef COMPOSITE_HPP
#define	COMPOSITE_HPP

#include "RenderObject.hpp"
#include <vector>


class Composite : public RenderObject {
public:
    Composite(string const& name):
        RenderObject(name,Material())
    {}
    
    void add_child(RenderObject* const& child);
    virtual Intersection intersect(const Ray& ray) const;
    virtual void translate(glm::vec4 const& translateLocation);
    virtual void rotate(int angle, const glm::vec3& vector);
    virtual void scale(double scale);

private:
    std::vector<RenderObject*> children;

};

#endif	/* COMPOSITE_HPP */

