/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, MPModelKind, MPPropertySet, NSArray;

@interface MPModelRequest : NSObject <NSCopying, NSSecureCoding> {

	BOOL _shouldIncludeContentItemID;
	NSString* _label;
	MPModelKind* _sectionKind;
	MPPropertySet* _sectionProperties;
	NSArray* _sectionSortDescriptors;
	MPModelKind* _itemKind;
	MPPropertySet* _itemProperties;
	NSArray* _itemSortDescriptors;

}

@property (assign,nonatomic) BOOL shouldIncludeContentItemID;              //@synthesize shouldIncludeContentItemID=_shouldIncludeContentItemID - In the implementation block
@property (nonatomic,copy) NSString * label;                               //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) MPModelKind * sectionKind;                    //@synthesize sectionKind=_sectionKind - In the implementation block
@property (nonatomic,copy) MPPropertySet * sectionProperties;              //@synthesize sectionProperties=_sectionProperties - In the implementation block
@property (nonatomic,copy) NSArray * sectionSortDescriptors;               //@synthesize sectionSortDescriptors=_sectionSortDescriptors - In the implementation block
@property (nonatomic,retain) MPModelKind * itemKind;                       //@synthesize itemKind=_itemKind - In the implementation block
@property (nonatomic,copy) MPPropertySet * itemProperties;                 //@synthesize itemProperties=_itemProperties - In the implementation block
@property (nonatomic,copy) NSArray * itemSortDescriptors;                  //@synthesize itemSortDescriptors=_itemSortDescriptors - In the implementation block
@property (nonatomic,retain) Class sectionClass; 
@property (nonatomic,retain) Class itemClass; 
+(id)sharedQueue;
+(BOOL)supportsSecureCoding;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(Class)itemClass;
-(void)performWithResponseHandler:(/*^block*/id)arg1 ;
-(MPModelKind *)sectionKind;
-(NSArray *)sectionSortDescriptors;
-(NSArray *)itemSortDescriptors;
-(MPPropertySet *)itemProperties;
-(MPPropertySet *)sectionProperties;
-(void)setSectionKind:(MPModelKind *)arg1 ;
-(BOOL)shouldIncludeContentItemID;
-(id)_kindForClass:(Class)arg1 ;
-(Class)sectionClass;
-(void)setSectionClass:(Class)arg1 ;
-(void)setItemClass:(Class)arg1 ;
-(void)setSectionProperties:(MPPropertySet *)arg1 ;
-(void)setSectionSortDescriptors:(NSArray *)arg1 ;
-(void)setItemProperties:(MPPropertySet *)arg1 ;
-(void)setItemSortDescriptors:(NSArray *)arg1 ;
-(void)setShouldIncludeContentItemID:(BOOL)arg1 ;
-(MPModelKind *)itemKind;
-(void)setItemKind:(MPModelKind *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
@end

