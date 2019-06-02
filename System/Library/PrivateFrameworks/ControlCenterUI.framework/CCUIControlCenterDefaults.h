/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAbstractDefaultDomain.h>

@interface CCUIControlCenterDefaults : BSAbstractDefaultDomain

@property (nonatomic,readonly) BOOL shouldAlwaysBeEnabled; 
@property (nonatomic,readonly) BOOL shouldExcludeControlCenterFromStatusBarOverrides; 
@property (assign,nonatomic) BOOL hasForceTouchedToExpandModule; 
@property (assign,nonatomic) BOOL hasLongPressedToExpandModule; 
+(id)standardDefaults;
-(void)setShouldAlwaysBeEnabled:(BOOL)arg1 ;
-(BOOL)shouldAlwaysBeEnabled;
-(void)setHasForceTouchedToExpandModule:(BOOL)arg1 ;
-(BOOL)hasForceTouchedToExpandModule;
-(void)setShouldExcludeControlCenterFromStatusBarOverrides:(BOOL)arg1 ;
-(BOOL)shouldExcludeControlCenterFromStatusBarOverrides;
-(void)setHasLongPressedToExpandModule:(BOOL)arg1 ;
-(BOOL)hasLongPressedToExpandModule;
-(void)_bindAndRegisterDefaults;
-(id)init;
@end

