/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:44:55 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ISOperationQueue;

@interface ISURLOperationPool : NSObject {

	ISOperationQueue* _operationQueue;

}

@property (nonatomic,retain) ISOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
-(id)_poolOperationForOperation:(id)arg1 flags:(long long)arg2 ;
-(void)addOperation:(id)arg1 withFlags:(long long)arg2 ;
-(id)init;
-(void)dealloc;
-(void)setOperationQueue:(ISOperationQueue *)arg1 ;
-(ISOperationQueue *)operationQueue;
-(void)cancelOperation:(id)arg1 ;
@end

