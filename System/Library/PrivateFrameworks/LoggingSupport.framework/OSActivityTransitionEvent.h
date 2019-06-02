/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoggingSupport/LoggingSupport-Structs.h>
#import <LoggingSupport/OSActivityEvent.h>

@interface OSActivityTransitionEvent : OSActivityEvent {

	unsigned long long _transitionToActivityID;

}

@property (nonatomic,readonly) unsigned long long transitionToActivityID;              //@synthesize transitionToActivityID=_transitionToActivityID - In the implementation block
-(void)_addProperties:(id)arg1 ;
-(unsigned long long)transitionToActivityID;
-(id)initWithEntry:(os_activity_stream_entry_s*)arg1 ;
@end

