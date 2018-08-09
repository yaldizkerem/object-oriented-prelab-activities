#ifndef WALKMAN_H
#define WALKMAN_H
#include"MusicPlayer.h"
class Walkman:public MusicPlayer
{
public:
	void EjectMedia();//eject the media
	Walkman(int maxVolumeLevel, string supportedFormats[], int supportedFormatsCount);//constructor
	~Walkman();//destructor
};
#endif
