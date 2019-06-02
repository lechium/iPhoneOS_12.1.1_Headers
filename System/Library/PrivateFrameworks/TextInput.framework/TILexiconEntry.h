/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:44 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TILexiconEntry : NSObject <NSCopying, NSSecureCoding> {

	NSString* _userInput;
	NSString* _documentText;

}

@property (nonatomic,readonly) NSString * documentText;              //@synthesize documentText=_documentText - In the implementation block
@property (nonatomic,readonly) NSString * userInput;                 //@synthesize userInput=_userInput - In the implementation block
+(id)entryWithDocumentText:(id)arg1 userInput:(id)arg2 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)userInput;
-(NSString *)documentText;
@end

