/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIMediaItem.h>
#import <libobjc.A.dylib/VUIMPMediaEntityImageLoadParamsCreating.h>

@class NSString, MPMediaItem;

@interface VUIMPMediaItem : VUIMediaItem <VUIMPMediaEntityImageLoadParamsCreating> {

	NSString* _coverArtImageIdentifier;
	NSString* _previewFrameImageIdentifier;
	MPMediaItem* _mediaItem;

}

@property (nonatomic,retain) MPMediaItem * mediaItem;              //@synthesize mediaItem=_mediaItem - In the implementation block
-(id)studio;
-(id)isPlayable;
-(MPMediaItem *)mediaItem;
-(void)setMediaItem:(MPMediaItem *)arg1 ;
-(id)credits;
-(id)contentRating;
-(id)assetType;
-(id)extrasURL;
-(id)resolution;
-(id)isLocal;
-(id)assetController;
-(id)mediaPlayerMediaItem;
-(id)imageLoadParamsWithImageType:(unsigned long long)arg1 ;
-(id)rentalExpirationDate;
-(id)initWithMediaLibrary:(id)arg1 mediaItem:(id)arg2 requestedProperties:(id)arg3 ;
-(id)previewFrameImageIdentifier;
-(id)seasonIdentifier;
-(id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4 ;
-(id)coverArtImageIdentifier;
-(id)playedState;
-(id)showIdentifier;
-(id)_valueForPropertyDescriptor:(id)arg1 ;
-(id)colorCapability;
-(id)audioCapability;
-(id)HLSResolution;
-(id)HLSColorCapability;
-(id)HLSAudioCapability;
@end

