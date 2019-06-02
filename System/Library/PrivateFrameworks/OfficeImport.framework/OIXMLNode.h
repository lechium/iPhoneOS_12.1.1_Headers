/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:38 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface OIXMLNode : NSObject <NSCopying>

@property (readonly) NSString * name; 
@property (retain) NSString * stringValue; 
@property (readonly) NSString * XMLString; 
@property (readonly) NSString * openingTagString; 
@property (readonly) NSString * contentString; 
@property (readonly) NSString * closingTagString; 
+(void)_escapeCharacters:(const unsigned short*)arg1 amount:(unsigned)arg2 escapeWhiteSpaces:(BOOL)arg3 inString:(id)arg4 appendingToString:(CFStringRef)arg5 ;
+(void)_escapeHTMLAttributeCharacters:(id)arg1 withQuote:(unsigned short)arg2 appendingToString:(CFStringRef)arg3 ;
-(NSString *)contentString;
-(NSString *)openingTagString;
-(NSString *)XMLString;
-(NSString *)closingTagString;
-(void)_appendXMLStringToString:(CFStringRef)arg1 level:(int)arg2 ;
-(NSString *)name;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
-(void)setStringValue:(NSString *)arg1 ;
@end

