/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:50:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSPSaveOperationState.h>

@protocol TSPPackage;
@class NSURL, TSPDocumentProperties, TSPObject, NSUUID;

@interface TSPDocumentSaveOperationState : TSPSaveOperationState {

	BOOL _shouldLeavePendingEndSave;
	NSURL* _URL;
	NSURL* _relativeURLForExternalData;
	TSPDocumentProperties* _documentProperties;
	TSPObject* _documentObject;
	TSPObject* _supportObject;
	NSURL* _originalSupportURL;
	id<TSPPackage> _documentPackage;
	id<TSPPackage> _supportPackage;
	NSUUID* _documentUUID;

}

@property (nonatomic,readonly) NSURL * URL;                                           //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSURL * relativeURLForExternalData;                        //@synthesize relativeURLForExternalData=_relativeURLForExternalData - In the implementation block
@property (nonatomic,retain) TSPDocumentProperties * documentProperties;              //@synthesize documentProperties=_documentProperties - In the implementation block
@property (nonatomic,retain) TSPObject * documentObject;                              //@synthesize documentObject=_documentObject - In the implementation block
@property (nonatomic,retain) TSPObject * supportObject;                               //@synthesize supportObject=_supportObject - In the implementation block
@property (nonatomic,copy) NSURL * originalSupportURL;                                //@synthesize originalSupportURL=_originalSupportURL - In the implementation block
@property (nonatomic,retain) id<TSPPackage> documentPackage;                          //@synthesize documentPackage=_documentPackage - In the implementation block
@property (nonatomic,retain) id<TSPPackage> supportPackage;                           //@synthesize supportPackage=_supportPackage - In the implementation block
@property (nonatomic,copy) NSUUID * documentUUID;                                     //@synthesize documentUUID=_documentUUID - In the implementation block
@property (assign,nonatomic) BOOL shouldLeavePendingEndSave;                          //@synthesize shouldLeavePendingEndSave=_shouldLeavePendingEndSave - In the implementation block
-(void)setDocumentObject:(TSPObject *)arg1 ;
-(TSPObject *)documentObject;
-(NSUUID *)documentUUID;
-(TSPObject *)supportObject;
-(void)setSupportObject:(TSPObject *)arg1 ;
-(id)initWithURL:(id)arg1 updateType:(unsigned long long)arg2 ;
-(NSURL *)relativeURLForExternalData;
-(void)setRelativeURLForExternalData:(NSURL *)arg1 ;
-(TSPDocumentProperties *)documentProperties;
-(NSURL *)originalSupportURL;
-(void)setOriginalSupportURL:(NSURL *)arg1 ;
-(id<TSPPackage>)documentPackage;
-(void)setDocumentPackage:(id<TSPPackage>)arg1 ;
-(id<TSPPackage>)supportPackage;
-(void)setSupportPackage:(id<TSPPackage>)arg1 ;
-(void)setDocumentUUID:(NSUUID *)arg1 ;
-(BOOL)shouldLeavePendingEndSave;
-(void)setShouldLeavePendingEndSave:(BOOL)arg1 ;
-(id)init;
-(NSURL *)URL;
-(void)setDocumentProperties:(TSPDocumentProperties *)arg1 ;
@end

