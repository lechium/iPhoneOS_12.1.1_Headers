/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MPArtworkDataSourceVisualIdenticality.h>

@class NSURL, NSArray, NSString;

@interface MPStoreArtworkRequestToken : NSObject <NSSecureCoding, MPArtworkDataSourceVisualIdenticality> {

	BOOL _shouldIgnoreImage;
	NSURL* _artworkURL;
	NSArray* _lookupItemArtworks;
	NSString* _cropStyle;
	NSString* _sourceEditorialArtworkKind;

}

@property (nonatomic,copy) NSURL * artworkURL;                                 //@synthesize artworkURL=_artworkURL - In the implementation block
@property (nonatomic,copy) NSArray * lookupItemArtworks;                       //@synthesize lookupItemArtworks=_lookupItemArtworks - In the implementation block
@property (nonatomic,copy) NSString * cropStyle;                               //@synthesize cropStyle=_cropStyle - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreImage;                           //@synthesize shouldIgnoreImage=_shouldIgnoreImage - In the implementation block
@property (nonatomic,copy) NSString * sourceEditorialArtworkKind;              //@synthesize sourceEditorialArtworkKind=_sourceEditorialArtworkKind - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setArtworkURL:(NSURL *)arg1 ;
-(void)setLookupItemArtworks:(NSArray *)arg1 ;
-(void)setSourceEditorialArtworkKind:(NSString *)arg1 ;
-(void)setCropStyle:(NSString *)arg1 ;
-(BOOL)shouldIgnoreImage;
-(NSArray *)lookupItemArtworks;
-(NSURL *)artworkURL;
-(NSString *)cropStyle;
-(void)setShouldIgnoreImage:(BOOL)arg1 ;
-(NSString *)sourceEditorialArtworkKind;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringRepresentation;
@end

