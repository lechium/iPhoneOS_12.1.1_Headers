/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/IntentsFoundation.framework/IntentsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, INFSentenceContext, INFSentenceToken;

@interface INFSentenceTokenWithContext : NSObject {

	BOOL _resolved;
	NSString* _placeholderName;
	INFSentenceContext* _context;
	INFSentenceToken* _originalToken;

}

@property (getter=isResolved) BOOL resolved;                                //@synthesize resolved=_resolved - In the implementation block
@property (nonatomic,copy) NSString * placeholderName;                      //@synthesize placeholderName=_placeholderName - In the implementation block
@property (nonatomic,retain) INFSentenceContext * context;                  //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) INFSentenceToken * originalToken;              //@synthesize originalToken=_originalToken - In the implementation block
+(id)sentenceResolvedTokenWithOriginalToken:(id)arg1 placeholderName:(id)arg2 ;
-(id)initWithToken:(id)arg1 variableName:(id)arg2 ;
-(void)setPlaceholderName:(NSString *)arg1 ;
-(INFSentenceToken *)originalToken;
-(void)setOriginalToken:(INFSentenceToken *)arg1 ;
-(NSString *)placeholderName;
-(void)setResolved:(BOOL)arg1 ;
-(BOOL)isResolved;
-(void)setContext:(INFSentenceContext *)arg1 ;
-(INFSentenceContext *)context;
@end

