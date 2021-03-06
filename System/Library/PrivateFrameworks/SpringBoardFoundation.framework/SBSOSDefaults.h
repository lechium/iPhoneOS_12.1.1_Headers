/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBSOSDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic,readonly) BOOL disablesForAccessibility; 
@property (assign,nonatomic) BOOL performedCheckForTripleClickSOSMigrationAlert; 
-(void)setPerformedCheckForTripleClickSOSMigrationAlert:(BOOL)arg1 ;
-(BOOL)performedCheckForTripleClickSOSMigrationAlert;
-(void)setDisablesForAccessibility:(BOOL)arg1 ;
-(BOOL)disablesForAccessibility;
-(BOOL)isAutomaticCallCountdownEnabled;
-(long long)lockButtonSOSTriggerCount;
-(BOOL)clawCanTriggerSOS;
-(void)_bindAndRegisterDefaults;
@end

