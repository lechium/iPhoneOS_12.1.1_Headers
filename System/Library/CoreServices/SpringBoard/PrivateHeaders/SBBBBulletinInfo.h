//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBRowInfo.h"

@class BBBulletin, NSDate, SBBBSectionInfo, SBItemInfoLayoutCache, UIColor, UIImage, UIViewController;

@interface SBBBBulletinInfo : SBRowInfo
{
    SBBBSectionInfo *_sectionInfo;	// 8 = 0x8
    SBItemInfoLayoutCache *_layoutCache;	// 16 = 0x10
    UIImage *_attachmentImage;	// 24 = 0x18
    struct CGSize _attachmentImageSize;	// 32 = 0x20
    double _secondaryTextHeight;	// 48 = 0x30
    _Bool _suppressingMessageForPrivacy;	// 56 = 0x38
    _Bool _isCachedMessageSuppressionValid;	// 57 = 0x39
    UIViewController *_secondaryContentViewController;	// 64 = 0x40
    UIColor *_secondaryTextColor;	// 72 = 0x48
    NSDate *_effectiveRecencyDate;	// 80 = 0x50
    long long _relevanceDateFormatStyle;	// 88 = 0x58
}

@property(nonatomic) long long relevanceDateFormatStyle; // @synthesize relevanceDateFormatStyle=_relevanceDateFormatStyle;
@property(copy, nonatomic) NSDate *effectiveRecencyDate; // @synthesize effectiveRecencyDate=_effectiveRecencyDate;
@property(readonly, nonatomic) UIViewController *secondaryContentViewController; // @synthesize secondaryContentViewController=_secondaryContentViewController;
@property(readonly, nonatomic) UIColor *secondaryTextColor; // @synthesize secondaryTextColor=_secondaryTextColor;
@property(retain, nonatomic) SBBBSectionInfo *sectionInfo; // @synthesize sectionInfo=_sectionInfo;
@property(nonatomic) struct CGSize attachmentImageSize; // @synthesize attachmentImageSize=_attachmentImageSize;
@property(retain, nonatomic) UIImage *attachmentImage; // @synthesize attachmentImage=_attachmentImage;
- (void).cxx_destruct;	// IMP=0x00000001001e634c
- (id)description;	// IMP=0x00000001001e60f4
- (void)populateReusableView:(id)arg1;	// IMP=0x00000001001e5b84
- (double)heightForReusableViewForNotificationCenterTableViewController:(id)arg1 layoutMode:(long long)arg2 sectionLocation:(long long)arg3;	// IMP=0x00000001001e561c
- (struct CGSize)_effectiveAttachmentImageSize;	// IMP=0x00000001001e55b4
- (id)_attachmentImageToDisplay;	// IMP=0x00000001001e5574
- (id)_eventDateLabelForDisplay;	// IMP=0x00000001001e5524
- (id)_eventDateLabel;	// IMP=0x00000001001e53c0
- (void)_configureEventDateLabel:(id)arg1;	// IMP=0x00000001001e5270
- (id)_relevanceDateLabel;	// IMP=0x00000001001e5028
- (long long)_bbDateFormatStyle;	// IMP=0x00000001001e5004
- (void)_configureRelevanceDateLabel:(id)arg1;	// IMP=0x00000001001e4e34
- (id)_relevanceDateLabelDescription;	// IMP=0x00000001001e4c18
- (id)_endDate;	// IMP=0x00000001001e4b18
- (id)_secondaryTextColor;	// IMP=0x00000001001e4b04
- (id)_secondaryContentView;	// IMP=0x00000001001e4aec
- (id)_secondaryTextToDisplay;	// IMP=0x00000001001e4984
- (id)_secondaryText;	// IMP=0x00000001001e4930
- (id)_subtitleTextColor;	// IMP=0x00000001001e491c
- (id)_subtitleTextToDisplay;	// IMP=0x00000001001e48cc
- (id)_subtitleText;	// IMP=0x00000001001e4878
- (id)_relevanceDateTextColor;	// IMP=0x00000001001e47fc
- (id)_primaryTextColor;	// IMP=0x00000001001e47e8
- (id)_primaryText;	// IMP=0x00000001001e4754
@property(readonly, nonatomic, getter=isSuppressingMessageForPrivacy) _Bool suppressingMessageForPrivacy; // @synthesize suppressingMessageForPrivacy=_suppressingMessageForPrivacy;
- (void)prepareWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001e4424
- (void)invalidateCachedLayoutData;	// IMP=0x00000001001e43d8
- (Class)reusableViewClass;	// IMP=0x00000001001e43c4
- (id)identifier;	// IMP=0x00000001001e4370
@property(readonly, nonatomic) BBBulletin *representedBulletin;

@end

