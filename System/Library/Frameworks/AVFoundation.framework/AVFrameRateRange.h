/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVFrameRateRangeInternal;

@interface AVFrameRateRange : NSObject {

	AVFrameRateRangeInternal* _internal;

}

@property (readonly) double minFrameRate; 
@property (readonly) double maxFrameRate; 
@property (readonly) SCD_Struct_AV5 maxFrameDuration; 
@property (readonly) SCD_Struct_AV5 minFrameDuration; 
+(id)frameRateRangeWithMinRate:(int)arg1 maxFrameRate:(int)arg2 ;
-(BOOL)includesFrameDuration:(SCD_Struct_AV5)arg1 ;
-(id)initWithMinFrameRate:(int)arg1 maxFrameRate:(int)arg2 ;
-(BOOL)includesFrameRate:(double)arg1 ;
-(SCD_Struct_AV5)maxFrameDuration;
-(SCD_Struct_AV5)minFrameDuration;
-(double)minFrameRate;
-(double)maxFrameRate;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
@end

