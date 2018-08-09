#ifndef VLC_H
#define VLC_H
#include"VideoPlayer.h"
class VLCVideoPlayer :public VideoPlayer
{
public:
	void BackWard();//backward
	void Forward();//forward
	void VolumeDown(int amount);//volume up
	void VolumeUp(int amount);//vomlume down
	VLCVideoPlayer(int maxVolumeLevel, string supportedFormats[], int supportedFormatsCount);//counstructor
	~VLCVideoPlayer();//destructor
};
#endif
