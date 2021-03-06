/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libwebrtc.dylib/libwebrtc.dylib-Structs.h>
#import <libobjc.A.dylib/WK_RTCVideoDecoder.h>

@class NSString;

@interface WK_RTCVideoDecoderH264 : NSObject <WK_RTCVideoDecoder> {

	opaqueCMFormatDescriptionRef _videoFormat;
	OpaqueVTDecompressionSessionRef _decompressionSession;
	/*^block*/id _callback;
	int _error;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCallback:(/*^block*/id)arg1 ;
-(id)implementationName;
-(long long)startDecodeWithSettings:(id)arg1 numberOfCores:(int)arg2 ;
-(long long)decode:(id)arg1 missingFrames:(BOOL)arg2 fragmentationHeader:(id)arg3 codecSpecificInfo:(id)arg4 renderTimeMs:(long long)arg5 ;
-(long long)releaseDecoder;
-(void)destroyDecompressionSession;
-(int)resetDecompressionSession;
-(void)configureDecompressionSession;
-(void)setVideoFormat:(opaqueCMFormatDescriptionRef)arg1 ;
-(id)init;
-(void)dealloc;
-(void)setError:(int)arg1 ;
@end

