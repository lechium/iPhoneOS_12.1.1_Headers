/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:51:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class HMDBackingStoreLocal;

@interface HMDBackingStoreLocalFlushOperation : NSOperation {

	BOOL _clearCloud;
	HMDBackingStoreLocal* _store;
	/*^block*/id _resultHandler;

}

@property (nonatomic,retain) HMDBackingStoreLocal * store;              //@synthesize store=_store - In the implementation block
@property (nonatomic,copy) id resultHandler;                            //@synthesize resultHandler=_resultHandler - In the implementation block
@property (assign,nonatomic) BOOL clearCloud;                           //@synthesize clearCloud=_clearCloud - In the implementation block
-(HMDBackingStoreLocal *)store;
-(id)resultHandler;
-(void)setResultHandler:(id)arg1 ;
-(void)setStore:(HMDBackingStoreLocal *)arg1 ;
-(id)initWithStore:(id)arg1 clearCloud:(BOOL)arg2 resultHandler:(/*^block*/id)arg3 ;
-(BOOL)clearCloud;
-(void)setClearCloud:(BOOL)arg1 ;
-(void)main;
@end

