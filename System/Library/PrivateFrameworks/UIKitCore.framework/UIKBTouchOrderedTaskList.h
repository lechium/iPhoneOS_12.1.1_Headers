/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:31 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSUUID, NSObject, NSMutableArray, NSValue;

@interface UIKBTouchOrderedTaskList : NSObject {

	NSUUID* _touchUUID;
	NSObject*<OS_dispatch_queue> _touchStateTasksQueue;
	NSMutableArray* _touchStateTasks;
	NSValue* _currentTouchPoint;
	BOOL _ignoredOnBegin;
	unsigned long long _pathIndex;
	double _originalStartTime;

}

@property (nonatomic,retain,readonly) NSUUID * touchUUID;                       //@synthesize touchUUID=_touchUUID - In the implementation block
@property (nonatomic,readonly) unsigned long long pathIndex;                    //@synthesize pathIndex=_pathIndex - In the implementation block
@property (nonatomic,readonly) double originalStartTime;                        //@synthesize originalStartTime=_originalStartTime - In the implementation block
@property (nonatomic,retain,readonly) NSValue * currentTouchPoint;              //@synthesize currentTouchPoint=_currentTouchPoint - In the implementation block
@property (assign,nonatomic) BOOL ignoredOnBegin;                               //@synthesize ignoredOnBegin=_ignoredOnBegin - In the implementation block
@property (nonatomic,readonly) BOOL hasTasks; 
+(id)taskListForTouchUUID:(id)arg1 withPathIndex:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)addTask:(id)arg1 ;
-(unsigned long long)pathIndex;
-(NSUUID *)touchUUID;
-(id)initWithTouchUUID:(id)arg1 withPathIndex:(unsigned long long)arg2 ;
-(BOOL)hasTasks;
-(BOOL)isExecutingFirstTask;
-(void)removeTasksMatchingFilter:(/*^block*/id)arg1 ;
-(BOOL)executeTasksInView:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)firstTouchStateForUITouchPhase:(long long)arg1 ;
-(NSValue *)currentTouchPoint;
-(double)originalStartTime;
-(BOOL)ignoredOnBegin;
-(void)setIgnoredOnBegin:(BOOL)arg1 ;
@end

