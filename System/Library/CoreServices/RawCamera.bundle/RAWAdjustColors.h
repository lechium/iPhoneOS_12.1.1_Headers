/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:27 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RawCamera/RAWFilter.h>

@class CIImage, NSNumber;

@interface RAWAdjustColors : RAWFilter {

	CIImage* inputImage;
	NSNumber* inputVersion;
	NSNumber* inputM00;
	NSNumber* inputM01;
	NSNumber* inputM02;
	NSNumber* inputM10;
	NSNumber* inputM11;
	NSNumber* inputM12;
	NSNumber* inputM20;
	NSNumber* inputM21;
	NSNumber* inputM22;
	NSNumber* inputTRCs0;
	NSNumber* inputTRCy1;
	NSNumber* inputTRCs1;
	NSNumber* inputTRCy2;
	NSNumber* inputTRCs2;
	NSNumber* inputTRCy3;
	NSNumber* inputTRCs3;
	NSNumber* inputTRCs4;
	NSNumber* inputBoostKind;
	NSNumber* inputBoostAmount;
	NSNumber* inputBoostLuminanceAmount;
	NSNumber* inputBoostTransitionPoint;
	NSNumber* inputBoostTransitionWidth;

}
+(id)customAttributes;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)customAttributes;
-(void)setInputBoostAmount:(id)arg1 ;
-(id)outputImage;
@end

