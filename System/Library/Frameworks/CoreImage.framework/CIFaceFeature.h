/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:03 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFeature.h>

@class NSDictionary;

@interface CIFaceFeature : CIFeature {

	CGRect bounds;
	BOOL hasLeftEyePosition;
	CGPoint leftEyePosition;
	BOOL hasRightEyePosition;
	CGPoint rightEyePosition;
	BOOL hasMouthPosition;
	CGPoint mouthPosition;
	BOOL hasTrackingID;
	int trackingID;
	BOOL hasTrackingFrameCount;
	int trackingFrameCount;
	BOOL hasFaceAngle;
	float faceAngle;
	BOOL hasSmile;
	BOOL leftEyeClosed;
	BOOL rightEyeClosed;
	NSDictionary* landmarks;

}

@property (readonly) NSDictionary * landmarks; 
@property (readonly) CGRect bounds; 
@property (readonly) BOOL hasLeftEyePosition; 
@property (readonly) CGPoint leftEyePosition; 
@property (readonly) BOOL hasRightEyePosition; 
@property (readonly) CGPoint rightEyePosition; 
@property (readonly) BOOL hasMouthPosition; 
@property (readonly) CGPoint mouthPosition; 
@property (readonly) BOOL hasTrackingID; 
@property (readonly) int trackingID; 
@property (readonly) BOOL hasTrackingFrameCount; 
@property (readonly) int trackingFrameCount; 
@property (readonly) BOOL hasFaceAngle; 
@property (readonly) float faceAngle; 
@property (readonly) BOOL hasSmile; 
@property (readonly) BOOL leftEyeClosed; 
@property (readonly) BOOL rightEyeClosed; 
-(float)faceAngle;
-(id)initWithBounds:(CGRect)arg1 hasLeftEyePosition:(BOOL)arg2 leftEyePosition:(CGPoint)arg3 hasRightEyePosition:(BOOL)arg4 rightEyePosition:(CGPoint)arg5 hasMouthPosition:(BOOL)arg6 mouthPosition:(CGPoint)arg7 hasFaceAngle:(BOOL)arg8 faceAngle:(float)arg9 hasTrackingID:(BOOL)arg10 trackingID:(int)arg11 hasTrackingFrameCount:(BOOL)arg12 trackingFrameCount:(int)arg13 hasSmile:(BOOL)arg14 leftEyeClosed:(BOOL)arg15 rightEyeClosed:(BOOL)arg16 landmarks:(id)arg17 ;
-(BOOL)hasTrackingFrameCount;
-(int)trackingFrameCount;
-(BOOL)hasFaceAngle;
-(NSDictionary *)landmarks;
-(BOOL)hasSmile;
-(BOOL)hasTrackingID;
-(int)trackingID;
-(BOOL)leftEyeClosed;
-(BOOL)rightEyeClosed;
-(BOOL)hasLeftEyePosition;
-(CGPoint)leftEyePosition;
-(BOOL)hasRightEyePosition;
-(CGPoint)rightEyePosition;
-(BOOL)hasMouthPosition;
-(CGPoint)mouthPosition;
-(void)dealloc;
-(CGRect)bounds;
-(id)type;
@end
