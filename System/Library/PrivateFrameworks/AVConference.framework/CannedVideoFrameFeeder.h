/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CannedVideoFrameFeeder <NSObject>
@required
-(CVBufferRef)createPixelBufferForFrameIndex:(int)arg1;
-(void)getFrameRate:(double*)arg1 frameCount:(int*)arg2;
-(int)setWidth:(int)arg1 height:(int)arg2;
-(int)rotatePixelBuffer:(CVBufferRef)arg1 andStoreTo:(*)arg2;

@end

