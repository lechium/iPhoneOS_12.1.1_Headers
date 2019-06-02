/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNQuickAction.h>
#import <libobjc.A.dylib/CNContactActionDelegate.h>

@protocol CNQuickContactActionDelegate;
@class CNContactAction, NSString;

@interface CNQuickContactAction : CNQuickAction <CNContactActionDelegate> {

	CNContactAction* _contactAction;
	id<CNQuickContactActionDelegate> _delegate;
	/*^block*/id _completionBlock;

}

@property (nonatomic,retain) CNContactAction * contactAction;                               //@synthesize contactAction=_contactAction - In the implementation block
@property (nonatomic,copy) id completionBlock;                                              //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic,__weak) id<CNQuickContactActionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithContactAction:(id)arg1 ;
-(void)action:(id)arg1 dismissViewController:(id)arg2 sender:(id)arg3 ;
-(void)action:(id)arg1 presentViewController:(id)arg2 sender:(id)arg3 ;
-(void)actionWasCanceled:(id)arg1 ;
-(id)contactViewCache;
-(void)performWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setContactAction:(CNContactAction *)arg1 ;
-(CNContactAction *)contactAction;
-(void)action:(id)arg1 prepareChildContactViewController:(id)arg2 sender:(id)arg3 ;
-(void)action:(id)arg1 pushViewController:(id)arg2 sender:(id)arg3 ;
-(void)actionDidUpdate:(id)arg1 ;
-(void)setDelegate:(id<CNQuickContactActionDelegate>)arg1 ;
-(id<CNQuickContactActionDelegate>)delegate;
-(void)setCompletionBlock:(id)arg1 ;
-(id)completionBlock;
-(void)actionDidFinish:(id)arg1 ;
@end

