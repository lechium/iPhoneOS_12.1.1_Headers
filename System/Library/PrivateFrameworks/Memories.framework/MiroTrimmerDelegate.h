/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MiroTrimmerDelegate <NSObject>
@optional
-(void)trimmer:(id)arg1 willStartTrimmingClip:(id)arg2;
-(BOOL)trimmer:(id)arg1 shouldContinueTrimmingClip:(id)arg2 startTime:(float)arg3 endTime:(float)arg4;
-(void)trimmer:(id)arg1 didContinueTrimmingClip:(id)arg2 startTime:(float)arg3 endTime:(float)arg4;
-(void)trimmer:(id)arg1 didEndTrimmingClip:(id)arg2 startTime:(float)arg3 endTime:(float)arg4;

@end
