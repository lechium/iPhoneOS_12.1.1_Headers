/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <libobjc.A.dylib/NUImageProperties.h>

@protocol NUDepthProperties, NUPortraitEffectsMatteProperties, NURAWImageProperties;
@class NSDictionary, NSString;

@interface _NUImageProperties : NSObject <NUImageProperties> {

	NSDictionary* _metadata;
	CGColorSpaceRef _colorSpace;
	long long _orientation;
	NSString* _fileUTI;
	long long _alphaInfo;
	long long _componentInfo;
	id<NUDepthProperties> _depthProperties;
	id<NUPortraitEffectsMatteProperties> _portraitEffectsMatteProperties;
	id<NURAWImageProperties> _rawProperties;
	SCD_Struct_NU5 _size;

}

@property (retain) NSDictionary * metadata;                                                          //@synthesize metadata=_metadata - In the implementation block
@property (assign) CGColorSpaceRef colorSpace;                                                       //@synthesize colorSpace=_colorSpace - In the implementation block
@property (assign) SCD_Struct_NU5 size;                                                              //@synthesize size=_size - In the implementation block
@property (assign) long long orientation;                                                            //@synthesize orientation=_orientation - In the implementation block
@property (retain) NSString * fileUTI;                                                               //@synthesize fileUTI=_fileUTI - In the implementation block
@property (assign) long long alphaInfo;                                                              //@synthesize alphaInfo=_alphaInfo - In the implementation block
@property (assign) long long componentInfo;                                                          //@synthesize componentInfo=_componentInfo - In the implementation block
@property (retain) id<NUDepthProperties> depthProperties;                                            //@synthesize depthProperties=_depthProperties - In the implementation block
@property (retain) id<NUPortraitEffectsMatteProperties> portraitEffectsMatteProperties;              //@synthesize portraitEffectsMatteProperties=_portraitEffectsMatteProperties - In the implementation block
@property (retain) id<NURAWImageProperties> rawProperties;                                           //@synthesize rawProperties=_rawProperties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSString *)fileUTI;
-(void)setFileUTI:(NSString *)arg1 ;
-(id<NUDepthProperties>)depthProperties;
-(id<NUPortraitEffectsMatteProperties>)portraitEffectsMatteProperties;
-(void)setRawProperties:(id<NURAWImageProperties>)arg1 ;
-(void)setAlphaInfo:(long long)arg1 ;
-(void)setComponentInfo:(long long)arg1 ;
-(long long)alphaInfo;
-(long long)componentInfo;
-(void)setDepthProperties:(id<NUDepthProperties>)arg1 ;
-(void)setPortraitEffectsMatteProperties:(id<NUPortraitEffectsMatteProperties>)arg1 ;
-(id<NURAWImageProperties>)rawProperties;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(SCD_Struct_NU5)size;
-(NSString *)description;
-(void)setSize:(SCD_Struct_NU5)arg1 ;
-(long long)orientation;
-(NSDictionary *)metadata;
-(CGColorSpaceRef)colorSpace;
-(void)setOrientation:(long long)arg1 ;
@end

