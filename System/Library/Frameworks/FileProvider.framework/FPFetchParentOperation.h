/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:43:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FileProvider/FPActionOperation.h>

@class FPItem;

@interface FPFetchParentOperation : FPActionOperation {

	FPItem* _item;
	/*^block*/id _fetchCompletionBlock;
	/*^block*/id _fetchCompletionBlock_v2;

}

@property (nonatomic,copy) id fetchCompletionBlock;                 //@synthesize fetchCompletionBlock=_fetchCompletionBlock - In the implementation block
@property (nonatomic,copy) id fetchCompletionBlock_v2;              //@synthesize fetchCompletionBlock_v2=_fetchCompletionBlock_v2 - In the implementation block
-(void)mainWithExtensionProxy:(id)arg1 ;
-(void)setFetchCompletionBlock_v2:(id)arg1 ;
-(id)fetchCompletionBlock_v2;
-(id)initWithItem:(id)arg1 ;
-(void)setFetchCompletionBlock:(id)arg1 ;
-(id)fetchCompletionBlock;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
@end

