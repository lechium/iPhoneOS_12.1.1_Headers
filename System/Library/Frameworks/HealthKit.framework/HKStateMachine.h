/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKStateMachineDelegate;
@class NSMutableDictionary, NSMutableArray, HKStateMachineState, NSString;

@interface HKStateMachine : NSObject {

	NSMutableDictionary* _statesByIndex;
	NSMutableArray* _transitions;
	HKStateMachineState* _currentState;
	BOOL _isProcessingEvent;
	NSMutableArray* _pendingEvents;
	NSString* _name;
	id<HKStateMachineDelegate> _delegate;

}

@property (nonatomic,copy,readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (assign,nonatomic,__weak) id<HKStateMachineDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HKStateMachineState * currentState;                    //@synthesize currentState=_currentState - In the implementation block
+(id)nameForOwner:(id)arg1 UUID:(id)arg2 tag:(id)arg3 ;
-(void)_handleEvent:(long long)arg1 date:(id)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_dequeueEvent;
-(id)stateWithIndex:(long long)arg1 ;
-(id)graphDescription;
-(id)addStateWithIndex:(long long)arg1 label:(id)arg2 ;
-(id)addStateTransitionFrom:(id)arg1 to:(id)arg2 event:(long long)arg3 label:(id)arg4 ;
-(void)enterAtState:(long long)arg1 ;
-(void)enqueueEvent:(long long)arg1 date:(id)arg2 error:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)init;
-(NSString *)name;
-(void)setDelegate:(id<HKStateMachineDelegate>)arg1 ;
-(id<HKStateMachineDelegate>)delegate;
-(HKStateMachineState *)currentState;
-(id)initWithName:(id)arg1 ;
@end

