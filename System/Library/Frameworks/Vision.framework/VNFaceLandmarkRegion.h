/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Vision/Vision-Structs.h>
@interface VNFaceLandmarkRegion : NSObject {

	CGRect _faceBoundingBox;
	unsigned long long _pointCount;

}

@property (assign) unsigned long long pointCount;              //@synthesize pointCount=_pointCount - In the implementation block
-(unsigned long long)pointCount;
-(CGRect)faceBoundingBox;
-(id)initWithFaceBoundingBox:(CGRect)arg1 ;
-(void)setPointCount:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

