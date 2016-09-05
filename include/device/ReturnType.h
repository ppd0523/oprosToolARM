/*
 *  OPRoS Component Engine (OCE)
 *  Copyright (c) 2008 ETRI. http://www.etri.re.kr.
 *  Distributed under the OPRoS License, Version 2.0.
 *
 *  @Created : 2009. 2. 19
 *  @Author  : sby (sby@etri.re.kr)
 *
 *  @File    : ReturnType.h
 *
 *
 */

#ifndef RETURNTYPE_API_H_
#define RETURNTYPE_API_H_

#if INT_MAX == 32767
typedef unsigned long ReturnType;
// 16 bit
#else 
// 32bit or 64 bit
typedef unsigned int ReturnType;
#endif 

#define	OPROS_SUCCESS						200
#define	OPROS_SUCCESS_SYNC					202

#define	OPROS_CALLER_ERROR					400
#define	OPROS_BAD_INPUT_PARAMETER			401
#define	OPROS_INPUT_OUT_OF_RANGE			402
#define	OPROS_INPUT_NULL					403
#define	OPROS_UNAUTHORIZED					404
#define	OPROS_PRECONDITION_NOT_MET			405
#define	OPROS_OUT_OF_RESOURCES				408

#define	OPROS_CALLEE_ERROR					500
#define	OPROS_UNSUPPORTED_METHOD			501
#define	OPROS_INTERNAL_FAULT				502
#define	OPROS_VERSION_MISMATCH				505

#define	OPROS_DESTORY_ERROR				 0x10000000	//	������ �� ���� ����
#define	OPROS_FIND_DLL_ERROR			 0x10000001	//	DLL ������ ã�� �� ���� ���
#define	OPROS_LOAD_DLL_ERROR			 0x10000002	//	DLL���� �����ϴ� �������̽��� �ε��� �� ���� ���
#define	OPROS_FIND_PROPERTY_ERROR		 0x10000003	//	������Ʈ���� �ʿ�� �ϴ� �Ķ���͸� ã�� �� ���� ���
 	
#define	OPROS_INITIALIZE_API_ERROR		 0x10000100	//	API�� �ʱ�ȭ ��Ű�� ���� ������ �߻��� ���
#define	OPROS_FINALIZE_API_ERROR		 0x10000101	//	API�� ���� ��Ű�� ���� ������ �߻��� ���
#define	OPROS_RESET_API_ERROR			 0x10000102	//	API�� ��⵿ ��Ű�� ���� ������ �߻��� ���
#define	OPROS_RECOVER_API_ERROR			 0x10000103	//	API�� ������Ű�� ���� ������ �߻��� ���
	
#define	OPROS_RECOVER_ERROR				 0x20000000	//	������ �� �ִ� ����
#define	OPROS_ENABLE_API_ERROR			 0x20000100	//	API�� Ȱ��ȭ ��Ű�� ���� ������ �߻��� ���
#define	OPROS_DISABLE_API_ERROR			 0x20000101	//	API�� ��Ȱ��ȭ ��Ű�� ���� ������ �߻��� ���
#define	OPROS_CALL_API_ERROR			 0x20000102	//	API�� �������̽��� ȣ���ϴ� ���� ������ �߻��� ���

// DeviceAPI0.998�� ���ǵ� ReturnType ���� �߰� ���� - KJS (2014.07.10)
#define OPROS_ERROR						302	// �����ͻ� ������ �ִ� ���
#define OPROS_VALIDATA					300	// ��ȿ�� �����Ͱ� �����ϴ� ���
#define OPROS_INVALIDATA				301	// ��ȿ���� ���� �����Ͱ� �����ϴ� ���
#define UNKNOWN_ERROR					210		// �˷����� ���� ����

#define OPROS_API_NOT_SUPPORTED_ERROR	0x20000103	// API���� �������̽��� �������� �ʴ� ���
#define OPROS_API_EXECUTING				0x20000104	//���� API�� �������� ���, ���� ��� �Ӵ�ǽ�����Ͱ� �ʱ���ġ�� �̵� ���� ���
#define OPROS_API_SUCCESS				200			// API ���� ������ ���
#define OPROS_API_ERROR					302			// API ���� ������ ���

#define API_NOT_SUPPORTED				0x20000103	// API���� �������̽��� �������� �ʴ� ���
#define API_EXECUTING					0x20000104	//���� API�� �������� ���, ���� ��� �Ӵ�ǽ�����Ͱ� �ʱ���ġ�� �̵� ���� ���
#define API_SUCCESS						200			// API ���� ������ ���
#define API_ERROR						302			// API ���� ������ ���

#endif /* RETURNTYPE_H_ */
