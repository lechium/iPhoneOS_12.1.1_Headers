/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OIXMLNode.h>

@class OIXMLElement, NSString;

@interface OIXMLDocument : OIXMLNode {

	OIXMLElement* _rootElement;
	NSString* _version;
	NSString* _encoding;

}

@property (retain) OIXMLElement * rootElement;              //@synthesize rootElement=_rootElement - In the implementation block
@property (copy) NSString * version;                        //@synthesize version=_version - In the implementation block
@property (copy) NSString * characterEncoding;              //@synthesize encoding=_encoding - In the implementation block
-(id)contentString;
-(OIXMLElement *)rootElement;
-(id)openingTagString;
-(id)XMLString;
-(id)closingTagString;
-(id)initWithRootElement:(id)arg1 ;
-(void)setCharacterEncoding:(NSString *)arg1 ;
-(void)setRootElement:(OIXMLElement *)arg1 ;
-(NSString *)characterEncoding;
-(id)createMutableXMLString;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
@end

