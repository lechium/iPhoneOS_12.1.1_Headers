/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:47:15 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIInterfaceAction.h>

@interface SKUIReviewInAppRatingAction : UIInterfaceAction {

	/*^block*/id _beforeDismissHandler;
	/*^block*/id _afterDismissHandler;

}

@property (nonatomic,copy) id beforeDismissHandler;              //@synthesize beforeDismissHandler=_beforeDismissHandler - In the implementation block
@property (nonatomic,copy) id afterDismissHandler;               //@synthesize afterDismissHandler=_afterDismissHandler - In the implementation block
+(id)actionWithCustomContentViewController:(id)arg1 ;
-(void)setAfterDismissHandler:(id)arg1 ;
-(void)setBeforeDismissHandler:(id)arg1 ;
-(id)beforeDismissHandler;
-(id)afterDismissHandler;
-(void)setCustomEnabledState:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
@end
