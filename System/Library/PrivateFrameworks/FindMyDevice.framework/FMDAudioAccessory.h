/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSURL;


@protocol FMDAudioAccessory <NSObject>
@property (nonatomic,readonly) NSString * audioRoutingIdentifier; 
@property (nonatomic,readonly) NSURL * audioURL; 
@property (nonatomic,readonly) BOOL playingSound; 
@required
-(NSURL *)audioURL;
-(NSString *)audioRoutingIdentifier;
-(BOOL)playingSound;

@end

