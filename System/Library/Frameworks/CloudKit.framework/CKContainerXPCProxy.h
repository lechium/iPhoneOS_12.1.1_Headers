/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:53 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKXPCClient.h>

@class CKContainer, NSString;

@interface CKContainerXPCProxy : NSObject <CKXPCClient> {

	CKContainer* _container;

}

@property (assign,nonatomic,__weak) CKContainer * container;              //@synthesize container=_container - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContainer:(id)arg1 ;
-(void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)handleOperationStatistics:(id)arg1 forOperationWithID:(id)arg2 ;
-(void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2 ;
-(void)handleOperationCompletion:(id)arg1 forOperationWithID:(id)arg2 ;
-(void)handleOperationCheckpoint:(id)arg1 forOperationWithID:(id)arg2 ;
-(void)openFileWithOpenInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)getFileMetadataWithFileHandle:(id)arg1 openInfo:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)consumeSandboxExtensions:(id)arg1 reply:(/*^block*/id)arg2 ;
-(CKContainer *)container;
-(void)setContainer:(CKContainer *)arg1 ;
@end

