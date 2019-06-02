/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAVItem.h>
#import <libobjc.A.dylib/MPRTCReportingItemSessionCreating.h>

@class MPModelGenericObject, MPModelMediaClip, NSString;

@interface MPCModelMediaClipAVItem : MPAVItem <MPRTCReportingItemSessionCreating> {

	MPModelGenericObject* _modelGenericObject;
	id _rtcReportingParentHierarchyToken;
	MPModelMediaClip* _mediaClip;

}

@property (nonatomic,readonly) MPModelMediaClip * mediaClip;                               //@synthesize mediaClip=_mediaClip - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id rtcReportingParentHierarchyToken; 
@property (nonatomic,copy,readonly) NSString * rtcReportingServiceIdentifier; 
@property (nonatomic,readonly) long long rtcReportingAssetType; 
+(id)requiredMediaClipProperties;
-(void)loadAssetAndPlayerItem;
-(id)mainTitle;
-(id)modelGenericObject;
-(double)durationFromExternalMetadata;
-(void)notePlaybackFinishedByHittingEnd;
-(void)setPlaybackFinishedTime:(double)arg1 ;
-(BOOL)isCloudItem;
-(BOOL)isValidPlayerSubstituteForItem:(id)arg1 ;
-(BOOL)isAssetURLValid;
-(BOOL)isStreamable;
-(void)reevaluateType;
-(BOOL)prefersSeekOverSkip;
-(BOOL)allowsAirPlayFromCloud;
-(BOOL)allowsExternalPlayback;
-(/*^block*/id)artworkCatalogBlock;
-(void)_applyLoudnessInfo;
-(id)rtcReportingParentHierarchyToken;
-(NSString *)rtcReportingServiceIdentifier;
-(long long)rtcReportingAssetType;
-(MPModelMediaClip *)mediaClip;
-(BOOL)_allowsCellularPlayback;
-(id)_currentPreferredStaticAsset;
-(BOOL)_isVideoAsset;
-(id)initWithMediaClip:(id)arg1 ;
-(NSString *)description;
@end
