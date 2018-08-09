#ifndef BUGI_H
#define BUGI_H
#include"VideoPlayer.h"
class BugiVideoPlayer:public VideoPlayer
{
public:
	void EjectMedia();//eject the media
	BugiVideoPlayer(int maxVolumeLevel, string supportedFormats[], int supportedFormatsCount);//counstructor
	~BugiVideoPlayer();//destructor
};
#endif
