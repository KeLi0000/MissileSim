//
//  MomentContributor.hpp
//  MissileSim
//
//  Created by Christian J Howard on 4/24/16.
//  Copyright © 2016 Christian Howard. All rights reserved.
//

#ifndef MomentContributor_h
#define MomentContributor_h

#include "vec3.hpp"

class MomentContributor {
public:
    virtual vec3 getMoment(double time) = 0;
};

#endif /* MomentContributor_h */
