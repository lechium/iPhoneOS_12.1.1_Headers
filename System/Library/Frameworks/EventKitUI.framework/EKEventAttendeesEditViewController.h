/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:47 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEditItemViewController.h>

@class EKEventAttendeePicker, EKEvent, NSArray;

@interface EKEventAttendeesEditViewController : EKEditItemViewController {

	EKEventAttendeePicker* _picker;
	EKEvent* _event;
	BOOL _cancelTapped;
	BOOL _disableShowingButtons;
	BOOL _appendOnly;

}

@property (assign,nonatomic) BOOL disableShowingButtons;              //@synthesize disableShowingButtons=_disableShowingButtons - In the implementation block
@property (nonatomic,copy) NSArray * attendees; 
@property (assign,nonatomic) BOOL appendOnly;                         //@synthesize appendOnly=_appendOnly - In the implementation block
+(BOOL)_shouldForwardViewWillTransitionToSize;
-(NSArray *)attendees;
-(BOOL)presentModally;
-(BOOL)editItemShouldBeAskedForInjectableViewController;
-(id)initWithFrame:(CGRect)arg1 event:(id)arg2 overriddenEventStartDate:(id)arg3 overriddenEventEndDate:(id)arg4 ;
-(void)setDisableShowingButtons:(BOOL)arg1 ;
-(void)setAttendees:(NSArray *)arg1 ;
-(void)setAppendOnly:(BOOL)arg1 ;
-(void)setSearchAccountID:(id)arg1 ;
-(BOOL)appendOnly;
-(BOOL)validateAllowingAlert:(BOOL)arg1 ;
-(BOOL)disableShowingButtons;
-(void)_cancelTapped:(id)arg1 ;
-(id)_firstInvalidRecipientAddress;
-(id)_createAttendeeFromRecipient:(id)arg1 ;
-(id)_createRecipientFromAttendee:(id)arg1 ;
-(id)_attendeeFromRecipient:(id)arg1 ;
-(id)_recipientFromAttendee:(id)arg1 ;
-(BOOL)prefersToBePresentedFromUINavigationController;
-(void)_doneTapped:(id)arg1 ;
-(void)viewDidLoad;
@end

