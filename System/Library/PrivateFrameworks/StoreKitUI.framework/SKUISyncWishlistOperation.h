/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:16 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class SKUIClientContext, NSObject;

@interface SKUISyncWishlistOperation : NSOperation {

	SKUIClientContext* _clientContext;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _resultBlock;

}

@property (copy) id resultBlock; 
-(id)initWithClientContext:(id)arg1 ;
-(void)_sendLocalChangesForWishlist:(id)arg1 ;
-(BOOL)_loadRemoteItemsForWishlist:(id)arg1 didChange:(BOOL*)arg2 error:(id*)arg3 ;
-(BOOL)_mergeItems:(id)arg1 wishlist:(id)arg2 didChange:(BOOL*)arg3 error:(id*)arg4 ;
-(void)setResultBlock:(id)arg1 ;
-(id)resultBlock;
-(id)init;
-(void)main;
@end

