/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSError;


@protocol SVVideoPlaybackStateObserving <NSObject>
@property (nonatomic,readonly) unsigned long long state; 
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (setter=onChange:,nonatomic,copy) id changeBlock; 
@property (nonatomic,copy,readonly) NSError * error; 
@required
-(id)changeBlock;
-(void)onChange:(/*^block*/id)arg1;
-(unsigned long long)state;
-(BOOL)isPlaying;
-(NSError *)error;

@end
