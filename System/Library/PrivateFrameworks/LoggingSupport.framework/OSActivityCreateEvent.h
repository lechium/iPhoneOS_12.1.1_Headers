/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LoggingSupport/LoggingSupport-Structs.h>
#import <LoggingSupport/OSActivityEvent.h>

@interface OSActivityCreateEvent : OSActivityEvent {

	unsigned long long _creatorActivityID;
	unsigned long long _creatorProcessUniqueID;
	unsigned long long _senderProgramCounter;

}

@property (nonatomic,readonly) unsigned long long creatorActivityID;                   //@synthesize creatorActivityID=_creatorActivityID - In the implementation block
@property (nonatomic,readonly) unsigned long long creatorProcessUniqueID;              //@synthesize creatorProcessUniqueID=_creatorProcessUniqueID - In the implementation block
@property (nonatomic,readonly) unsigned long long senderProgramCounter;                //@synthesize senderProgramCounter=_senderProgramCounter - In the implementation block
-(void)_addProperties:(id)arg1 ;
-(unsigned long long)creatorActivityID;
-(unsigned long long)creatorProcessUniqueID;
-(unsigned long long)senderProgramCounter;
-(id)initWithEntry:(os_activity_stream_entry_s*)arg1 ;
@end

