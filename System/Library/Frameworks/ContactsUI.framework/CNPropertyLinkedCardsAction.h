/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyAction.h>

@protocol CNContactContentViewControllerDelegate;
@class CNContactContentViewController, CNMutableContact;

@interface CNPropertyLinkedCardsAction : CNPropertyAction {

	id<CNContactContentViewControllerDelegate> _contactDelegate;
	CNContactContentViewController* _contactController;
	CNMutableContact* _linkedContact;

}

@property (retain) CNContactContentViewController * contactController;                      //@synthesize contactController=_contactController - In the implementation block
@property (retain) CNMutableContact * linkedContact;                                        //@synthesize linkedContact=_linkedContact - In the implementation block
@property (__weak) id<CNContactContentViewControllerDelegate> contactDelegate;              //@synthesize contactDelegate=_contactDelegate - In the implementation block
-(void)performActionForItem:(id)arg1 sender:(id)arg2 ;
-(void)setContactController:(CNContactContentViewController *)arg1 ;
-(CNContactContentViewController *)contactController;
-(void)setLinkedContact:(CNMutableContact *)arg1 ;
-(void)setPreferredForImage;
-(void)setPreferredForName;
-(id)initWithContact:(id)arg1 ;
-(CNMutableContact *)linkedContact;
-(void)dealloc;
-(id<CNContactContentViewControllerDelegate>)contactDelegate;
-(void)setContactDelegate:(id<CNContactContentViewControllerDelegate>)arg1 ;
@end

