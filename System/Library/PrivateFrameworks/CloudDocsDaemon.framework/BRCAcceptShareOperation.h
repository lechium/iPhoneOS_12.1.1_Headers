/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:41 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class CKShareMetadata, NSString;

@interface BRCAcceptShareOperation : _BRCOperation <BRCOperationSubclass> {

	CKShareMetadata* _shareMetadata;
	/*^block*/id _acceptShareCompletionBlock;

}

@property (nonatomic,copy) id acceptShareCompletionBlock;              //@synthesize acceptShareCompletionBlock=_acceptShareCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)initWithShareMetadata:(id)arg1 syncContext:(id)arg2 ;
-(void)setAcceptShareCompletionBlock:(id)arg1 ;
-(id)acceptShareCompletionBlock;
-(void)main;
@end

