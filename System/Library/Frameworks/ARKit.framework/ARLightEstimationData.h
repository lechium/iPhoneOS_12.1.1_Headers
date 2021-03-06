/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARResultData.h>

@class ARLightEstimate, NSString;

@interface ARLightEstimationData : NSObject <ARResultData> {

	ARLightEstimate* _lightEstimate;

}

@property (nonatomic,retain) ARLightEstimate * lightEstimate;              //@synthesize lightEstimate=_lightEstimate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(ARLightEstimate *)lightEstimate;
-(void)setLightEstimate:(ARLightEstimate *)arg1 ;
-(double)timestamp;
@end

