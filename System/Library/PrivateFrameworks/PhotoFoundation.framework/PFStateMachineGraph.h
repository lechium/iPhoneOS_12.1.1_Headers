/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:50 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, PFStateMachineNode;

@interface PFStateMachineGraph : NSObject {

	NSMutableDictionary* _nodes;
	NSMutableDictionary* _globalTransitions;
	PFStateMachineNode* _initialNode;

}

@property (retain) PFStateMachineNode * initialNode;              //@synthesize initialNode=_initialNode - In the implementation block
-(id)addNode:(id)arg1 ;
-(PFStateMachineNode *)initialNode;
-(id)transitionForEventName:(id)arg1 ;
-(void)addGlobalTransition:(id)arg1 ;
-(void)addGlobalTransitionOn:(id)arg1 to:(id)arg2 ;
-(id)findNodeWithName:(id)arg1 ;
-(id)dot:(BOOL)arg1 ;
-(void)setInitialNode:(PFStateMachineNode *)arg1 ;
-(id)init;
@end
