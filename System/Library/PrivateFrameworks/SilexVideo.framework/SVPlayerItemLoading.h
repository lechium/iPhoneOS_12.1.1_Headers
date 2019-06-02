/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AVPlayerItem, NSError;


@protocol SVPlayerItemLoading <NSObject>
@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,readonly) AVPlayerItem * item; 
@property (nonatomic,copy,readonly) NSError * error; 
@required
-(void)onLoadingStateChange:(/*^block*/id)arg1;
-(void)load;
-(unsigned long long)state;
-(AVPlayerItem *)item;
-(NSError *)error;

@end

