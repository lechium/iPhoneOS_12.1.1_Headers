/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/FBSSceneSettings.h>

@class NSArray;

@interface FBSMutableSceneSettings : FBSSceneSettings

@property (nonatomic,copy) NSArray * occlusions; 
@property (assign,nonatomic) CGRect frame; 
@property (assign,nonatomic) double level; 
@property (assign,nonatomic) long long interfaceOrientation; 
@property (assign,getter=isBackgrounded,nonatomic) BOOL backgrounded; 
+(BOOL)_isMutable;
-(void)_setDisplayConfiguration:(id)arg1 ;
-(id)transientLocalSettings;
-(id)ignoreOcclusionReasons;
-(void)setOcclusions:(NSArray *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setLevel:(double)arg1 ;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(id)otherSettings;
-(void)setBackgrounded:(BOOL)arg1 ;
-(void)setDisplayConfiguration:(id)arg1 ;
@end

