#ifndef MUSIC_H
#define MUSIC_H
#include"Player.h"
#include<string>
class MusicPlayer:public Player
{
protected:
	int supportedFormatCount;
	string* supportedFormats;
public:
	virtual void BackWard();//backward as virtual
	virtual void Forward();//forward as virtual
	virtual void EjectMedia();//eject he media
	void MounthMedia(const string& mediaName);//mount the media
	MusicPlayer(int maxVolumeLevel, string supportedFormats[], int supportedFormatCount);//counstructor
	~MusicPlayer();//destructor
};
#endif
