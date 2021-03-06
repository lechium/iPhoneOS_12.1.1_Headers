/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFetchOperation.h>

@class NSMutableArray, NFMutexLock;

@interface FCMultiStepFetchOperation : FCFetchOperation {

	NSMutableArray* _steps;
	NSMutableArray* _stepResults;
	NFMutexLock* _accessLock;

}

@property (nonatomic,retain) NSMutableArray * steps;                    //@synthesize steps=_steps - In the implementation block
@property (nonatomic,retain) NSMutableArray * stepResults;              //@synthesize stepResults=_stepResults - In the implementation block
@property (nonatomic,retain) NFMutexLock * accessLock;                  //@synthesize accessLock=_accessLock - In the implementation block
-(NSMutableArray *)steps;
-(void)setSteps:(NSMutableArray *)arg1 ;
-(void)performOperation;
-(NFMutexLock *)accessLock;
-(void)setAccessLock:(NFMutexLock *)arg1 ;
-(void)_performNextStep;
-(id)completeFetchOperation;
-(NSMutableArray *)stepResults;
-(void)customizeChildOperation:(id)arg1 forFetchStep:(SEL)arg2 ;
-(void)addFetchStep:(SEL)arg1 ;
-(void)addNonCriticalFetchStep:(SEL)arg1 ;
-(void)setStepResults:(NSMutableArray *)arg1 ;
-(id)init;
@end

