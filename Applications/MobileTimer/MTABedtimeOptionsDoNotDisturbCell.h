//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MTAlarm;

@interface MTABedtimeOptionsDoNotDisturbCell : UITableViewCell
{
    MTAlarm *_alarm;	// 8 = 0x8
    id <MTABedtimeOptionsCellDelegate> _delegate;	// 16 = 0x10
}

@property(nonatomic) __weak id <MTABedtimeOptionsCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MTAlarm *alarm; // @synthesize alarm=_alarm;
- (void).cxx_destruct;	// IMP=0x000000010004c580
- (void)doNotDisturbControlChanged:(id)arg1;	// IMP=0x000000010004c424
- (void)reload;	// IMP=0x000000010004c264
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000010004bef4

@end

