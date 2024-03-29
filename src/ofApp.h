#pragma once

#include "ofMain.h"
#include "ofxOsc.h"
#include "receiver.h"
#include "msgDelay.h"


class ofApp : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void mouseEntered(int x, int y);
    void mouseExited(int x, int y);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
    
    ofTexture myDepthTexture;
    ofMesh mesh;
    ofEasyCam cam;
    
    Receiver receiver;
    MsgDelay<Orientation7> camDelay;
    // Caching the previous frame make it easy to get the delta
    uint64_t previousMicroseconds = 0;
    // This is some hacky junk for rotating the camera
    double previousPressTime;// last time the camera was pressed
    ofNode previousControllerAtPressTime;
};
