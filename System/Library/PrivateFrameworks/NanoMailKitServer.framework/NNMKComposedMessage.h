/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:22 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface NNMKComposedMessage : NSObject <NSSecureCoding> {

	BOOL _includeAttachments;
	NSString* _composedMessageId;
	unsigned long long _sendingType;
	NSArray* _to;
	NSArray* _cc;
	NSString* _subject;
	NSString* _body;
	NSString* _referenceMessageId;

}

@property (nonatomic,retain) NSString * composedMessageId;                //@synthesize composedMessageId=_composedMessageId - In the implementation block
@property (assign,nonatomic) unsigned long long sendingType;              //@synthesize sendingType=_sendingType - In the implementation block
@property (nonatomic,retain) NSArray * to;                                //@synthesize to=_to - In the implementation block
@property (nonatomic,retain) NSArray * cc;                                //@synthesize cc=_cc - In the implementation block
@property (nonatomic,retain) NSString * subject;                          //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain) NSString * body;                             //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) NSString * referenceMessageId;               //@synthesize referenceMessageId=_referenceMessageId - In the implementation block
@property (assign,nonatomic) BOOL includeAttachments;                     //@synthesize includeAttachments=_includeAttachments - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setTo:(NSArray *)arg1 ;
-(NSArray *)to;
-(void)setCc:(NSArray *)arg1 ;
-(void)setIncludeAttachments:(BOOL)arg1 ;
-(BOOL)includeAttachments;
-(NSArray *)cc;
-(void)setComposedMessageId:(NSString *)arg1 ;
-(void)setReferenceMessageId:(NSString *)arg1 ;
-(void)setSendingType:(unsigned long long)arg1 ;
-(NSString *)composedMessageId;
-(unsigned long long)sendingType;
-(NSString *)referenceMessageId;
-(id)copyWithNewId;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)body;
@end

