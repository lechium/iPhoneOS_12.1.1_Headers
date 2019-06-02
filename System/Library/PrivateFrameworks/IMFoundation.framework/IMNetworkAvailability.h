/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSTimer;

@interface IMNetworkAvailability : NSObject {

	NSString* _guid;
	NSTimer* _timer;
	void* _context;
	double _timeout;
	double _wifiTimeout;
	double _startTime;
	unsigned long long _flags;
	unsigned long long _options;
	/*^block*/id _completionBlock;

}

@property (assign,nonatomic) void* context;              //@synthesize context=_context - In the implementation block
-(void)_setTimer;
-(void)_timerHit:(id)arg1 ;
-(id)initWithFlags:(unsigned long long)arg1 timeout:(double)arg2 wifiTimeout:(double)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)initWithFlags:(unsigned long long)arg1 options:(unsigned long long)arg2 timeout:(double)arg3 wifiTimeout:(double)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)dealloc;
-(void)setContext:(void*)arg1 ;
-(void*)context;
-(void)cancel;
-(void)start;
-(void)_cancel;
@end

