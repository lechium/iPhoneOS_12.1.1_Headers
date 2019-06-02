/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXDataRecordValueTransformer.h>

@class SXDocumentController, NSString;

@interface SXImageRecordValueTransformer : NSObject <SXDataRecordValueTransformer> {

	SXDocumentController* _documentController;

}

@property (nonatomic,readonly) SXDocumentController * documentController;              //@synthesize documentController=_documentController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXDocumentController *)documentController;
-(id)transformValueForRecord:(id)arg1 descriptor:(id)arg2 ;
-(id)initWithDocumentController:(id)arg1 ;
@end

