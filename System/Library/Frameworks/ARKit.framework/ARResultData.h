/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ARResultData <ARData>
@optional
-(id)worldTrackingState;
-(/*function pointer*/void**)worldAlignmentTransform;
-(unsigned long long)worldAlignmentModifiers;
-(id)lightEstimate;
-(id)featurePoints;
-(id)anchorsForCameraWithTransform:(/*function pointer*/void*)arg1 referenceOriginTransform:(/*function pointer*/void*)arg2 existingAnchors:(id)arg3 anchorsToRemove:(id)arg4;
-(/*function pointer*/void**)cameraTransform;
-(double)timestamp;

@end
