//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MTABedtimeRepeatControl, MTAlarm;

@interface MTABedtimeOptionsRecurrenceCell : UITableViewCell
{
    MTAlarm *_alarm;	// 8 = 0x8
    id <MTABedtimeOptionsCellDelegate> _delegate;	// 16 = 0x10
    MTABedtimeRepeatControl *_recurrenceControl;	// 24 = 0x18
}

@property(retain, nonatomic) MTABedtimeRepeatControl *recurrenceControl; // @synthesize recurrenceControl=_recurrenceControl;
@property(nonatomic) __weak id <MTABedtimeOptionsCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MTAlarm *alarm; // @synthesize alarm=_alarm;
- (void).cxx_destruct;	// IMP=0x0000000100014a80
- (void)recurrenceControlChanged:(id)arg1;	// IMP=0x0000000100014900
- (void)updateRecurrenceControl;	// IMP=0x000000010001487c
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x00000001000147bc
- (void)buildRecurrenceControl;	// IMP=0x0000000100014330
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000001000142a8

@end

