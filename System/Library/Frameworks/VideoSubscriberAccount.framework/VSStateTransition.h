/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VSOptional;

@interface VSStateTransition : NSObject {

	VSOptional* _previousState;
	VSOptional* _triggeringEvent;
	VSOptional* _nextState;

}

@property (nonatomic,retain) VSOptional * previousState;                //@synthesize previousState=_previousState - In the implementation block
@property (nonatomic,retain) VSOptional * triggeringEvent;              //@synthesize triggeringEvent=_triggeringEvent - In the implementation block
@property (nonatomic,retain) VSOptional * nextState;                    //@synthesize nextState=_nextState - In the implementation block
-(VSOptional *)triggeringEvent;
-(void)setTriggeringEvent:(VSOptional *)arg1 ;
-(VSOptional *)nextState;
-(void)setNextState:(VSOptional *)arg1 ;
-(VSOptional *)previousState;
-(void)setPreviousState:(VSOptional *)arg1 ;
-(id)init;
@end

