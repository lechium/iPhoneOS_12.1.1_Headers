/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DOCLocation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class FPItem, NSString, NSArray;

@interface DOCConcreteLocation : NSObject <DOCLocation, NSSecureCoding> {

	BOOL _needsToResolveHierarchy;
	BOOL _isFPV2;
	FPItem* _fileProviderItem;
	NSString* _promptText;
	NSString* _sourceIdentifier;
	NSString* _title;
	NSArray* _tags;

}

@property (retain) FPItem * fileProviderItem;                 //@synthesize fileProviderItem=_fileProviderItem - In the implementation block
@property (copy) NSString * promptText;                       //@synthesize promptText=_promptText - In the implementation block
@property (copy) NSString * sourceIdentifier;                 //@synthesize sourceIdentifier=_sourceIdentifier - In the implementation block
@property (copy) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (assign) BOOL needsToResolveHierarchy;              //@synthesize needsToResolveHierarchy=_needsToResolveHierarchy - In the implementation block
@property (copy,readonly) NSArray * tags;                     //@synthesize tags=_tags - In the implementation block
@property (assign) BOOL isFPV2;                               //@synthesize isFPV2=_isFPV2 - In the implementation block
+(id)searchLocation;
+(id)defaultLocation;
+(id)emptyLocation;
+(id)recentsLocation;
+(id)recentDocumentsLocation;
+(id)sharedItemsLocation;
+(id)trashedItemsLocation;
+(id)defaultSaveLocation;
+(BOOL)supportsSecureCoding;
-(id)initWithTags:(id)arg1 ;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(NSString *)sourceIdentifier;
-(void)setPromptText:(NSString *)arg1 ;
-(NSString *)promptText;
-(NSArray *)tags;
-(FPItem *)fileProviderItem;
-(void)setIsFPV2:(BOOL)arg1 ;
-(void)setFileProviderItem:(FPItem *)arg1 ;
-(BOOL)isFPV2;
-(id)initWithSourceIdentifier:(id)arg1 fileProviderItem:(id)arg2 ;
-(BOOL)needsToResolveHierarchy;
-(void)setNeedsToResolveHierarchy:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end

