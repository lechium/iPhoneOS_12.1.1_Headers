//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MTAlarm, UILabel;

@interface MTABedtimeOptionsReminderCell : UITableViewCell
{
    MTAlarm *_alarm;	// 8 = 0x8
}

+ (id)timeFormatter;	// IMP=0x0000000100011130
@property(retain, nonatomic) MTAlarm *alarm; // @synthesize alarm=_alarm;
- (void).cxx_destruct;	// IMP=0x0000000100011778
- (id)bedtimeReminderTimeString;	// IMP=0x00000001000115dc
- (void)reload;	// IMP=0x0000000100011538
@property(readonly) UILabel *reminderIntervalLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000001000111cc

@end

