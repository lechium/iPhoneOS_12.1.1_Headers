/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:02 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SVVideoPeriodicTimeObserving <NSObject>
@property (nonatomic,readonly) double time; 
@property (setter=onChange:,nonatomic,copy) id changeBlock; 
@required
-(double)time;
-(id)changeBlock;
-(void)onChange:(/*^block*/id)arg1;

@end

