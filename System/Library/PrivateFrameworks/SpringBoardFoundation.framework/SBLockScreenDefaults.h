/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:07 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBLockScreenDefaults : SBAbstractSpringBoardDefaultDomain

@property (assign,nonatomic) BOOL limitFeaturesForRemoteLock; 
@property (nonatomic,readonly) BOOL showLegalText; 
@property (assign,nonatomic) BOOL showAuthenticationEngineeringUI; 
@property (assign,nonatomic) BOOL showSupervisionText; 
@property (assign,nonatomic) BOOL showQuickNoteFingerGestureRecognizer; 
@property (assign,nonatomic) BOOL forceWakeToMaps; 
@property (assign,nonatomic) double nowPlayingTimeout; 
@property (assign,nonatomic) BOOL weDontNeedNoEducation; 
-(void)setShowLegalText:(BOOL)arg1 ;
-(BOOL)showLegalText;
-(void)setShowSupervisionText:(BOOL)arg1 ;
-(BOOL)showSupervisionText;
-(void)setNowPlayingTimeout:(double)arg1 ;
-(double)nowPlayingTimeout;
-(void)setShowQuickNoteFingerGestureRecognizer:(BOOL)arg1 ;
-(BOOL)showQuickNoteFingerGestureRecognizer;
-(void)setShowAuthenticationEngineeringUI:(BOOL)arg1 ;
-(BOOL)showAuthenticationEngineeringUI;
-(void)setLimitFeaturesForRemoteLock:(BOOL)arg1 ;
-(BOOL)limitFeaturesForRemoteLock;
-(void)setForceWakeToMaps:(BOOL)arg1 ;
-(BOOL)forceWakeToMaps;
-(void)setWeDontNeedNoEducation:(BOOL)arg1 ;
-(BOOL)weDontNeedNoEducation;
-(void)_bindAndRegisterDefaults;
@end
