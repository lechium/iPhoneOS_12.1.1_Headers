/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:24 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, NSArray, NSMutableDictionary, MLContentRating, MLMovieProperties, NSDictionary;

@interface MLTrackImport : NSObject <NSCopying> {

	NSData* _artworkData;
	NSString* _assetFilePath;
	NSArray* _chapters;
	NSMutableDictionary* _properties;
	BOOL _shouldAddToPurchasedPlaylist;
	BOOL _assignArtworkCacheIDFromAlbum;

}

@property (nonatomic,copy) NSData * artworkData;                                  //@synthesize artworkData=_artworkData - In the implementation block
@property (nonatomic,copy) NSString * assetFilePath;                              //@synthesize assetFilePath=_assetFilePath - In the implementation block
@property (nonatomic,copy) NSArray * chapters;                                    //@synthesize chapters=_chapters - In the implementation block
@property (nonatomic,copy) MLContentRating * contentRating; 
@property (assign,nonatomic) unsigned mediaType; 
@property (nonatomic,copy) MLMovieProperties * movieProperties; 
@property (assign,nonatomic) BOOL shouldAddToPurchasedPlaylist;                   //@synthesize shouldAddToPurchasedPlaylist=_shouldAddToPurchasedPlaylist - In the implementation block
@property (assign,nonatomic) BOOL assignArtworkCacheIDFromAlbum;                  //@synthesize assignArtworkCacheIDFromAlbum=_assignArtworkCacheIDFromAlbum - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * entityProperties; 
+(void)initialize;
-(void)setValue:(id)arg1 forEntityProperty:(id)arg2 ;
-(NSDictionary *)entityProperties;
-(MLMovieProperties *)movieProperties;
-(void)setMovieProperties:(MLMovieProperties *)arg1 ;
-(id)copyEntityProperties;
-(NSString *)assetFilePath;
-(void)setAssetFilePath:(NSString *)arg1 ;
-(BOOL)assignArtworkCacheIDFromAlbum;
-(void)setAssignArtworkCacheIDFromAlbum:(BOOL)arg1 ;
-(BOOL)shouldAddToPurchasedPlaylist;
-(void)setShouldAddToPurchasedPlaylist:(BOOL)arg1 ;
-(NSArray *)chapters;
-(void)setChapters:(NSArray *)arg1 ;
-(NSData *)artworkData;
-(void)setArtworkData:(NSData *)arg1 ;
-(unsigned)mediaType;
-(void)setMediaType:(unsigned)arg1 ;
-(id)valueForEntityProperty:(id)arg1 ;
-(void)setContentRating:(MLContentRating *)arg1 ;
-(MLContentRating *)contentRating;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

