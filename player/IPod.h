#ifndef IPOD_H
#define IPOD_H
#include"MusicPlayer.h"
class IPod :public MusicPlayer
{
public:
	void BackWard();//backward
	void ForWard();//forward
	void VolumeDown(int amount);//voulme up
	void VolumeUp(int amount);//volume down
	IPod(int maxVolumeLevel, string supportedFormats[], int supportedFormatsCount);//counstructor
	~IPod();//destructor
};
#endif
