#ifndef PLAYER_H
#define PLAYER_H
#include<string>
using namespace std;
class Player
{
protected:
	int maxVolumeLevel;
	string mediaName;
	int volumeLevel;
public:
	Player(int maxVolumeLevel = 100);//counstructor
	~Player();//destructor
	virtual void BackWard()=0;//backward as pure virtual
	void Close();//close
	virtual void EjectMedia()=0;//eject the media as virtual
	virtual void Forward()=0;//forward the media as virtual
	virtual void MounthMedia(const string& mediaName)=0;//as pure virtual
	void Open();//open
	void Pause();//pause
	void Play();//play
	void Stop();//stop
	virtual void VolumeDown(int amount);//volume down as virtual
	virtual void VolumeUp(int amount);//volume up as virtual
};
#endif
