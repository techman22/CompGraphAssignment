#pragma once

#include "ofMain.h"
#include "ParticleGen.h"
#include "ParticleSystem.h"
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
		
	private:
		ofMesh partMesh;
		ofMesh quad;
		ofShader shader;
		ofShader quadShader;
		ofImage img;
		ofImage img2;
		ofImage img3;
		ofImage cometImg;
		ofImage cometImg2;
		ofImage cometImg3;
		ofImage cometImg4;
		ofImage cometImg5;

		ParticleGen particleGenerator{};
		ParticleSystem<SimpleParticle> particleSystem{ particleGenerator, 30, 20.0f };
};
