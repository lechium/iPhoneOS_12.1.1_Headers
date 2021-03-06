/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:54 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <RemoteUI/RemoteUITableFooter.h>

@class NSDictionary, OBPrivacyLinkController, NSString;

@interface RUIPrivacyLinkContainerView : UIView <RemoteUITableFooter> {

	NSDictionary* _attributes;
	OBPrivacyLinkController* _linkController;

}

@property (readonly) OBPrivacyLinkController * linkController;              //@synthesize linkController=_linkController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(OBPrivacyLinkController *)linkController;
-(double)footerHeightForWidth:(double)arg1 inView:(id)arg2 ;
-(void)configureInPage:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithAttributes:(id)arg1 ;
@end

