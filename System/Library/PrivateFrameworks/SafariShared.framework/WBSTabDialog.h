/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:46:10 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface WBSTabDialog : NSObject {

	/*^block*/id _presentationBlock;
	/*^block*/id _dismissalBlock;
	BOOL _blocksWebProcessUntilDismissed;
	NSArray* _cancellationExemptions;

}

@property (assign,nonatomic) BOOL blocksWebProcessUntilDismissed;              //@synthesize blocksWebProcessUntilDismissed=_blocksWebProcessUntilDismissed - In the implementation block
@property (nonatomic,copy) NSArray * cancellationExemptions;                   //@synthesize cancellationExemptions=_cancellationExemptions - In the implementation block
+(id)tabDialogWithPresentationBlock:(/*^block*/id)arg1 dismissalBlock:(/*^block*/id)arg2 ;
-(id)createInfo;
-(BOOL)blocksWebProcessUntilDismissed;
-(NSArray *)cancellationExemptions;
-(void)setBlocksWebProcessUntilDismissed:(BOOL)arg1 ;
-(void)setCancellationExemptions:(NSArray *)arg1 ;
-(id)init;
-(id)_init;
@end

