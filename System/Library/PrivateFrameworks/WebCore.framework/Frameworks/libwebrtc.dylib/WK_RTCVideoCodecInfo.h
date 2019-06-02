/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libwebrtc.dylib/libwebrtc.dylib-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDictionary;

@interface WK_RTCVideoCodecInfo : NSObject <NSCoding> {

	NSString* _name;
	NSDictionary* _parameters;

}

@property (nonatomic,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
-(SdpVideoFormat*)nativeSdpVideoFormat;
-(id)initWithNativeVideoCodec:(VideoCodec*)arg1 ;
-(id)initWithNativeSdpVideoFormat:(SdpVideoFormat*)arg1 ;
-(id)initWithName:(id)arg1 parameters:(id)arg2 ;
-(BOOL)isEqualToCodecInfo:(id)arg1 ;
-(VideoCodec*)nativeVideoCodec;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)hash;
-(NSDictionary *)parameters;
-(id)initWithName:(id)arg1 ;
@end

