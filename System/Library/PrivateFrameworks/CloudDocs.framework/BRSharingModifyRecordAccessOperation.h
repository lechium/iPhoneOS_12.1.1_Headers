/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:58 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRSharingModifyRecordAccessOperation : BROperation {

	NSURL* _fileURL;
	BOOL _allowAccess;
	/*^block*/id _allowAccessCompletionBlock;
	/*^block*/id _accessAllowedCompletionBlock;

}

@property (copy) id allowAccessCompletionBlock;                //@synthesize allowAccessCompletionBlock=_allowAccessCompletionBlock - In the implementation block
@property (copy) id accessAllowedCompletionBlock;              //@synthesize accessAllowedCompletionBlock=_accessAllowedCompletionBlock - In the implementation block
-(id)allowAccessCompletionBlock;
-(void)setAllowAccessCompletionBlock:(id)arg1 ;
-(id)accessAllowedCompletionBlock;
-(void)setAccessAllowedCompletionBlock:(id)arg1 ;
-(id)initWithURL:(id)arg1 allowAccess:(BOOL)arg2 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(void)main;
@end

