//
//  draw  drawParallelogram.hpp
//  myFirstWork
//
//  Created by 张航航 on 9/4/16.
//
//

#ifndef draw__drawParallelogram_hpp
#define draw__drawParallelogram_hpp

#include <stdio.h>
#include "ofMain.h"


class drawParallelogram {
public:
    void drawParallelogram(float x, float y,float x1, float w, float h) {
    void draw();
        
        ofDrawLine(x, y, x+w,y);
        ofDrawLine(x, y, x1,y+h);
        ofDrawLine(x1, y, x1+w,y+h);
        ofDrawLine(x1+w, y+h, x+w,y);
    }

    
    
    
};

#endif /* draw__drawParallelogram_hpp */
