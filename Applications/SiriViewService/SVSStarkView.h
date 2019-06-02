//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class SVSStarkGatekeeperHeaderView, UIButton, UILabel;

@interface SVSStarkView : UIView
{
    id <SVSStarkViewDataSource> _dataSource;	// 8 = 0x8
    id <SVSStarkViewDelegate> _delegate;	// 16 = 0x10
    UIView *_snippetView;	// 24 = 0x18
    SVSStarkGatekeeperHeaderView *_gatekeeperHeader;	// 32 = 0x20
    UIView *_dismisserView;	// 40 = 0x28
    UIButton *_selectButton;	// 48 = 0x30
    UILabel *_assistantVersionLabel;	// 56 = 0x38
}

+ (_Bool)_shouldShowBugReportUI;	// IMP=0x000000010007d564
@property(retain, nonatomic) UILabel *assistantVersionLabel; // @synthesize assistantVersionLabel=_assistantVersionLabel;
@property(retain, nonatomic) UIButton *selectButton; // @synthesize selectButton=_selectButton;
@property(readonly, nonatomic, getter=_dismisserView) UIView *dismisserView; // @synthesize dismisserView=_dismisserView;
@property(retain, nonatomic) SVSStarkGatekeeperHeaderView *gatekeeperHeader; // @synthesize gatekeeperHeader=_gatekeeperHeader;
@property(retain, nonatomic) UIView *snippetView; // @synthesize snippetView=_snippetView;
@property(nonatomic) __weak id <SVSStarkViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SVSStarkViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;	// IMP=0x000000010007d7a8
- (void)_destroyAssistantVersionLabelIfNecessary;	// IMP=0x000000010007d690
- (void)_createAssistantVersionLabelIfNecessary;	// IMP=0x000000010007d628
- (void)_preferencesDidChange;	// IMP=0x000000010007d5c8
- (void)layoutSubviews;	// IMP=0x000000010007d254
- (id)preferredFocusEnvironments;	// IMP=0x000000010007d160
- (void)reloadData;	// IMP=0x000000010007cff0
- (void)_selectButtonTapped:(id)arg1;	// IMP=0x000000010007c77c
- (void)dealloc;	// IMP=0x000000010007c6f4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000010007c570

@end

