#ifndef	_BUS_H_
#define	_BUS_H_

#include "OprosDevice.h" // DeviceAPI0.998에 맞게 OPRoS Device 인터페이스 추가 , 2015.07.06 mskim 

class Bus : public OprosDevice
{
public:
	Bus(void) { };
	virtual ~Bus(void) { };

public:
	virtual int Lock(void) { return API_NOT_SUPPORTED; }
	virtual int Unlock(void) { return API_NOT_SUPPORTED; }
};

#endif	//	_BUS_H_