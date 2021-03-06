/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:11 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>
#import <libobjc.A.dylib/CNMultipleUnknownContactsViewControllerDelegate.h>

@protocol CNVCardImportControllerPresentationDelegate, CNVCardImportControllerDelegate;
@class CNQueue, CNContactStore, UIViewController, NSString;

@interface CNVCardImportController : NSObject <CNContactViewControllerDelegate, CNMultipleUnknownContactsViewControllerDelegate> {

	id<CNVCardImportControllerPresentationDelegate> _presentationDelegate;
	id<CNVCardImportControllerDelegate> _delegate;
	CNQueue* _receivedContactsQueue;
	CNContactStore* _contactStore;
	UIViewController* _presentedViewController;

}

@property (assign,nonatomic,__weak) id<CNVCardImportControllerPresentationDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (nonatomic,retain) CNQueue * receivedContactsQueue;                                                          //@synthesize receivedContactsQueue=_receivedContactsQueue - In the implementation block
@property (nonatomic,retain) CNContactStore * contactStore;                                                            //@synthesize contactStore=_contactStore - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentedViewController;                                        //@synthesize presentedViewController=_presentedViewController - In the implementation block
@property (assign,nonatomic,__weak) id<CNVCardImportControllerDelegate> delegate;                                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)multipleUnknownContactsViewControllerDidComplete:(id)arg1 ;
-(id)initWithContactStore:(id)arg1 presentationDelegate:(id)arg2 ;
-(void)enqueueContacts:(id)arg1 ;
-(BOOL)enqueueContactsAtURL:(id)arg1 ;
-(void)presentEnqueueResultsUIForResultContacts:(id)arg1 ;
-(id)contactsFromURL:(id)arg1 ;
-(CNQueue *)receivedContactsQueue;
-(void)processNextContacts;
-(void)presentImportUIForContacts:(id)arg1 ;
-(void)setReceivedContactsQueue:(CNQueue *)arg1 ;
-(void)saveUnknownPersons:(id)arg1 ;
-(void)cancelModalUnknownPersons:(id)arg1 ;
-(id)dequeueContacts;
-(void)dismissContactsAndPresentNext;
-(void)setPresentationDelegate:(id<CNVCardImportControllerPresentationDelegate>)arg1 ;
-(CNContactStore *)contactStore;
-(void)setContactStore:(CNContactStore *)arg1 ;
-(id<CNVCardImportControllerPresentationDelegate>)presentationDelegate;
-(void)setDelegate:(id<CNVCardImportControllerDelegate>)arg1 ;
-(id<CNVCardImportControllerDelegate>)delegate;
-(UIViewController *)presentedViewController;
-(void)setPresentedViewController:(UIViewController *)arg1 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
@end

