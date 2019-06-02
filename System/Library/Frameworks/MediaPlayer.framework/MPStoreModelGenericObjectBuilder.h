/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPStoreModelObjectBuilder.h>

@class NSMapTable, MPStoreModelAlbumBuilder, MPStoreModelArtistBuilder, MPStoreModelMovieBuilder, MPStoreModelPlaylistBuilder, MPStoreModelSongBuilder, MPStoreModelTVEpisodeBuilder, MPStoreModelTVSeasonBuilder, MPStoreModelTVShowBuilder;

@interface MPStoreModelGenericObjectBuilder : MPStoreModelObjectBuilder {

	NSMapTable* _baseContentItemIDToOccurrenceCount;
	MPStoreModelAlbumBuilder* _albumBuilder;
	MPStoreModelArtistBuilder* _artistBuilder;
	MPStoreModelMovieBuilder* _movieBuilder;
	MPStoreModelPlaylistBuilder* _playlistBuilder;
	MPStoreModelSongBuilder* _songBuilder;
	MPStoreModelTVEpisodeBuilder* _tvEpisodeBuilder;
	MPStoreModelTVSeasonBuilder* _tvSeasonBuilder;
	MPStoreModelTVShowBuilder* _tvShowBuilder;
	BOOL _shouldUsePlaylistEntry;
	BOOL _shouldUseUniqueContentItemIDs;

}

@property (assign,nonatomic) BOOL shouldUsePlaylistEntry;                     //@synthesize shouldUsePlaylistEntry=_shouldUsePlaylistEntry - In the implementation block
@property (assign,nonatomic) BOOL shouldUseUniqueContentItemIDs;              //@synthesize shouldUseUniqueContentItemIDs=_shouldUseUniqueContentItemIDs - In the implementation block
-(id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 ;
-(id)_modelObjectWithUniqueContentItemIDForModelObject:(id)arg1 ;
-(BOOL)shouldUsePlaylistEntry;
-(void)setShouldUsePlaylistEntry:(BOOL)arg1 ;
-(BOOL)shouldUseUniqueContentItemIDs;
-(void)setShouldUseUniqueContentItemIDs:(BOOL)arg1 ;
@end

