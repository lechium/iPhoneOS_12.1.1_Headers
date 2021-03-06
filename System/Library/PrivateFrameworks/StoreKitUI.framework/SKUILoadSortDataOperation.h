/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUILoadResourceOperation.h>

@class SSVLoadURLOperation, SKUISortDataRequest;

@interface SKUILoadSortDataOperation : SKUILoadResourceOperation {

	SSVLoadURLOperation* _underlyingOperation;

}

@property (__weak) SSVLoadURLOperation * underlyingOperation;                 //@synthesize underlyingOperation=_underlyingOperation - In the implementation block
@property (copy,readonly) SKUISortDataRequest * resourceRequest; 
-(id)initWithResourceRequest:(id)arg1 ;
-(void)setUnderlyingOperation:(SSVLoadURLOperation *)arg1 ;
-(SSVLoadURLOperation *)underlyingOperation;
-(void)cancel;
-(void)main;
@end

