/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SignpostSupport/SignpostEvent.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface SignpostStreamEvent : SignpostEvent {

	unsigned long long _totalFrameCount;
	NSObject*<OS_dispatch_source> _timeoutSource;
	unsigned long long _serialNumber;

}

@property (assign,nonatomic) unsigned long long _totalFrameCount;                      //@synthesize totalFrameCount=_totalFrameCount - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timeoutSource;              //@synthesize timeoutSource=_timeoutSource - In the implementation block
@property (assign,nonatomic) unsigned long long serialNumber;                          //@synthesize serialNumber=_serialNumber - In the implementation block
+(id)serializationTypeNumber;
-(id)initWithOSLogEventProxy:(id)arg1 serialNumber:(unsigned long long)arg2 shouldCollectFrameInfo:(BOOL)arg3 timeoutInSec:(unsigned long long)arg4 timeoutHandlingQueue:(id)arg5 timeoutHandlingBlock:(/*^block*/id)arg6 ;
-(NSObject*<OS_dispatch_source>)timeoutSource;
-(void)setTimeoutSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(unsigned long long)serialNumber;
-(BOOL)_hasTotalFrames;
-(void)set_totalFrameCount:(unsigned long long)arg1 ;
-(unsigned long long)_totalFrameCount;
-(id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)arg1 ;
-(void)setSerialNumber:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
@end

