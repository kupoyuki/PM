//
//  alertSystem.h
//  AMI
//
//  Created by José María Campaña Rojas on 23/01/14.
//
//

#ifndef __AMI__alertSystem__
#define __AMI__alertSystem__

#include <iostream>
#include "ofMain.h"
#include "messenger.h"

#endif /* defined(__AMI__alertSystem__) */

#pragma once

class alertSystem {
public:
    int *pointer;
    alertSystem(int live_time);
    ~alertSystem();
    void show(string s_msg);
    void draw();
private:
    int life,counter,alert_id;
    string msg;
    bool live;
    
    int fadeGetAlpha(float startFrom);
};