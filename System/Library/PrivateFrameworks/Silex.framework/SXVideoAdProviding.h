/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SXVideoAdProviding <SXVideoProviding>
@property (nonatomic,readonly) unsigned long long skipThreshold; 
@property (nonatomic,readonly) BOOL hasAction; 
@required
-(unsigned long long)skipThreshold;
-(void)skipped;
-(void)presentAction;
-(void)presentPrivacyStatement;
-(void)nextVideoStartPlaying;
-(BOOL)hasAction;

@end

