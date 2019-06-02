/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKit/ARKit-Structs.h>
#import <ARKit/ARLightEstimate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface ARDirectionalLightEstimate : ARLightEstimate <NSCopying> {

	SCD_Struct_AR31 _sphericalHarmonicIntensity;
	NSData* _sphericalHarmonicsCoefficients;
	double _primaryLightIntensity;
	double _timestamp;
	double _confidenceRating;
	 _primaryLightDirection;

}

@property (assign,nonatomic) double timestamp;                                            //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double confidenceRating;                                     //@synthesize confidenceRating=_confidenceRating - In the implementation block
@property (nonatomic,copy,readonly) NSData * sphericalHarmonicsCoefficients; 
@property (nonatomic,readonly)  primaryLightDirection;                                    //@synthesize primaryLightDirection=_primaryLightDirection - In the implementation block
@property (nonatomic,readonly) double primaryLightIntensity;                              //@synthesize primaryLightIntensity=_primaryLightIntensity - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)sphericalHarmonicsCoefficients;
-(id)initWithSphericalHarmonics:(SCD_Struct_AR31)arg1 temperature:(double)arg2 ;
-(double)confidenceRating;
-(void)setConfidenceRating:(double)arg1 ;
-(id)initWithDirectionalLightEstimate:(id)arg1 ;
-(id)lightEstimateByApplyingRotation:(SCD_Struct_AR5)arg1 ;
-()primaryLightDirection;
-(double)primaryLightIntensity;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
@end
