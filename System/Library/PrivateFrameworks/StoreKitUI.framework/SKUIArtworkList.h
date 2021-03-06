/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/SKUIArtworkProviding.h>

@class SKUIArtwork, NSMutableArray, NSArray, NSString, NSMutableDictionary;

@interface SKUIArtworkList : NSObject <SKUIArtworkProviding> {

	NSMutableArray* _artworks;

}

@property (getter=_lookupArray,nonatomic,readonly) NSArray * _lookupArray; 
@property (nonatomic,copy) NSArray * artworks;                                          //@synthesize artworks=_artworks - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSMutableDictionary * cacheRepresentation; 
@property (nonatomic,readonly) SKUIArtwork * largestArtwork; 
@property (nonatomic,readonly) SKUIArtwork * smallestArtwork; 
+(id)artworkForSize:(long long)arg1 artworkDictionaries:(id)arg2 ;
+(BOOL)canHandleArtworkFormat:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(BOOL)hasArtwork;
-(NSArray *)artworks;
-(void)setArtworks:(NSArray *)arg1 ;
-(id)artworkForSize:(long long)arg1 ;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(NSMutableDictionary *)cacheRepresentation;
-(id)artworkURLForSize:(long long)arg1 ;
-(SKUIArtwork *)largestArtwork;
-(NSArray *)_lookupArray;
-(id)bestArtworkForSize:(CGSize)arg1 ;
-(id)artworkWithWidth:(long long)arg1 ;
-(id)bestArtworkForScaledSize:(CGSize)arg1 ;
-(id)preferredExactArtworkForSize:(CGSize)arg1 ;
-(SKUIArtwork *)smallestArtwork;
-(id)initWithArtworkListArray:(id)arg1 ;
-(id)initWithLookupArray:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

