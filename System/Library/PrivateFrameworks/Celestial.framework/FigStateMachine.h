/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSString;

@interface FigStateMachine : NSObject {

	id _owner;
	os_unfair_lock_s _lock;
	BOOL _performsAtomicStateTransitions;
	unsigned _currentState;
	FigStateMachineStateConfiguration* _stateConfigurations;
	char _stateCount;
	NSString* _label;

}

@property (assign,nonatomic) BOOL performsAtomicStateTransitions;              //@synthesize performsAtomicStateTransitions=_performsAtomicStateTransitions - In the implementation block
@property (readonly) unsigned currentState; 
@property (readonly) NSString * label; 
@property (readonly) NSString * currentStateLabel; 
+(void)initialize;
-(id)initWithLabel:(id)arg1 stateCount:(char)arg2 initialState:(unsigned)arg3 owner:(id)arg4 ;
-(void)setLabel:(id)arg1 forState:(unsigned)arg2 ;
-(void)whenTransitioningFromState:(unsigned)arg1 toState:(unsigned)arg2 callHandler:(/*^block*/id)arg3 ;
-(void)whenTransitioningToState:(unsigned)arg1 callHandler:(/*^block*/id)arg2 ;
-(BOOL)transitionToState:(unsigned)arg1 fromState:(unsigned)arg2 ;
-(BOOL)transitionToState:(unsigned)arg1 errorStatus:(int)arg2 ;
-(void)setPerformsAtomicStateTransitions:(BOOL)arg1 ;
-(NSString *)currentStateLabel;
-(void)whenTransitioningToStates:(unsigned)arg1 callHandler:(/*^block*/id)arg2 ;
-(void)whenTransitioningToStateFails:(unsigned)arg1 callHandler:(/*^block*/id)arg2 ;
-(BOOL)_transitionToState:(unsigned)arg1 fromStates:(unsigned)arg2 errorStatus:(int)arg3 ;
-(id)labelForState:(unsigned)arg1 ;
-(void)markStateAsTerminal:(unsigned)arg1 ;
-(void)whenTransitioningToStatesFail:(unsigned)arg1 callHandler:(/*^block*/id)arg2 ;
-(BOOL)transitionToState:(unsigned)arg1 fromStates:(unsigned)arg2 ;
-(BOOL)performsAtomicStateTransitions;
-(BOOL)transitionToState:(unsigned)arg1 ;
-(void)dealloc;
-(id)description;
-(unsigned)currentState;
-(NSString *)label;
@end

