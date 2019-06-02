/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:29 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/NewsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NFStateMachineState, NSMutableDictionary, NFMutexLock;

@interface NFStateMachine : NSObject {

	unsigned long long _status;
	NFStateMachineState* _state;
	id _owner;
	NSMutableDictionary* _states;
	NSMutableDictionary* _events;
	NFMutexLock* _lock;
	long long _statusToken;

}

@property (assign,nonatomic,__weak) id owner;                           //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * states;              //@synthesize states=_states - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * events;              //@synthesize events=_events - In the implementation block
@property (nonatomic,retain) NFStateMachineState * state;               //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long status;                 //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NFMutexLock * lock;                        //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) long long statusToken;                     //@synthesize statusToken=_statusToken - In the implementation block
-(void)setStates:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)states;
-(void)addEvent:(id)arg1 ;
-(void)setEvents:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)events;
-(long long)statusToken;
-(void)setStatusToken:(long long)arg1 ;
-(void)setLock:(NFMutexLock *)arg1 ;
-(id)fireEventWithName:(id)arg1 withContext:(id)arg2 ;
-(id)initWithState:(id)arg1 withOwner:(id)arg2 ;
-(void)addState:(id)arg1 ;
-(void)deactivateIfNeeded;
-(id)description;
-(id)debugDescription;
-(NFStateMachineState *)state;
-(void)setState:(NFStateMachineState *)arg1 ;
-(void)activate;
-(void)deactivate;
-(NFMutexLock *)lock;
-(unsigned long long)status;
-(void)activateIfNeeded;
-(id)owner;
-(void)setOwner:(id)arg1 ;
-(void)setStatus:(unsigned long long)arg1 ;
@end
