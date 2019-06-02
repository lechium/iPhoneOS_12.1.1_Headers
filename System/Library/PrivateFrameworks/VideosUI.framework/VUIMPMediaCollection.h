/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VUIMediaCollection.h>
#import <libobjc.A.dylib/VUIMPMediaEntityImageLoadParamsCreating.h>

@class NSString, MPMediaItemCollection;

@interface VUIMPMediaCollection : VUIMediaCollection <VUIMPMediaEntityImageLoadParamsCreating> {

	NSString* _coverArtImageIdentifier;
	MPMediaItemCollection* _mediaItemCollection;

}

@property (nonatomic,retain) MPMediaItemCollection * mediaItemCollection;              //@synthesize mediaItemCollection=_mediaItemCollection - In the implementation block
-(id)contentRating;
-(id)resolution;
-(id)isLocal;
-(id)assetController;
-(id)initWithMediaLibrary:(id)arg1 mediaItemCollection:(id)arg2 identifier:(id)arg3 requestedProperties:(id)arg4 kind:(id)arg5 ;
-(MPMediaItemCollection *)mediaItemCollection;
-(id)imageLoadParamsWithImageType:(unsigned long long)arg1 ;
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
-(void)setMediaItemCollection:(MPMediaItemCollection *)arg1 ;
@end

