/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:13 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@class NSMutableString, NSString;

@interface CPPDFAnnotationParserDelegate : NSObject <NSXMLParserDelegate> {

	NSMutableString* _characters;
	BOOL _parseError;
	CGPoint _p[4];
	CFArrayRef _quadPoints;
	CGRect _rect;
	CFDictionaryRef _annotationDictionary;
	CFStringRef _id;
	CFStringRef _otherId;
	CFStringRef _content;
	CGColorRef _color;

}

@property (nonatomic,readonly) BOOL parseError;                                 //@synthesize parseError=_parseError - In the implementation block
@property (assign,nonatomic) CFDictionaryRef annotationDictionary;              //@synthesize annotationDictionary=_annotationDictionary - In the implementation block
@property (nonatomic,readonly) CGRect rect; 
@property (nonatomic,readonly) CFStringRef annotationId;                        //@synthesize id=_id - In the implementation block
@property (nonatomic,readonly) CFStringRef otherId;                             //@synthesize otherId=_otherId - In the implementation block
@property (nonatomic,readonly) CFStringRef content;                             //@synthesize content=_content - In the implementation block
@property (nonatomic,readonly) CGColorRef color;                                //@synthesize color=_color - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)parserDidStartDocument:(id)arg1 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 parseErrorOccurred:(id)arg2 ;
-(BOOL)parseError;
-(void)addQuadpoints;
-(CFDictionaryRef)annotationDictionary;
-(void)setAnnotationDictionary:(CFDictionaryRef)arg1 ;
-(CFStringRef)annotationId;
-(CFStringRef)otherId;
-(id)init;
-(void)dealloc;
-(CGColorRef)color;
-(CGRect)rect;
-(CFStringRef)content;
@end

