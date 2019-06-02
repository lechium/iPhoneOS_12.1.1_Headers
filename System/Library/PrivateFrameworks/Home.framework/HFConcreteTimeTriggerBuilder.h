/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemBuilder.h>

@protocol HFTimeEventBuilder;
@class NSString, HFEventBuilder, NSArray, NSTimeZone, HMTrigger;

@interface HFConcreteTimeTriggerBuilder : HFItemBuilder {

	NSString* _name;
	HFEventBuilder*<HFTimeEventBuilder> _eventBuilder;
	NSArray* _recurrences;
	NSTimeZone* _timeZone;

}

@property (nonatomic,retain) HMTrigger * trigger; 
@property (nonatomic,copy) NSString * name;                                                 //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) HFEventBuilder*<HFTimeEventBuilder> eventBuilder;              //@synthesize eventBuilder=_eventBuilder - In the implementation block
@property (nonatomic,copy) NSArray * recurrences;                                           //@synthesize recurrences=_recurrences - In the implementation block
@property (nonatomic,copy) NSTimeZone * timeZone;                                           //@synthesize timeZone=_timeZone - In the implementation block
+(id)builderForExistingTrigger:(id)arg1 inHome:(id)arg2 ;
-(void)setTrigger:(HMTrigger *)arg1 ;
-(id)commitCreateTrigger;
-(id)commitEditTrigger;
-(HFEventBuilder*<HFTimeEventBuilder>)eventBuilder;
-(void)copyCurrentStateFromTriggerBuilder:(id)arg1 ;
-(void)setEventBuilder:(HFEventBuilder*<HFTimeEventBuilder>)arg1 ;
-(void)triggerEnabledStateDidChange:(BOOL)arg1 ;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(id)commitItem;
-(void)setRecurrences:(NSArray *)arg1 ;
-(NSArray *)recurrences;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSTimeZone *)timeZone;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(HMTrigger *)trigger;
@end
