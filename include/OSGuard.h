/*
 * OPRoS Component Engine (OCE)
 * Copyright (c) 2008 ETRI. http://www.etri.re.kr.
 * Distributed under the OPRoS License, Version 2.0.
 *
 *  @Created : 2008. 9. 2
 *  @Author  : swjung (swjung@etri.re.kr), sby (sby@etri.re.kr)
 *
 *  @File    : OSGuard.h
 *
 */

#ifndef _OS_GUARD_H
#define _OS_GUARD_H

#include "OSSetting.h"
#include "OSSync.h"

/**
	�� ���� ��ŷ/������ �����ϴ� guard ���� Ŭ����.
*/
class OSGuard
{
private:
	OSSync *m_sync;
	bool m_isLocked;

public:
	OSGuard(OSSync *sync);
	virtual ~OSGuard();

	bool isLocked() { return m_isLocked; };
};

#endif
