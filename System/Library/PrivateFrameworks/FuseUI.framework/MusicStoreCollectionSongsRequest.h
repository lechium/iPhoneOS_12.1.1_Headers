/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:26 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <MediaPlayer/MPStoreModelRequest.h>

@class MPIdentifierSet;

@interface MusicStoreCollectionSongsRequest : MPStoreModelRequest {

	MPIdentifierSet* _collectionIdentifiers;

}

@property (nonatomic,retain) MPIdentifierSet * collectionIdentifiers;              //@synthesize collectionIdentifiers=_collectionIdentifiers - In the implementation block
+(id)allSupportedItemProperties;
+(id)allSupportedSectionProperties;
+(BOOL)supportsSecureCoding;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(MPIdentifierSet *)collectionIdentifiers;
-(void)setCollectionIdentifiers:(MPIdentifierSet *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

