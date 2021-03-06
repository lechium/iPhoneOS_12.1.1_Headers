/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <libobjc.A.dylib/PMLSampler.h>

@class NSString;

@interface PMLLaplaceSampler : NSObject <PMLSampler> {

	SCD_Struct_PM0 _rng;
	float _magnitude;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMagnitude:(float)arg1 ;
-(void)addNoise:(float*)arg1 count:(unsigned long long)arg2 scale:(float)arg3 ;
-(id)initWithMagnitude:(float)arg1 seed:(unsigned long long)arg2 ;
-(float)sample;
@end

