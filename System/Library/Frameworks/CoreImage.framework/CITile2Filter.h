/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CITileFilter.h>

@class NSNumber;

@interface CITile2Filter : CITileFilter {

	NSNumber* inputAcuteAngle;

}

@property (nonatomic,retain) NSNumber * inputAcuteAngle; 
+(id)customAttributes;
-(NSNumber *)inputAcuteAngle;
-(double)_roiArea;
-(vec2)_roiCenter;
-(id)_singlePixelImage;
-(CGRect)_roiRect;
-(void)setInputAcuteAngle:(NSNumber *)arg1 ;
-(id)outputImage;
@end
