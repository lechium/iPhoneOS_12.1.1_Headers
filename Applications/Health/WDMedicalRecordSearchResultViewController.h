//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WDMedicalRecordTimelineViewController.h"

@class NSPredicate;

@interface WDMedicalRecordSearchResultViewController : WDMedicalRecordTimelineViewController
{
    id <WDMedicalRecordSearchResultViewControllerDelegate> _delegate;	// 8 = 0x8
    NSPredicate *_predicate;	// 16 = 0x10
}

@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) __weak id <WDMedicalRecordSearchResultViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x0000000100028c30
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100028a98

@end
