/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:04 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
@class MPModelStorePlatformMetadataGenericObjectBuilder, MPPropertySet;

@interface MPCModelRadioStationTrackGenericObjectBuilder : NSObject {

	MPModelStorePlatformMetadataGenericObjectBuilder* _storePlatformBuilder;
	SCD_Struct_MP2 _requestedSongProperties;
	MPPropertySet* _requestedProperties;

}

@property (nonatomic,copy,readonly) MPPropertySet * requestedProperties;              //@synthesize requestedProperties=_requestedProperties - In the implementation block
-(MPPropertySet *)requestedProperties;
-(id)initWithRequestedProperties:(id)arg1 ;
-(id)genericObjectForRadioStationTrack:(id)arg1 contentItemID:(id)arg2 ;
@end

