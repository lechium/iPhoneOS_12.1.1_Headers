/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFJSONSerializable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSData, NSDictionary;

@interface SFResultSection : NSObject <SFJSONSerializable, NSSecureCoding, NSCopying> {

	NSArray* _results;
	unsigned long long _maxInitiallyVisibleResults;
	NSString* _identifier;
	NSString* _bundleIdentifier;
	NSString* _title;
	NSString* _moreText;
	double _rankingScore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,retain) NSArray * results;                                          //@synthesize results=_results - In the implementation block
@property (assign,nonatomic) unsigned long long maxInitiallyVisibleResults;              //@synthesize maxInitiallyVisibleResults=_maxInitiallyVisibleResults - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                  //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * moreText;                                          //@synthesize moreText=_moreText - In the implementation block
@property (assign,nonatomic) double rankingScore;                                        //@synthesize rankingScore=_rankingScore - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)moreText;
-(void)setMoreText:(NSString *)arg1 ;
-(unsigned long long)maxInitiallyVisibleResults;
-(void)setMaxInitiallyVisibleResults:(unsigned long long)arg1 ;
-(void)setRankingScore:(double)arg1 ;
-(NSData *)jsonData;
-(double)rankingScore;
-(id)init;
-(NSString *)identifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
@end

