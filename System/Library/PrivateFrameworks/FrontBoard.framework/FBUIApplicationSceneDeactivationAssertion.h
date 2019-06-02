/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class FBSDisplayIdentity, NSString;

@interface FBUIApplicationSceneDeactivationAssertion : NSObject <BSDescriptionProviding> {

	FBSDisplayIdentity* _displayIdentity;
	double _sceneLevel;
	long long _reason;
	/*^block*/id _predicate;
	BOOL _acquired;

}

@property (nonatomic,readonly) FBSDisplayIdentity * displayIdentity;              //@synthesize displayIdentity=_displayIdentity - In the implementation block
@property (nonatomic,readonly) double sceneLevel;                                 //@synthesize sceneLevel=_sceneLevel - In the implementation block
@property (nonatomic,readonly) long long reason;                                  //@synthesize reason=_reason - In the implementation block
@property (nonatomic,copy,readonly) id predicate;                                 //@synthesize predicate=_predicate - In the implementation block
@property (getter=isAcquired,nonatomic,readonly) BOOL acquired;                   //@synthesize acquired=_acquired - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)sceneLevel;
-(id)initWithReason:(long long)arg1 sceneLevel:(double)arg2 ;
-(id)_initWithReason:(long long)arg1 sceneLevel:(double)arg2 forDisplayWithIdentity:(id)arg3 ;
-(void)acquireWithTransitionContext:(id)arg1 ;
-(void)acquireWithPredicate:(/*^block*/id)arg1 transitionContext:(id)arg2 ;
-(void)acquireWithPredicate:(/*^block*/id)arg1 ;
-(BOOL)isAcquired;
-(id)initWithReason:(long long)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(void)relinquish;
-(void)dealloc;
-(NSString *)description;
-(long long)reason;
-(FBSDisplayIdentity *)displayIdentity;
-(id)predicate;
-(void)acquire;
@end

