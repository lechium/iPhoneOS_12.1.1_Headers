/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNObservation.h>

@class MLFeatureValue;

@interface VNCoreMLFeatureValueObservation : VNObservation {

	MLFeatureValue* _featureValue;

}

@property (nonatomic,copy,readonly) MLFeatureValue * featureValue;              //@synthesize featureValue=_featureValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithRequestRevision:(unsigned long long)arg1 featureValue:(id)arg2 ;
-(MLFeatureValue *)featureValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
