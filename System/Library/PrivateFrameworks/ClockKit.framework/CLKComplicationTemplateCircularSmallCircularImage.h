/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKComplicationTemplate.h>

@class CLKImageProvider;

@interface CLKComplicationTemplateCircularSmallCircularImage : CLKComplicationTemplate {

	CLKImageProvider* _imageProvider;

}

@property (nonatomic,copy) CLKImageProvider * imageProvider;              //@synthesize imageProvider=_imageProvider - In the implementation block
+(CGSize)_imageSize;
-(void)_enumerateImageProviderKeysWithBlock:(/*^block*/id)arg1 ;
-(CLKImageProvider *)imageProvider;
-(void)setImageProvider:(CLKImageProvider *)arg1 ;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
@end

