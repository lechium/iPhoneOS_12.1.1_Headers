/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:48 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ContextKit.framework/ContextKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface CKContextRequest : NSObject <NSSecureCoding> {

	BOOL _textIsRaw;
	BOOL _includeHigherLevelTopics;
	BOOL _prepareOnly;
	BOOL _debug;
	BOOL _dontSkip;
	BOOL _timing;
	unsigned _topk;
	NSString* _text;
	NSString* _title;
	NSString* _contentDescription;
	NSString* _contentKeywords;
	NSString* _contentAuthor;
	NSString* _url;
	NSString* _languageTag;
	NSNumber* _overrideBlendAlpha;
	NSNumber* _overrideBlendBeta;
	NSNumber* _overrideBlendGamma;
	unsigned long long _type;

}

@property (assign,nonatomic) BOOL prepareOnly;                                                         //@synthesize prepareOnly=_prepareOnly - In the implementation block
@property (assign,nonatomic) BOOL debug;                                                               //@synthesize debug=_debug - In the implementation block
@property (assign,nonatomic) BOOL dontSkip;                                                            //@synthesize dontSkip=_dontSkip - In the implementation block
@property (assign,nonatomic) BOOL timing;                                                              //@synthesize timing=_timing - In the implementation block
@property (nonatomic,retain) NSNumber * overrideBlendAlpha;                                            //@synthesize overrideBlendAlpha=_overrideBlendAlpha - In the implementation block
@property (nonatomic,retain) NSNumber * overrideBlendBeta;                                             //@synthesize overrideBlendBeta=_overrideBlendBeta - In the implementation block
@property (nonatomic,retain) NSNumber * overrideBlendGamma;                                            //@synthesize overrideBlendGamma=_overrideBlendGamma - In the implementation block
@property (assign,nonatomic) unsigned topk;                                                            //@synthesize topk=_topk - In the implementation block
@property (assign,nonatomic) unsigned long long type;                                                  //@synthesize type=_type - In the implementation block
@property (setter=setText:,nonatomic,retain) NSString * text;                                          //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) BOOL textIsRaw;                                                           //@synthesize textIsRaw=_textIsRaw - In the implementation block
@property (setter=setTitle:,nonatomic,retain) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (setter=setContentDescription:,nonatomic,retain) NSString * contentDescription;              //@synthesize contentDescription=_contentDescription - In the implementation block
@property (setter=setContentKeywords:,nonatomic,retain) NSString * contentKeywords;                    //@synthesize contentKeywords=_contentKeywords - In the implementation block
@property (setter=setContentAuthor:,nonatomic,retain) NSString * contentAuthor;                        //@synthesize contentAuthor=_contentAuthor - In the implementation block
@property (nonatomic,retain) NSString * url;                                                           //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * languageTag;                                                   //@synthesize languageTag=_languageTag - In the implementation block
@property (assign,nonatomic) BOOL includeHigherLevelTopics;                                            //@synthesize includeHigherLevelTopics=_includeHigherLevelTopics - In the implementation block
+(void)statusWithReply:(/*^block*/id)arg1 ;
+(void)logEngagementForResponseId:(id)arg1 result:(id)arg2 rank:(unsigned long long)arg3 inputLength:(unsigned long long)arg4 completionLength:(unsigned long long)arg5 requestType:(unsigned long long)arg6 logType:(unsigned long long)arg7 ;
+(void)logTransactionSuccessfulForResponseId:(id)arg1 inputLength:(unsigned long long)arg2 completionLength:(unsigned long long)arg3 requestType:(unsigned long long)arg4 logType:(unsigned long long)arg5 ;
+(void)logResultsShownForResponseId:(id)arg1 shown:(unsigned long long)arg2 couldHaveShown:(unsigned long long)arg3 serverOverride:(BOOL)arg4 inputLength:(unsigned long long)arg5 requestType:(unsigned long long)arg6 logType:(unsigned long long)arg7 ;
+(void)findResultsForText:(id)arg1 languageTag:(id)arg2 requestType:(unsigned long long)arg3 withReply:(/*^block*/id)arg4 ;
+(void)runOffMainThread:(/*^block*/id)arg1 ;
+(void)warmUpForRequestType:(unsigned long long)arg1 withReply:(/*^block*/id)arg2 ;
+(void)portraitBlacklistWithReply:(/*^block*/id)arg1 ;
+(id)_newXpcConnection;
+(id)trimTextToSize:(id)arg1 ;
+(void)setDefaultRequestType:(unsigned long long)arg1 ;
+(void)findResultsForText:(id)arg1 withReply:(/*^block*/id)arg2 ;
+(void)findResultsForText:(id)arg1 languageTag:(id)arg2 withReply:(/*^block*/id)arg3 ;
+(void)prepareRequestForText:(id)arg1 withReply:(/*^block*/id)arg2 ;
+(void)findResponseByID:(id)arg1 withReply:(/*^block*/id)arg2 ;
+(id)requestWithText:(id)arg1 ;
+(BOOL)shutdownService;
+(BOOL)pingService;
+(BOOL)supportsSecureCoding;
+(void)initialize;
+(id)_xpcConnection;
-(id)initForClient:(id)arg1 ;
-(NSString *)languageTag;
-(void)setContentAuthor:(NSString *)arg1 ;
-(void)setContentKeywords:(NSString *)arg1 ;
-(void)setIncludeHigherLevelTopics:(BOOL)arg1 ;
-(void)setTextIsRaw:(BOOL)arg1 ;
-(void)executeWithReply:(/*^block*/id)arg1 ;
-(void)setContentDescription:(NSString *)arg1 ;
-(void)setLanguageTag:(NSString *)arg1 ;
-(id)execute;
-(BOOL)debug;
-(void)setDebug:(BOOL)arg1 ;
-(void)capabilitiesWithReply:(/*^block*/id)arg1 ;
-(void)_executeWithReply:(/*^block*/id)arg1 ;
-(void)setPrepareOnly:(BOOL)arg1 ;
-(void)_postProcessResponse:(id)arg1 ;
-(BOOL)textIsRaw;
-(NSString *)contentKeywords;
-(NSString *)contentAuthor;
-(BOOL)includeHigherLevelTopics;
-(BOOL)prepareOnly;
-(BOOL)dontSkip;
-(void)setDontSkip:(BOOL)arg1 ;
-(NSNumber *)overrideBlendAlpha;
-(void)setOverrideBlendAlpha:(NSNumber *)arg1 ;
-(NSNumber *)overrideBlendBeta;
-(void)setOverrideBlendBeta:(NSNumber *)arg1 ;
-(NSNumber *)overrideBlendGamma;
-(void)setOverrideBlendGamma:(NSNumber *)arg1 ;
-(unsigned)topk;
-(void)setTopk:(unsigned)arg1 ;
-(NSString *)contentDescription;
-(BOOL)timing;
-(void)setTiming:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
-(id)initWithText:(id)arg1 ;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
@end

