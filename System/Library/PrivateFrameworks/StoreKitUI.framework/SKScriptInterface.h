/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:08 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptInterface.h>

@class SKProductPageViewController;

@interface SKScriptInterface : SUScriptInterface {

	SKProductPageViewController* _parentProductPageViewController;

}

@property (assign,nonatomic,__weak) SKProductPageViewController * parentProductPageViewController;              //@synthesize parentProductPageViewController=_parentProductPageViewController - In the implementation block
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(void)initialize;
-(void)setParentProductPageViewController:(SKProductPageViewController *)arg1 ;
-(id)makeStoreSheetRequest;
-(void)showStoreSheetWithRequest:(id)arg1 animated:(BOOL)arg2 ;
-(SKProductPageViewController *)parentProductPageViewController;
@end

