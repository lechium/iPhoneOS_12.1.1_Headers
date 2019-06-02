/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libwebrtc.dylib/libwebrtc.dylib-Structs.h>
#import <libobjc.A.dylib/WK_RTCVideoEncoder.h>

@class WK_RTCVideoCodecInfo, NSString;

@interface WK_RTCVideoEncoderH264 : NSObject <WK_RTCVideoEncoder> {

	WK_RTCVideoCodecInfo* _codecInfo;
	unique_ptr<webrtc::BitrateAdjuster, std::__1::default_delete<webrtc::BitrateAdjuster> >* _bitrateAdjuster;
	unsigned _targetBitrateBps;
	unsigned _encoderBitrateBps;
	unsigned long long _packetizationMode;
	CFStringRef _profile;
	/*^block*/id _callback;
	int _width;
	int _height;
	OpaqueVTCompressionSessionRef _compressionSession;
	unsigned long long _mode;
	H264BitstreamParser* _h264BitstreamParser;
	vector<unsigned char, std::__1::allocator<unsigned char> > _frameScaleBuffer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCallback:(/*^block*/id)arg1 ;
-(id)implementationName;
-(long long)startEncodeWithSettings:(id)arg1 numberOfCores:(int)arg2 ;
-(long long)releaseEncoder;
-(long long)encode:(id)arg1 codecSpecificInfo:(id)arg2 frameTypes:(id)arg3 ;
-(int)setBitrate:(unsigned)arg1 framerate:(unsigned)arg2 ;
-(id)scalingSettings;
-(id)initWithCodecInfo:(id)arg1 ;
-(void)destroyCompressionSession;
-(int)resetCompressionSessionWithPixelFormat:(unsigned)arg1 ;
-(BOOL)resetCompressionSessionIfNeededForPool:(CVPixelBufferPoolRef)arg1 withFrame:(id)arg2 ;
-(void)setBitrateBps:(unsigned)arg1 ;
-(void)configureCompressionSession;
-(void)setEncoderBitrateBps:(unsigned)arg1 ;
-(void)frameWasEncoded:(int)arg1 flags:(unsigned)arg2 sampleBuffer:(opaqueCMSampleBufferRef)arg3 codecSpecificInfo:(id)arg4 width:(int)arg5 height:(int)arg6 renderTimeMs:(long long)arg7 timestamp:(unsigned)arg8 rotation:(long long)arg9 ;
-(void)dealloc;
@end
