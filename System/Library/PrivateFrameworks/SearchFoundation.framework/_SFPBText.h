/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBText.h>
@class NSString, NSData;


@protocol _SFPBText <NSObject>
@property (copy) NSString * text; 
@property (assign,nonatomic) unsigned maxLines; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setMaxLines:(unsigned)arg1;
-(unsigned)maxLines;
-(id)initWithJSON:(id)arg1;
-(NSData *)jsonData;
-(void)setText:(id)arg1;
-(NSString *)text;
-(id)initWithDictionary:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface _SFPBText : PBCodable <_SFPBText, NSSecureCoding> {

	unsigned _maxLines;
	NSString* _text;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * text;                                   //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) unsigned maxLines;                     //@synthesize maxLines=_maxLines - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setMaxLines:(unsigned)arg1 ;
-(unsigned)maxLines;
-(id)initWithJSON:(id)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
@end
