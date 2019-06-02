/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:42:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAbstractDefaultDomain.h>

@class NSString;

@interface BKSIAPDefaults : BSAbstractDefaultDomain

@property (nonatomic,retain) NSString * videoTVOutSystem; 
@property (nonatomic,readonly) NSString * videoTVOutSignal; 
@property (nonatomic,readonly) NSString * videoTVOutReservedForIPodOut; 
@property (nonatomic,readonly) NSString * videoTVOutReservedForRemoteUI; 
-(void)setVideoTVOutReservedForIPodOut:(NSString *)arg1 ;
-(NSString *)videoTVOutReservedForIPodOut;
-(void)setVideoTVOutSystem:(NSString *)arg1 ;
-(NSString *)videoTVOutSystem;
-(void)setVideoTVOutSignal:(NSString *)arg1 ;
-(NSString *)videoTVOutSignal;
-(void)setVideoTVOutReservedForRemoteUI:(NSString *)arg1 ;
-(NSString *)videoTVOutReservedForRemoteUI;
-(void)_bindAndRegisterDefaults;
-(id)init;
@end
