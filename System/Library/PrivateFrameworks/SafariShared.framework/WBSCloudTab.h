/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/WBSTabItemSearchSupport.h>

@class NSString, NSArray, NSDictionary, NSURL, NSUUID;

@interface WBSCloudTab : NSObject <NSCopying, WBSTabItemSearchSupport> {

	BOOL _matchedLastSearch;
	BOOL _isShowingReader;
	BOOL _pinned;
	NSString* _titleForLastSearch;
	NSArray* _titleWords;
	NSString* _URLStringForLastSearch;
	NSArray* _URLStringComponents;
	NSString* _lastSearchTerm;
	NSDictionary* _readerScrollPositionDictionary;
	NSString* _title;
	NSURL* _url;
	NSUUID* _uuid;

}

@property (assign,nonatomic) BOOL isShowingReader;                                                          //@synthesize isShowingReader=_isShowingReader - In the implementation block
@property (nonatomic,copy) NSDictionary * readerScrollPositionDictionary;                                   //@synthesize readerScrollPositionDictionary=_readerScrollPositionDictionary - In the implementation block
@property (nonatomic,copy) NSString * title;                                                                //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSURL * url;                                                                   //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                                 //@synthesize uuid=_uuid - In the implementation block
@property (assign,getter=isPinned,nonatomic) BOOL pinned;                                                   //@synthesize pinned=_pinned - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentationForUserActivityUserInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * titleForLastSearch;                                                   //@synthesize titleForLastSearch=_titleForLastSearch - In the implementation block
@property (nonatomic,copy) NSArray * titleWords;                                                            //@synthesize titleWords=_titleWords - In the implementation block
@property (nonatomic,readonly) NSString * URLString; 
@property (nonatomic,copy) NSString * URLStringForLastSearch;                                               //@synthesize URLStringForLastSearch=_URLStringForLastSearch - In the implementation block
@property (nonatomic,copy) NSArray * URLStringComponents;                                                   //@synthesize URLStringComponents=_URLStringComponents - In the implementation block
@property (nonatomic,copy) NSString * lastSearchTerm;                                                       //@synthesize lastSearchTerm=_lastSearchTerm - In the implementation block
@property (assign,nonatomic) BOOL matchedLastSearch;                                                        //@synthesize matchedLastSearch=_matchedLastSearch - In the implementation block
+(id)_dictionaryWithURL:(id)arg1 uuid:(id)arg2 title:(id)arg3 isShowingReader:(BOOL)arg4 readerScrollPosition:(id)arg5 isPinned:(BOOL)arg6 ;
-(NSString *)titleForLastSearch;
-(void)setTitleForLastSearch:(NSString *)arg1 ;
-(NSArray *)titleWords;
-(void)setTitleWords:(NSArray *)arg1 ;
-(NSString *)URLStringForLastSearch;
-(void)setURLStringForLastSearch:(NSString *)arg1 ;
-(NSArray *)URLStringComponents;
-(void)setURLStringComponents:(NSArray *)arg1 ;
-(BOOL)matchedLastSearch;
-(void)setMatchedLastSearch:(BOOL)arg1 ;
-(id)initWithDictionaryFromUserActivityUserInfo:(id)arg1 ;
-(id)initWithURL:(id)arg1 uuid:(id)arg2 title:(id)arg3 isShowingReader:(BOOL)arg4 readerScrollPosition:(id)arg5 ;
-(id)initWithURL:(id)arg1 uuid:(id)arg2 title:(id)arg3 isShowingReader:(BOOL)arg4 readerScrollPosition:(id)arg5 isPinned:(BOOL)arg6 ;
-(BOOL)hasSameUUIDAndURLAsTab:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentationForUserActivityUserInfo;
-(BOOL)isShowingReader;
-(void)setIsShowingReader:(BOOL)arg1 ;
-(NSDictionary *)readerScrollPositionDictionary;
-(void)setReaderScrollPositionDictionary:(NSDictionary *)arg1 ;
-(NSString *)lastSearchTerm;
-(void)setLastSearchTerm:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setUuid:(NSUUID *)arg1 ;
-(NSUUID *)uuid;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isPinned;
-(void)setPinned:(BOOL)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)URLString;
@end

