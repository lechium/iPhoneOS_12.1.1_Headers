/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:52:19 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/BusinessChat.framework/BusinessChat
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BCDictionaryImageSerializable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSDictionary;

@interface BCInternalAuthenticationRequest : NSObject <BCDictionaryImageSerializable, NSSecureCoding> {

	NSString* _businessIdentifier;
	NSString* _groupIdentifier;
	NSString* _responseEncryptionKey;
	NSArray* _retrieve;
	NSDictionary* _labels;

}

@property (nonatomic,retain) NSString * businessIdentifier;                 //@synthesize businessIdentifier=_businessIdentifier - In the implementation block
@property (nonatomic,retain) NSString * groupIdentifier;                    //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,retain) NSString * responseEncryptionKey;              //@synthesize responseEncryptionKey=_responseEncryptionKey - In the implementation block
@property (nonatomic,retain) NSArray * retrieve;                            //@synthesize retrieve=_retrieve - In the implementation block
@property (nonatomic,retain) NSDictionary * labels;                         //@synthesize labels=_labels - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryValue; 
+(BOOL)supportsSecureCoding;
-(NSString *)groupIdentifier;
-(NSDictionary *)dictionaryValue;
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(void)setBusinessIdentifier:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 imageDictionary:(id)arg2 ;
-(NSString *)businessIdentifier;
-(void)setResponseEncryptionKey:(NSString *)arg1 ;
-(void)setRetrieve:(NSArray *)arg1 ;
-(NSString *)responseEncryptionKey;
-(NSArray *)retrieve;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setLabels:(NSDictionary *)arg1 ;
-(NSDictionary *)labels;
@end

