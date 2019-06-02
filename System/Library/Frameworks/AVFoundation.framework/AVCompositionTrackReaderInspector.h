/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:21 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVTrackReaderInspector.h>

@interface AVCompositionTrackReaderInspector : AVTrackReaderInspector {

	OpaqueFigMutableCompositionRef _figMutableComposition;

}

@property (getter=_mutableComposition,nonatomic,readonly) OpaqueFigMutableCompositionRef mutableComposition; 
-(OpaqueFigMutableCompositionRef)_mutableComposition;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(BOOL)isDecodable;
-(int)playabilityValidationResult;
-(id)segmentForTrackTime:(SCD_Struct_AV5)arg1 ;
-(int)decodabilityValidationResult;
-(BOOL)isPlayable;
-(void)finalize;
-(void)dealloc;
-(id)segments;
@end

