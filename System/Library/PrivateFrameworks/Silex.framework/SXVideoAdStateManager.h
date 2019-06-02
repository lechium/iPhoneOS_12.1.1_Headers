/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXVideoAdStateProviding.h>
#import <libobjc.A.dylib/SXVideoAdStateReporting.h>

@class NFStateMachine, NSString;

@interface SXVideoAdStateManager : NSObject <SXVideoAdStateProviding, SXVideoAdStateReporting> {

	/*^block*/id onPlayBlock;
	/*^block*/id onPauseBlock;
	/*^block*/id onResumeBlock;
	/*^block*/id onFinishBlock;
	/*^block*/id onFailBlock;
	/*^block*/id onLearnMoreBlock;
	/*^block*/id onSkipBlock;
	NFStateMachine* _stateMachine;

}

@property (nonatomic,readonly) NFStateMachine * stateMachine;                    //@synthesize stateMachine=_stateMachine - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=onPlay:,nonatomic,copy) id onPlayBlock; 
@property (setter=onPause:,nonatomic,copy) id onPauseBlock; 
@property (setter=onResume:,nonatomic,copy) id onResumeBlock; 
@property (setter=onFail:,nonatomic,copy) id onFailBlock; 
@property (setter=onFinish:,nonatomic,copy) id onFinishBlock; 
@property (setter=onLearnMore:,nonatomic,copy) id onLearnMoreBlock; 
@property (setter=onSkip:,nonatomic,copy) id onSkipBlock; 
-(void)skip;
-(id)onPauseBlock;
-(id)onFinishBlock;
-(id)onFailBlock;
-(id)onSkipBlock;
-(id)onLearnMoreBlock;
-(id)onPlayBlock;
-(id)onResumeBlock;
-(void)onPlay:(/*^block*/id)arg1 ;
-(void)onPause:(/*^block*/id)arg1 ;
-(void)onResume:(/*^block*/id)arg1 ;
-(void)onFail:(/*^block*/id)arg1 ;
-(void)onFinish:(/*^block*/id)arg1 ;
-(void)onLearnMore:(/*^block*/id)arg1 ;
-(void)onSkip:(/*^block*/id)arg1 ;
-(void)learnMore;
-(id)init;
-(void)failWithError:(id)arg1 ;
-(void)resume;
-(void)play;
-(NFStateMachine *)stateMachine;
-(void)finish;
-(void)pause;
@end

