/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPowerAssertion.h>

@class NSString, NSDate, UMUserSwitchBlockingTask;

@interface MCMDMPowerAssertion : MCPowerAssertion {

	NSString* _reason;
	NSDate* _creationDate;
	UMUserSwitchBlockingTask* _blockingTask;

}

@property (nonatomic,readonly) NSString * reason;                                  //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSDate * creationDate;                              //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) UMUserSwitchBlockingTask * blockingTask;              //@synthesize blockingTask=_blockingTask - In the implementation block
+(id)_currentAssertions;
+(id)assertionDescriptions;
+(id)_dateFormatter;
-(UMUserSwitchBlockingTask *)blockingTask;
-(void)setBlockingTask:(UMUserSwitchBlockingTask *)arg1 ;
-(NSDate *)creationDate;
-(id)initWithReason:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)reason;
@end

