#ifndef _TEST_APP
#define _TEST_APP


#include "ofMain.h"
#include "ofxOpenCv.h"
#include "ofxCvBrightnessContrast.h"

#define CAM_W 640
#define CAM_H 480

class testApp : public ofBaseApp{
public:
	void setup();
	void update();
	void draw();
	
	void keyPressed  (int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void windowResized(int w, int h);
	
	ofVideoGrabber cam;
	ofxCvColorImage camImg;
	ofxCvBrightnessContrast brightnessContrast;
	float contrast, brightness;
};

#endif
