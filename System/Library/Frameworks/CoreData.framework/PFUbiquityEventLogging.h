/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface PFUbiquityEventLogging : NSObject {

	NSMutableSet* _logEvents;
	long long _logLevel;

}

@property (assign) long long logLevel;              //@synthesize logLevel=_logLevel - In the implementation block
+(id)sharedEventLogger;
+(void)initialize;
-(void)logEvent:(id)arg1 ID:(id)arg2 message:(id)arg3 ;
-(id)createEventTrackingID:(int)arg1 ;
-(id)createCustomEventTrackingID:(id)arg1 ;
-(void)beginEvent:(id)arg1 ;
-(void)logEventData:(id)arg1 message:(id)arg2 ;
-(void)diagnostic:(id)arg1 message:(id)arg2 ;
-(void)debug:(id)arg1 message:(id)arg2 ;
-(void)info:(id)arg1 message:(id)arg2 ;
-(void)warning:(id)arg1 message:(id)arg2 ;
-(void)error:(id)arg1 message:(id)arg2 ;
-(void)fatal:(id)arg1 message:(id)arg2 ;
-(void)endEvent:(id)arg1 ;
-(id)incompleteEvents;
-(long long)logLevel;
-(void)setLogLevel:(long long)arg1 ;
-(id)init;
-(void)dealloc;
@end
