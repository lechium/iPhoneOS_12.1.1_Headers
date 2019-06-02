/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, GKState;

@interface GKStateMachine : NSObject {

	NSDictionary* _states;
	GKState* _currentState;

}

@property (nonatomic,readonly) GKState * currentState;              //@synthesize currentState=_currentState - In the implementation block
+(id)stateMachineWithStates:(id)arg1 ;
-(BOOL)enterState:(Class)arg1 ;
-(void)updateWithDeltaTime:(double)arg1 ;
-(id)initWithStates:(id)arg1 ;
-(id)stateForClass:(Class)arg1 ;
-(BOOL)canEnterState:(Class)arg1 ;
-(void)forceEnterState:(Class)arg1 ;
-(id)_instanceData;
-(id)_dotStringInstanceData;
-(id)init;
-(GKState *)currentState;
@end

