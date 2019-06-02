/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:49 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKCalendarEditItem.h>
#import <libobjc.A.dylib/CalendarPublishingActivityDelegate.h>

@class UITableViewHeaderFooterView, UIActivityIndicatorView, UIView, NSString;

@interface EKCalendarPublishingEditItem : EKCalendarEditItem <CalendarPublishingActivityDelegate> {

	BOOL _published;
	UITableViewHeaderFooterView* _footerView;
	UIActivityIndicatorView* _spinner;

}

@property (assign,nonatomic) BOOL published;                        //@synthesize published=_published - In the implementation block
@property (nonatomic,readonly) UIView * footerView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSubitems;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(void)_applyStyleToUILabel:(id)arg1 ;
-(id)footerViewForSection;
-(double)footerHeightForSection;
-(BOOL)configureWithCalendar:(id)arg1 ;
-(void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2 ;
-(id)pubishURL;
-(id)calendarTitle;
-(void)setPublished:(BOOL)arg1 ;
-(void)_publishChanged:(id)arg1 ;
-(BOOL)published;
-(void)reset;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2 ;
-(UIView *)footerView;
@end

