/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:14 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@interface NUColorSpace : NSObject {

	CGColorSpaceRef _CGColorSpace;

}

@property (nonatomic,readonly) CGColorSpaceRef CGColorSpace;              //@synthesize CGColorSpace=_CGColorSpace - In the implementation block
+(id)workingColorSpace;
+(id)colorSpaceFromVideoColorProperties:(id)arg1 ;
+(id)genericGrayColorSpace;
+(id)_loadICCProfileDataWithIdentifier:(id)arg1 ;
+(id)sRGBLinearColorSpace;
+(id)colorSpaceFromColorPrimaries:(id)arg1 transferFunction:(id)arg2 yccMatrix:(id)arg3 ;
+(id)adobeRGBColorSpace;
+(id)genericRGBColorSpace;
+(id)genericRGBLinearColorSpace;
+(id)displayP3ColorSpace;
+(id)displayP3LinearColorSpace;
+(id)sRGBColorSpace;
-(CGColorSpaceRef)CGColorSpace;
-(id)initWithCGColorSpace:(CGColorSpaceRef)arg1 ;
-(id)initWithICCProfileData:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

