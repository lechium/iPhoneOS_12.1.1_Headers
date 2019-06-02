/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <UIKitCore/UIMutableApplicationSceneClientSettings.h>
#import <libobjc.A.dylib/SBSUILoginUISceneClientSettings.h>

@class NSString;

@interface SBSUIMutableLoginUISceneClientSettings : UIMutableApplicationSceneClientSettings <SBSUILoginUISceneClientSettings>

@property (assign,nonatomic) long long idleTimerMode; 
@property (nonatomic,copy) NSString * statusBarUserNameOverride; 
@property (assign,nonatomic) long long rotationMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)idleTimerMode;
-(NSString *)statusBarUserNameOverride;
-(long long)rotationMode;
-(void)setIdleTimerMode:(long long)arg1 ;
-(void)setStatusBarUserNameOverride:(NSString *)arg1 ;
-(void)setRotationMode:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
@end

