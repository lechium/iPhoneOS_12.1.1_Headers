/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:28 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface __NSCFURLLocalStreamTaskWork : NSObject {

	const char* _static_description;
	double _timeout;
	double _timeoutTime;
	NSError* _recvdError;
	BOOL _hasBeenCalledBack;
	BOOL _timerStarted;

}
-(id)initWithDescription:(const char*)arg1 ;
-(const char*)_static_description;
-(id)description;
@end

