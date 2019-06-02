/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableDictionary;

@interface NFEventManager : NSObject {

	NSMutableSet* _events;
	NSMutableDictionary* _triggers;

}

@property (nonatomic,readonly) NSMutableSet * events;                       //@synthesize events=_events - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * triggers;              //@synthesize triggers=_triggers - In the implementation block
-(NSMutableSet *)events;
-(void)attemptTriggersForCurrentEvent:(id)arg1 ;
-(void)triggerOnAnyEvent:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)handleOnceTrigger:(id)arg1 event:(id)arg2 ;
-(void)handleAlwaysTrigger:(id)arg1 event:(id)arg2 ;
-(void)triggerOnEvent:(id)arg1 block:(/*^block*/id)arg2 ;
-(NSMutableDictionary *)triggers;
-(void)triggerOnceWhenAllEventsHaveOccurred:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)fireEvent:(id)arg1 ;
-(void)triggerOnceWhenAnyEventHasOccurred:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)init;
@end
