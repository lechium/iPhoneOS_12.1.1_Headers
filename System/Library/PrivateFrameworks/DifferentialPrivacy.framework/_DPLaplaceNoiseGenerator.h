/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:59 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _DPLaplaceNoiseGenerator : NSObject {

	double _b;

}

@property (b,nonatomic,readonly) double b;              //@synthesize b=_b - In the implementation block
+(id)zeroMeanLaplaceNoiseGenerator:(double)arg1 ;
-(id)initWithScale:(double)arg1 ;
-(double)b;
-(double)sample;
-(id)init;
-(id)description;
@end

