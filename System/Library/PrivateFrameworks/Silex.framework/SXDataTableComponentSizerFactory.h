/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:56 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXComponentSizerFactory.h>

@protocol SXDocumentControllerProvider, SXTextComponentLayoutHosting, SXDataTableTextSourceFactory;
@class NSString;

@interface SXDataTableComponentSizerFactory : NSObject <SXComponentSizerFactory> {

	id<SXDocumentControllerProvider> _documentControllerProvider;
	id<SXTextComponentLayoutHosting> _textComponentLayoutHosting;
	id<SXDataTableTextSourceFactory> _textSourceFactory;

}

@property (nonatomic,readonly) id<SXDocumentControllerProvider> documentControllerProvider;              //@synthesize documentControllerProvider=_documentControllerProvider - In the implementation block
@property (nonatomic,readonly) id<SXTextComponentLayoutHosting> textComponentLayoutHosting;              //@synthesize textComponentLayoutHosting=_textComponentLayoutHosting - In the implementation block
@property (nonatomic,readonly) id<SXDataTableTextSourceFactory> textSourceFactory;                       //@synthesize textSourceFactory=_textSourceFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) int role; 
-(id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutAttributes:(id)arg3 ;
-(id)initWithDocumentControllerProvider:(id)arg1 textComponentLayoutHosting:(id)arg2 textSourceFactory:(id)arg3 ;
-(id<SXDocumentControllerProvider>)documentControllerProvider;
-(id<SXTextComponentLayoutHosting>)textComponentLayoutHosting;
-(id<SXDataTableTextSourceFactory>)textSourceFactory;
-(int)role;
-(NSString *)type;
@end

