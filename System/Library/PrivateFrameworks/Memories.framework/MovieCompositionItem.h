/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:18 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/CompositionItem.h>

@class AVAsset, AVURLAsset;

@interface MovieCompositionItem : CompositionItem {

	AVAsset* m_asset;
	AVURLAsset* m_audioProxyAsset;

}

@property (nonatomic,retain) AVAsset * asset; 
@property (nonatomic,retain) AVURLAsset * audioProxyAsset; 
-(id)audioAsset;
-(SCD_Struct_Mi11)applySpeed:(SCD_Struct_Mi11)arg1 ;
-(BOOL)hasVideoContent;
-(id)videoTrackSegmentsWithDestinationRange:(SCD_Struct_Mi11)arg1 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_Mi1)arg1 paddedFromTime:(SCD_Struct_Mi1)arg2 ;
-(id)audioTrackSegmentsLoopedForDestinationTimeRange:(SCD_Struct_Mi11)arg1 ;
-(id)initWithClip:(id)arg1 ;
-(void)setAudioProxyAsset:(AVURLAsset *)arg1 ;
-(AVURLAsset *)audioProxyAsset;
-(id)speedRangesForSourceRange:(SCD_Struct_Mi11)arg1 destinationRange:(SCD_Struct_Mi11)arg2 ;
-(id)audioTrackSegmentsWithDestinationTime:(SCD_Struct_Mi1)arg1 ;
-(id)segmentWithCharacteristic:(id)arg1 sourceRange:(SCD_Struct_Mi11)arg2 destinationRange:(SCD_Struct_Mi11)arg3 ;
-(void)setAsset:(AVAsset *)arg1 ;
-(AVAsset *)asset;
@end
