#ifndef FAN_H
#define FAN_H_

class Fan
{

private:
	int Speed;
	bool On;
	double Radius;

public:
	int setSpeed(int speed)
	{
		Speed = speed;
	}
	bool setOn(bool on)
	{
		On = on;
	}
	double setRadius(int radius)
	{
		Radius = radius;
	}

	Fan()
	{
		Speed = 0;
		On = false;
		Radius = 1;
	}



};

#endif