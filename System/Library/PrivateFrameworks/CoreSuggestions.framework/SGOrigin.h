/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CSPerson, NSArray, NSDate, SGSimpleNamedEmailAddress, NSURL;

@interface SGOrigin : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _type;
	NSString* _sourceKey;
	NSString* _externalKey;
	NSString* _contextSnippet;
	NSRange _contextSnippetRange;
	CSPerson* _fromPerson;
	NSString* _bundleId;
	NSArray* _to;
	NSArray* _cc;
	NSArray* _bcc;
	NSDate* _date;
	NSString* _title;
	BOOL _fromForwardedMessage;
	NSString* _localizedApplicationName;
	NSString* _teamId;

}

@property (nonatomic,readonly) unsigned long long type;                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * sourceKey;                                       //@synthesize sourceKey=_sourceKey - In the implementation block
@property (nonatomic,readonly) NSString * externalKey;                                     //@synthesize externalKey=_externalKey - In the implementation block
@property (nonatomic,readonly) NSString * contextSnippet;                                  //@synthesize contextSnippet=_contextSnippet - In the implementation block
@property (nonatomic,readonly) NSRange contextSnippetRange;                                //@synthesize contextSnippetRange=_contextSnippetRange - In the implementation block
@property (nonatomic,readonly) SGSimpleNamedEmailAddress * from; 
@property (nonatomic,readonly) CSPerson * fromPerson;                                      //@synthesize fromPerson=_fromPerson - In the implementation block
@property (nonatomic,readonly) NSString * bundleId;                                        //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) NSString * localizedApplicationName;                        //@synthesize localizedApplicationName=_localizedApplicationName - In the implementation block
@property (nonatomic,readonly) NSString * teamId;                                          //@synthesize teamId=_teamId - In the implementation block
@property (nonatomic,readonly) NSArray * to;                                               //@synthesize to=_to - In the implementation block
@property (nonatomic,readonly) NSArray * cc;                                               //@synthesize cc=_cc - In the implementation block
@property (nonatomic,readonly) NSArray * bcc;                                              //@synthesize bcc=_bcc - In the implementation block
@property (nonatomic,readonly) NSDate * date;                                              //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (getter=isFromForwardedMessage,readonly) BOOL fromForwardedMessage;              //@synthesize fromForwardedMessage=_fromForwardedMessage - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
+(id)originWithType:(unsigned long long)arg1 sourceKey:(id)arg2 externalKey:(id)arg3 bundleId:(id)arg4 fromForwardedMessage:(BOOL)arg5 ;
+(id)originWithType:(unsigned long long)arg1 sourceKey:(id)arg2 externalKey:(id)arg3 fromForwardedMessage:(BOOL)arg4 ;
+(BOOL)supportsSecureCoding;
-(SGSimpleNamedEmailAddress *)from;
-(NSArray *)to;
-(NSString *)teamId;
-(NSString *)localizedApplicationName;
-(NSString *)contextSnippet;
-(NSRange)contextSnippetRange;
-(CSPerson *)fromPerson;
-(id)initWithType:(unsigned long long)arg1 sourceKey:(id)arg2 externalKey:(id)arg3 bundleId:(id)arg4 fromForwardedMessage:(BOOL)arg5 ;
-(void)_resolveAppName;
-(BOOL)isEqualToOrigin:(id)arg1 ;
-(NSArray *)bcc;
-(NSArray *)cc;
-(BOOL)isFromForwardedMessage;
-(NSString *)sourceKey;
-(NSString *)externalKey;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(NSDate *)date;
-(NSURL *)url;
-(NSString *)bundleId;
@end

