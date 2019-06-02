/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFStateMachineDelegate;
#import <Sharing/Sharing-Structs.h>
@class NSString, NSDictionary;

@interface SFStateMachine : NSObject {

	opaque_pthread_mutex_t _lock;
	BOOL _shouldLogStateTransitions;
	NSString* _currentState;
	NSDictionary* _validTransitions;
	id<SFStateMachineDelegate> _delegate;

}

@property (copy) NSString * currentState;                                 //@synthesize currentState=_currentState - In the implementation block
@property (retain) NSDictionary * validTransitions;                       //@synthesize validTransitions=_validTransitions - In the implementation block
@property (assign) id<SFStateMachineDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldLogStateTransitions;              //@synthesize shouldLogStateTransitions=_shouldLogStateTransitions - In the implementation block
-(BOOL)_setCurrentState:(id)arg1 ;
-(BOOL)shouldLogStateTransitions;
-(id)_validateTransitionFromState:(id)arg1 toState:(id)arg2 ;
-(void)_performTransitionFromState:(id)arg1 toState:(id)arg2 ;
-(id)missingTransitionFromState:(id)arg1 toState:(id)arg2 ;
-(id)_missingTransitionFromState:(id)arg1 toState:(id)arg2 ;
-(NSDictionary *)validTransitions;
-(BOOL)applyState:(id)arg1 ;
-(void)setValidTransitions:(NSDictionary *)arg1 ;
-(void)setShouldLogStateTransitions:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(id)target;
-(void)setDelegate:(id<SFStateMachineDelegate>)arg1 ;
-(id<SFStateMachineDelegate>)delegate;
-(NSString *)currentState;
-(void)setCurrentState:(NSString *)arg1 ;
@end

