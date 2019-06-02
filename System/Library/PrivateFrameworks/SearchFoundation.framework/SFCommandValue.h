/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFCommandValue.h>
@class SFReferentialCommand, NSDictionary, NSData;


@protocol SFCommandValue <NSObject>
@property (nonatomic,retain) SFReferentialCommand * referentialCommand; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(SFReferentialCommand *)referentialCommand;
-(void)setReferentialCommand:(id)arg1;
-(NSData *)jsonData;
-(NSDictionary *)dictionaryRepresentation;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SFReferentialCommand, NSDictionary, NSData, NSString;

@interface SFCommandValue : NSObject <SFCommandValue, NSSecureCoding, NSCopying> {

	SFReferentialCommand* _referentialCommand;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) SFReferentialCommand * referentialCommand;              //@synthesize referentialCommand=_referentialCommand - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(id)initWithProtobuf:(id)arg1 ;
-(SFReferentialCommand *)referentialCommand;
-(void)setReferentialCommand:(SFReferentialCommand *)arg1 ;
-(NSData *)jsonData;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
@end

