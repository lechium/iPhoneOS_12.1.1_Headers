/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGAbstractSuggester.h>
#import <libobjc.A.dylib/PGCoordinatableSuggester.h>

@class PGSuggestionOptions, NSArray, NSEnumerator, PLPhotoEditPersistenceManager, NSMutableDictionary, PLPhotoEffect, NSString;

@interface PGStudioLightSuggester : PGAbstractSuggester <PGCoordinatableSuggester> {

	PGSuggestionOptions* _options;
	NSArray* _suggestedAssets;
	NSEnumerator* _suggestedAssetEnumerator;
	PLPhotoEditPersistenceManager* _photoEditPersistenceManager;
	NSMutableDictionary* _editModelByAssetUUID;
	PLPhotoEffect* _studioLightPhotoEffect;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)suggestionTypes;
+(id)suggestionSubtypes;
-(id)initWithSession:(id)arg1 ;
-(id)suggestedAssetsInAssets:(id)arg1 options:(id)arg2 ;
-(id)suggestedAssetsInAssets:(id)arg1 ;
-(id)suggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
-(void)startSuggestingWithOptions:(id)arg1 ;
-(id)nextSuggestion;
-(id)suggestionWithAsset:(id)arg1 ;
-(id)portraitsBetweenStartDate:(id)arg1 andEndDate:(id)arg2 ;
-(id)editModelForAsset:(id)arg1 baseVersion:(out long long*)arg2 ;
-(id)studioLightRecipeWithAsset:(id)arg1 ;
-(void)reset;
@end

