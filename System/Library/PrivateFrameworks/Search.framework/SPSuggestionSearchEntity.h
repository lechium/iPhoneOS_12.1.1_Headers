/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:12 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Search/SPSearchEntity.h>

@class NSString;

@interface SPSuggestionSearchEntity : SPSearchEntity {

	NSString* _queryString;
	NSString* _tokenText;

}

@property (nonatomic,retain) NSString * queryString;              //@synthesize queryString=_queryString - In the implementation block
@property (nonatomic,retain) NSString * tokenText;                //@synthesize tokenText=_tokenText - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setQueryString:(NSString *)arg1 ;
-(NSString *)queryString;
-(id)initWithQueryString:(id)arg1 tokenText:(id)arg2 ;
-(void)setTokenText:(NSString *)arg1 ;
-(NSString *)tokenText;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

