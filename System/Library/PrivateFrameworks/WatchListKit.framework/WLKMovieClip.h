/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, WLKMovieClipPreviewArtwork, NSArray, WLKMovieClipAsset;

@interface WLKMovieClip : NSObject {

	NSString* _title;
	WLKMovieClipPreviewArtwork* _previewArtwork;
	NSArray* _assets;

}

@property (nonatomic,copy,readonly) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) WLKMovieClipPreviewArtwork * previewArtwork;              //@synthesize previewArtwork=_previewArtwork - In the implementation block
@property (nonatomic,copy,readonly) NSArray * assets;                                    //@synthesize assets=_assets - In the implementation block
@property (nonatomic,readonly) WLKMovieClipAsset * preferredAsset; 
+(id)movieClipsWithArray:(id)arg1 ;
-(NSArray *)assets;
-(WLKMovieClipAsset *)preferredAsset;
-(BOOL)_supportHD;
-(WLKMovieClipPreviewArtwork *)previewArtwork;
-(id)init;
-(NSString *)title;
-(id)initWithDictionary:(id)arg1 ;
-(id)_init;
@end

