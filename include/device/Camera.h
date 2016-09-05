#ifndef	_CAMERA_H_
#define	_CAMERA_H_

#include "OprosDevice.h"

#include "CameraData.h"

class Camera : public OprosDevice
{
public:
	Camera(void) { };
	virtual ~Camera(void) { };

public:
	//virtual int32_t GetImage(uint8_t *image) { return API_NOT_SUPPORTED; };
	// DeviceAPI0.998에 맞게 인자의 타입 변경(uint8_t -> PRoS::CameraData) , KJS (20140710)
	//virtual int32_t GetImage(OPRoS::CameraData *image) { return API_NOT_SUPPORTED; };
	virtual int32_t GetImage(OPRoS::CameraData &image) { return API_NOT_SUPPORTED; };
	virtual int32_t StartPushImage(int32_t period, int32_t format, int32_t width, int32_t height, void *callback, void *arg) { return API_NOT_SUPPORTED; };
	virtual int32_t StopPushImage(void) { return API_NOT_SUPPORTED; };
};


#endif	//	_CAMERA_H_