/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:01 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <StoreKitUI/SKUIArtworkRequest.h>

@class MPArtworkCatalog;

@interface MSCLStoreItemArtworkRequest : SKUIArtworkRequest {

	MPArtworkCatalog* _artworkCatalog;
	CGSize _imageSize;

}
-(id)newLoadOperation;
-(id)initWithStoreItem:(id)arg1 imageSize:(CGSize)arg2 ;
@end
