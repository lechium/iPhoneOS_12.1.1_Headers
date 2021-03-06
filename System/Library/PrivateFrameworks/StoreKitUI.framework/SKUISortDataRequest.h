/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIResourceRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SKUISortDataRequestDelegate;
@class NSURL;

@interface SKUISortDataRequest : SKUIResourceRequest <NSCopying> {

	id<SKUISortDataRequestDelegate> _delegate;
	NSURL* _sortURL;

}

@property (nonatomic,readonly) NSURL * sortURL;                                            //@synthesize sortURL=_sortURL - In the implementation block
@property (assign,nonatomic,__weak) id<SKUISortDataRequestDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)finishWithResource:(id)arg1 ;
-(id)newLoadOperation;
-(id)initWithSortURL:(id)arg1 ;
-(NSURL *)sortURL;
-(void)setDelegate:(id<SKUISortDataRequestDelegate>)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<SKUISortDataRequestDelegate>)delegate;
@end

