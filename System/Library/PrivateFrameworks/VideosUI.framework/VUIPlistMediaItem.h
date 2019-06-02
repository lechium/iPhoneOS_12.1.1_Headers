/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIMediaItem.h>
#import <libobjc.A.dylib/VUIPlistMediaEntityImageLoadParamsCreating.h>

@class VUIPlistMediaDatabaseItem;

@interface VUIPlistMediaItem : VUIMediaItem <VUIPlistMediaEntityImageLoadParamsCreating> {

	VUIPlistMediaDatabaseItem* _databaseItem;

}

@property (nonatomic,retain) VUIPlistMediaDatabaseItem * databaseItem;              //@synthesize databaseItem=_databaseItem - In the implementation block
-(id)seasonNumber;
-(id)showTitle;
-(id)imageLoadParamsWithImageType:(unsigned long long)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 databaseItem:(id)arg2 requestedProperties:(id)arg3 ;
-(id)previewFrameImageIdentifier;
-(id)seasonIdentifier;
-(id)seasonTitle;
-(id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4 ;
-(id)coverArtImageIdentifier;
-(id)playedState;
-(id)showIdentifier;
-(id)_valueForPropertyDescriptor:(id)arg1 ;
-(VUIPlistMediaDatabaseItem *)databaseItem;
-(void)setDatabaseItem:(VUIPlistMediaDatabaseItem *)arg1 ;
@end

