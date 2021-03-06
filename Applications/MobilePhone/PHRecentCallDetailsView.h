//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PHRecentCallDetailsItemViewDelegate.h"

@class CHRecentCall, NSArray, NSCalendar, NSDateFormatter, NSNumberFormatter, NSString;

@interface PHRecentCallDetailsView : UIView <PHRecentCallDetailsItemViewDelegate>
{
    CHRecentCall *_recentCall;	// 8 = 0x8
    id <PHRecentCallDetailsViewDelegate> _delegate;	// 16 = 0x10
    NSArray *_summaries;	// 24 = 0x18
    double _intrinsicContentHeight;	// 32 = 0x20
}

@property double intrinsicContentHeight; // @synthesize intrinsicContentHeight=_intrinsicContentHeight;
@property(retain) NSArray *summaries; // @synthesize summaries=_summaries;
@property(nonatomic) __weak id <PHRecentCallDetailsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CHRecentCall *recentCall; // @synthesize recentCall=_recentCall;
- (void).cxx_destruct;	// IMP=0x00000001000b7550
- (long long)recentCallTTYType;	// IMP=0x00000001000b747c
- (void)presentConversationForUUID:(id)arg1;	// IMP=0x00000001000b7410
- (id)rttConversationForUUID:(id)arg1;	// IMP=0x00000001000b7390
- (id)stringForDataUsage:(id)arg1;	// IMP=0x00000001000b734c
- (id)stringForTimeInterval:(double)arg1;	// IMP=0x00000001000b6c94
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000001000b6c88
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000001000b6c50
- (void)loadSubviews;	// IMP=0x00000001000b5cd4
- (id)callOccurrences;	// IMP=0x00000001000b5ba0
- (void)handleFormattersDidChangeNotification:(id)arg1;	// IMP=0x00000001000b5b14
- (void)addNotificationObservers;	// IMP=0x00000001000b5950
@property(readonly, nonatomic) NSDateFormatter *timeFormatter;
@property(readonly, nonatomic) NSNumberFormatter *numberFormatter;
@property(readonly, nonatomic) NSDateFormatter *dateFormatter;
@property(readonly, nonatomic) NSCalendar *calendar;
- (void)dealloc;	// IMP=0x00000001000b56ac
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000b5654
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000001000b55fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

