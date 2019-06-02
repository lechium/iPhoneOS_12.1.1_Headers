/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	long long field1;
	long long field2;
	long long field3;
} SCD_Struct_HM1;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

typedef struct __SCDynamicStore* SCDynamicStoreRef;

typedef struct _CFHTTPServerRequest* CFHTTPServerRequestRef;

typedef struct __CFReadStream* CFReadStreamRef;

typedef struct _CFHTTPServerResponse* CFHTTPServerResponseRef;

typedef struct HMFRate {
	unsigned long long value;
	double period;
} HMFRate;

typedef struct _CFHTTPServerConnection* CFHTTPServerConnectionRef;

typedef struct __WiFiManagerClient* WiFiManagerClientRef;

typedef struct __WiFiDeviceClient* WiFiDeviceClientRef;

typedef struct __WiFiNetwork* WiFiNetworkRef;

typedef struct _CFHTTPServer* CFHTTPServerRef;

typedef struct IONotificationPort* IONotificationPortRef;

typedef struct MGNotificationTokenStruct* MGNotificationTokenStructRef;

typedef struct __CFHTTPMessage* CFHTTPMessageRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct os_unfair_recursive_lock_s {
	os_unfair_lock_s ourl_lock;
	unsigned ourl_count;
} os_unfair_recursive_lock_s;
