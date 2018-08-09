#ifndef VIDEO_H
#define VIDEO_H
#include"Player.h"
#include<string>
class VideoPlayer:public Player
{
protected:
	string* supportedFormats;
	int supportedFormatCount;
public:
	virtual void BackWard();//backward as virtual
	virtual void EjectMedia();//eject the media
	virtual void Forward();//forwawrd
	void MounthMedia(const string& mediaName);//mount the media
	VideoPlayer(int maxVolumeLevel, string supportedFormats[], int supportedFormatsCount);//counstructor
	~VideoPlayer();//destructor
};
#endif
