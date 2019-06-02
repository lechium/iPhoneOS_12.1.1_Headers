/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPStoreModelObjectBuilder.h>

@class MPStoreModelPlaybackPositionBuilder, MPStoreModelMovieMediaClipBuilder, MPStoreModelStoreAssetBuilder, MPPropertySet;

@interface MPStoreModelMovieBuilder : MPStoreModelObjectBuilder {

	MPStoreModelPlaybackPositionBuilder* _playbackPositionBuilder;
	MPStoreModelMovieMediaClipBuilder* _mediaClipBuilder;
	MPStoreModelStoreAssetBuilder* _storeAssetBuilder;
	MPPropertySet* _storeAssetProperties;
	SCD_Struct_MP71 _requestedMovieProperties;

}
+(id)allSupportedProperties;
-(id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 ;
@end
