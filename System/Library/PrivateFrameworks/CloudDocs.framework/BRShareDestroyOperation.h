/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>

@class CKShare;

@interface BRShareDestroyOperation : BROperation {

	CKShare* _share;
	/*^block*/id _shareDestroyCompletionBlock;

}

@property (nonatomic,retain) CKShare * share;                 //@synthesize share=_share - In the implementation block
@property (copy) id shareDestroyCompletionBlock;              //@synthesize shareDestroyCompletionBlock=_shareDestroyCompletionBlock - In the implementation block
-(id)initWithShare:(id)arg1 ;
-(id)shareDestroyCompletionBlock;
-(void)setShareDestroyCompletionBlock:(id)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)main;
-(CKShare *)share;
-(void)setShare:(CKShare *)arg1 ;
@end

