/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:43 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSuggestions/MapsSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <MapsSuggestions/MapsSuggestionsObject.h>

@class NSMutableSet, NSMutableDictionary, NSString, NSData, NSDate, GEOMapItemStorage;

@interface MapsSuggestionsEntry : NSObject <NSCopying, NSSecureCoding, MapsSuggestionsObject> {

	NSMutableSet* _typeHistory;
	NSMutableDictionary* _sourceSpecificInfo;
	BOOL _deleted;
	long long _type;
	NSString* _title;
	NSString* _titleWhenLocked;
	NSString* _subtitle;
	NSString* _subtitleWhenLocked;
	NSData* _iconData;
	NSString* _undecoratedTitle;
	NSString* _undecoratedTitleWhenLocked;
	NSString* _undecoratedSubtitle;
	NSString* _undecoratedSubtitleWhenLocked;
	double _weight;
	NSDate* _expires;
	GEOMapItemStorage* _geoMapItem;
	NSString* _originatingSourceName;

}

@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) long long type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * titleWhenLocked;                            //@synthesize titleWhenLocked=_titleWhenLocked - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                                   //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,retain) NSString * subtitleWhenLocked;                         //@synthesize subtitleWhenLocked=_subtitleWhenLocked - In the implementation block
@property (nonatomic,retain) NSData * iconData;                                     //@synthesize iconData=_iconData - In the implementation block
@property (nonatomic,retain) NSString * undecoratedTitle;                           //@synthesize undecoratedTitle=_undecoratedTitle - In the implementation block
@property (nonatomic,retain) NSString * undecoratedTitleWhenLocked;                 //@synthesize undecoratedTitleWhenLocked=_undecoratedTitleWhenLocked - In the implementation block
@property (nonatomic,retain) NSString * undecoratedSubtitle;                        //@synthesize undecoratedSubtitle=_undecoratedSubtitle - In the implementation block
@property (nonatomic,retain) NSString * undecoratedSubtitleWhenLocked;              //@synthesize undecoratedSubtitleWhenLocked=_undecoratedSubtitleWhenLocked - In the implementation block
@property (assign,nonatomic) double weight;                                         //@synthesize weight=_weight - In the implementation block
@property (nonatomic,retain) NSDate * expires;                                      //@synthesize expires=_expires - In the implementation block
@property (assign,nonatomic) BOOL deleted;                                          //@synthesize deleted=_deleted - In the implementation block
@property (nonatomic,retain) GEOMapItemStorage * geoMapItem;                        //@synthesize geoMapItem=_geoMapItem - In the implementation block
@property (nonatomic,retain) NSString * originatingSourceName;                      //@synthesize originatingSourceName=_originatingSourceName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * uniqueName; 
+(id)entryWithType:(long long)arg1 title:(id)arg2 subtitle:(id)arg3 weight:(double)arg4 expires:(id)arg5 sourceSpecificInfo:(id)arg6 ;
+(int)defaultDirectionsTransportType;
+(id)entryWithData:(id)arg1 ;
+(id)entryFromSerializedHexString:(id)arg1 hasPrefix:(BOOL)arg2 ;
+(id)entryFromSerializedBase64String:(id)arg1 hasPrefix:(BOOL)arg2 ;
+(id)entryFromSerializedString:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(void)setURL:(id)arg1 forKey:(id)arg2 ;
-(id)endTime;
-(BOOL)containsKey:(id)arg1 ;
-(GEOMapItemStorage *)geoMapItem;
-(BOOL)hasStartTime;
-(BOOL)hasEndTime;
-(void)setDeleted:(BOOL)arg1 ;
-(BOOL)deleted;
-(id)fullDescription;
-(void)setString:(id)arg1 forKey:(id)arg2 ;
-(void)setGeoMapItem:(GEOMapItemStorage *)arg1 ;
-(BOOL)hasExpired;
-(void)setInteger:(long long)arg1 forKey:(id)arg2 ;
-(NSData *)iconData;
-(void)setIconData:(NSData *)arg1 ;
-(void)setExpires:(NSDate *)arg1 ;
-(NSDate *)expires;
-(void)setDate:(id)arg1 forKey:(id)arg2 ;
-(void)setNumber:(id)arg1 forKey:(id)arg2 ;
-(NSArray*)stringArrayForKey:(id)arg1 ;
-(id)initWithType:(long long)arg1 title:(id)arg2 ;
-(id)initWithType:(long long)arg1 title:(id)arg2 subtitle:(id)arg3 weight:(double)arg4 expires:(id)arg5 sourceSpecificInfo:(id)arg6 ;
-(id)initWithType:(long long)arg1 title:(id)arg2 subtitle:(id)arg3 weight:(double)arg4 expires:(id)arg5 geoMapItem:(GEOMapItemStorage*)arg6 sourceSpecificInfo:(id)arg7 ;
-(void)setUndecoratedTitle:(NSString *)arg1 ;
-(void)setUndecoratedSubtitle:(NSString *)arg1 ;
-(void)setUndecoratedTitleWhenLocked:(NSString *)arg1 ;
-(void)setUndecoratedSubtitleWhenLocked:(NSString *)arg1 ;
-(BOOL)isEqualToEntry:(id)arg1 ;
-(id)sourceSpecificInfo;
-(void)setSourceSpecificInfo:(id)arg1 ;
-(void)_setValue:(id)arg1 forKey:(id)arg2 class:(Class)arg3 ;
-(void)setStringArray:(NSArray*)arg1 forKey:(id)arg2 ;
-(void)setBoolean:(BOOL)arg1 forKey:(id)arg2 ;
-(void)setUUID:(id)arg1 forKey:(id)arg2 ;
-(void)setETA:(id)arg1 forKey:(id)arg2 ;
-(void)setMapItemHandleData:(NSData*)arg1 ;
-(id)_valueForKey:(id)arg1 class:(Class)arg2 ;
-(BOOL)booleanForKey:(id)arg1 ;
-(id)UUIDForKey:(id)arg1 ;
-(id)ETAForKey:(id)arg1 ;
-(NSData*)mapItemHandleData;
-(long long)availableRemovalBehaviors;
-(void)setAvailableRemovalBehavior:(long long)arg1 ;
-(void)resetAvailableRemovalBehavior:(long long)arg1 ;
-(id)serializedHexString;
-(id)serializedBase64String;
-(void)_overrideType:(long long)arg1 ;
-(BOOL)_wasEverOfType:(long long)arg1 ;
-(BOOL)_wasEverOneOfTypes:(id)arg1 ;
-(NSString *)titleWhenLocked;
-(void)setTitleWhenLocked:(NSString *)arg1 ;
-(NSString *)subtitleWhenLocked;
-(void)setSubtitleWhenLocked:(NSString *)arg1 ;
-(NSString *)undecoratedTitle;
-(NSString *)undecoratedTitleWhenLocked;
-(NSString *)undecoratedSubtitle;
-(NSString *)undecoratedSubtitleWhenLocked;
-(NSString *)originatingSourceName;
-(void)setOriginatingSourceName:(NSString *)arg1 ;
-(void)mergeSpecificsFromSuggestionEntry:(id)arg1 behavior:(unsigned long long)arg2 ;
-(BOOL)wasEverOfType:(long long)arg1 ;
-(BOOL)wasEverOneOfTypes:(id)arg1 ;
-(BOOL)startsBeforeEntry:(id)arg1 ;
-(BOOL)expiresBeforeEntry:(id)arg1 ;
-(void)mergeFromSuggestionEntry:(id)arg1 behavior:(unsigned long long)arg2 ;
-(void)replaceByEntry:(id)arg1 ;
-(BOOL)hasStartAndEndTime;
-(void)mergeFromSuggestionEntry:(id)arg1 behavior:(unsigned long long)arg2 protectTitles:(BOOL)arg3 protectTitleDecorations:(BOOL)arg4 protectMapItem:(BOOL)arg5 protectWeight:(BOOL)arg6 protectExpiration:(BOOL)arg7 protectIcon:(BOOL)arg8 ;
-(id)URLForKey:(id)arg1 ;
-(id)numberForKey:(id)arg1 ;
-(id)dateForKey:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(long long)type;
-(id)startTime;
-(NSString *)uniqueIdentifier;
-(long long)integerForKey:(id)arg1 ;
-(id)data;
-(id)shortDescription;
-(NSString *)uniqueName;
-(double)weight;
-(void)setWeight:(double)arg1 ;
-(id)stringForKey:(id)arg1 ;
@end

