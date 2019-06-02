/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:42 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpotlight/CoreSpotlight-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CSCustomAttributeKey : NSObject <NSCopying, NSSecureCoding> {

	BOOL _searchable;
	BOOL _searchableByDefault;
	BOOL _unique;
	BOOL _multiValued;
	NSString* _keyName;

}

@property (retain) NSString * keyName;                                          //@synthesize keyName=_keyName - In the implementation block
@property (getter=isUnique) BOOL unique;                                        //@synthesize unique=_unique - In the implementation block
@property (getter=isSearchable) BOOL searchable;                                //@synthesize searchable=_searchable - In the implementation block
@property (getter=isSearchableByDefault) BOOL searchableByDefault;              //@synthesize searchableByDefault=_searchableByDefault - In the implementation block
@property (getter=isMultiValued) BOOL multiValued;                              //@synthesize multiValued=_multiValued - In the implementation block
+(BOOL)_keyNameIsValid:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)initWithKeyName:(id)arg1 searchable:(BOOL)arg2 searchableByDefault:(BOOL)arg3 unique:(BOOL)arg4 multiValued:(BOOL)arg5 ;
-(void)setKeyName:(NSString *)arg1 ;
-(void)setSearchable:(BOOL)arg1 ;
-(void)setSearchableByDefault:(BOOL)arg1 ;
-(void)setUnique:(BOOL)arg1 ;
-(void)setMultiValued:(BOOL)arg1 ;
-(NSString *)keyName;
-(BOOL)isSearchableByDefault;
-(BOOL)isMultiValued;
-(BOOL)isUnique;
-(BOOL)isSearchable;
-(id)initWithKeyName:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

