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

#define	OPROS_DESTORY_ERROR				 0x10000000	//	복구할 수 없는 에러
#define	OPROS_FIND_DLL_ERROR			 0x10000001	//	DLL 파일을 찾을 수 없는 경우
#define	OPROS_LOAD_DLL_ERROR			 0x10000002	//	DLL에서 제공하는 인터페이스를 로드할 수 없는 경우
#define	OPROS_FIND_PROPERTY_ERROR		 0x10000003	//	컴포넌트에서 필요로 하는 파라미터를 찾을 수 없는 경우
 	
#define	OPROS_INITIALIZE_API_ERROR		 0x10000100	//	API를 초기화 시키는 도중 에러가 발생한 경우
#define	OPROS_FINALIZE_API_ERROR		 0x10000101	//	API를 종료 시키는 도중 에러가 발생한 경우
#define	OPROS_RESET_API_ERROR			 0x10000102	//	API를 재기동 시키는 도중 에러가 발생한 경우
#define	OPROS_RECOVER_API_ERROR			 0x10000103	//	API를 복구시키는 도중 에러가 발생한 경우
	
#define	OPROS_RECOVER_ERROR				 0x20000000	//	복구할 수 있는 에러
#define	OPROS_ENABLE_API_ERROR			 0x20000100	//	API를 활성화 시키는 도중 에러가 발생한 경우
#define	OPROS_DISABLE_API_ERROR			 0x20000101	//	API를 비활성화 시키는 도중 에러가 발생한 경우
#define	OPROS_CALL_API_ERROR			 0x20000102	//	API의 인터페이스를 호출하는 도중 에러가 발생한 경우

// DeviceAPI0.998에 정의된 ReturnType 값을 추가 정의 - KJS (2014.07.10)
#define OPROS_ERROR						302	// 데이터상에 오류가 있는 경우
#define OPROS_VALIDATA					300	// 유효한 데이터가 존재하는 경우
#define OPROS_INVALIDATA				301	// 유효하지 않은 데이터가 존재하는 경우
#define UNKNOWN_ERROR					210		// 알려지지 않은 에러

#define OPROS_API_NOT_SUPPORTED_ERROR	0x20000103	// API에서 인터페이스를 지원하지 않는 경우
#define OPROS_API_EXECUTING				0x20000104	//현재 API를 수행중인 경우, 예를 들어 머니퓰레이터가 초기위치로 이동 중인 경우
#define OPROS_API_SUCCESS				200			// API 수행 성공한 경우
#define OPROS_API_ERROR					302			// API 수행 실패한 경우

#define API_NOT_SUPPORTED				0x20000103	// API에서 인터페이스를 지원하지 않는 경우
#define API_EXECUTING					0x20000104	//현재 API를 수행중인 경우, 예를 들어 머니퓰레이터가 초기위치로 이동 중인 경우
#define API_SUCCESS						200			// API 수행 성공한 경우
#define API_ERROR						302			// API 수행 실패한 경우

#endif /* RETURNTYPE_H_ */
