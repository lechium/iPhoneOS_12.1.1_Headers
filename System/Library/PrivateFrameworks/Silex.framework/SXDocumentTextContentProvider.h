/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:57 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXTextContentProvider.h>

@class SXDocument, NSString;

@interface SXDocumentTextContentProvider : NSObject <SXTextContentProvider> {

	SXDocument* _document;

}

@property (nonatomic,readonly) SXDocument * document;               //@synthesize document=_document - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedQueue;
-(id)textContentForComponents:(id)arg1 withType:(unsigned long long)arg2 ;
-(id)textContentForComponent:(id)arg1 withType:(unsigned long long)arg2 ;
-(BOOL)classification:(id)arg1 isValidForType:(unsigned long long)arg2 ;
-(BOOL)contentRelevance:(unsigned long long)arg1 isValidForType:(unsigned long long)arg2 ;
-(void)textContentForType:(unsigned long long)arg1 onCompletion:(/*^block*/id)arg2 ;
-(id)initWithDocument:(id)arg1 ;
-(SXDocument *)document;
@end
