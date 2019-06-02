/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, NSNumber;

@interface RAWPreserveHueGamutMap : RAWFilter {

	CIImage* inputImage;
	id inputColorSpace;
	BOOL inputEnabled;
	BOOL inputShouldWarn;
	NSNumber* inputVersion;

}
+(id)customAttributes;
-(void)setInputEnabled:(id)arg1 ;
-(id)customAttributes;
-(id)inputShouldWarn;
-(id)inputEnabled;
-(void)setInputShouldWarn:(id)arg1 ;
-(id)outputImage;
@end

