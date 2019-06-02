/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WK_RTCVideoFrameBuffer;
#import <libwebrtc.dylib/libwebrtc.dylib-Structs.h>
@interface WK_RTCVideoFrame : NSObject {

	long long _rotation;
	long long _timeStampNs;
	int timeStamp;
	id<WK_RTCVideoFrameBuffer> _buffer;

}

@property (nonatomic,readonly) int width; 
@property (nonatomic,readonly) int height; 
@property (nonatomic,readonly) long long rotation; 
@property (nonatomic,readonly) long long timeStampNs; 
@property (assign,nonatomic) int timeStamp; 
@property (nonatomic,readonly) id<WK_RTCVideoFrameBuffer> buffer;              //@synthesize buffer=_buffer - In the implementation block
-(id<WK_RTCVideoFrameBuffer>)buffer;
-(long long)timeStampNs;
-(id)initWithNativeVideoFrame:(const VideoFrame*)arg1 ;
-(id)initWithBuffer:(id)arg1 rotation:(long long)arg2 timeStampNs:(long long)arg3 ;
-(id)newI420VideoFrame;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 rotation:(long long)arg2 timeStampNs:(long long)arg3 ;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 scaledWidth:(int)arg2 scaledHeight:(int)arg3 cropWidth:(int)arg4 cropHeight:(int)arg5 cropX:(int)arg6 cropY:(int)arg7 rotation:(long long)arg8 timeStampNs:(long long)arg9 ;
-(VideoFrame*)nativeVideoFrame;
-(int)width;
-(int)height;
-(int)timeStamp;
-(void)setTimeStamp:(int)arg1 ;
-(long long)rotation;
@end

