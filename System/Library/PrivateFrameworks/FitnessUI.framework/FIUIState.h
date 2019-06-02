/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:00 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface FIUIState : NSObject {

	NSMutableDictionary* _transitions;
	BOOL _transitional;
	NSString* _label;
	/*^block*/id _entry;
	/*^block*/id _exit;

}

@property (readonly) NSString * label;                            //@synthesize label=_label - In the implementation block
@property (copy) id entry;                                        //@synthesize entry=_entry - In the implementation block
@property (copy) id exit;                                         //@synthesize exit=_exit - In the implementation block
@property (getter=isTransitional) BOOL transitional;              //@synthesize transitional=_transitional - In the implementation block
+(id)transitionalStateFromState:(id)arg1 toState:(id)arg2 entryEvent:(long long)arg3 exitEvent:(long long)arg4 ;
+(id)stateWithLabel:(id)arg1 ;
-(id)exit;
-(void)registerTransition:(long long)arg1 label:(id)arg2 toState:(id)arg3 handler:(/*^block*/id)arg4 gate:(/*^block*/id)arg5 ;
-(void)setTransitional:(BOOL)arg1 ;
-(void)registerTransition:(long long)arg1 label:(id)arg2 toState:(id)arg3 ;
-(void)enumerateEvents:(/*^block*/id)arg1 ;
-(id)transitionForEvent:(long long)arg1 ;
-(void)setExit:(id)arg1 ;
-(BOOL)isTransitional;
-(id)allTransitions;
-(id)description;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 ;
-(id)entry;
-(void)setEntry:(id)arg1 ;
@end
