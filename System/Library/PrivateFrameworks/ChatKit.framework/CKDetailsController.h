/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:48:05 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKScrollViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIViewControllerPreviewingDelegate.h>
#import <libobjc.A.dylib/CKSharedAssetsControllerDelegate.h>
#import <libobjc.A.dylib/CKDetailsAddGroupNameViewDelegate.h>
#import <libobjc.A.dylib/FMFMapViewControllerDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/CKAttachmentCollectionManagerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <libobjc.A.dylib/CKDetailsContactsManagerDelegate.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>
#import <libobjc.A.dylib/CKDetailsContactsTableViewCellDelegate.h>
#import <libobjc.A.dylib/CKBusinessInfoViewDelegate.h>
#import <libobjc.A.dylib/CKDetailsDownloadAttachmentsHeaderFooterViewDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol CKDetailsControllerDelegate;
@class CKConversation, CKDetailsTableView, UIVisualEffectView, CKDetailsGroupNameCell, CKDetailsMapViewCell, CKDetailsLocationShareCell, CKTranscriptDetailsResizableCell, CKAvatarPickerViewController, CKGroupRecipientSelectionController, NSMutableArray, CKDetailsContactsManager, FMFMapViewController, UITextView, CKDetailsDownloadAttachmentsHeaderFooterView, CKBusinessInfoView, NSTimer, CNContactStore, CKEntity, NSString;

@interface CKDetailsController : CKScrollViewController <UITableViewDelegate, UITableViewDataSource, UIScrollViewDelegate, UIViewControllerPreviewingDelegate, CKSharedAssetsControllerDelegate, CKDetailsAddGroupNameViewDelegate, FMFMapViewControllerDelegate, UITextViewDelegate, CKAttachmentCollectionManagerDelegate, UIAlertViewDelegate, CKDetailsContactsManagerDelegate, CNAvatarViewDelegate, CKDetailsContactsTableViewCellDelegate, CKBusinessInfoViewDelegate, CKDetailsDownloadAttachmentsHeaderFooterViewDelegate, UINavigationControllerDelegate> {

	BOOL _fmfEnabled;
	BOOL _fmfRestricted;
	BOOL _isContactsSectionCollapsed;
	BOOL _didPerformPurgedAttachmentsCheck;
	BOOL _isDisplayingPhotos;
	id<CKDetailsControllerDelegate> _detailsControllerDelegate;
	CKConversation* _conversation;
	CKDetailsTableView* _tableView;
	UIVisualEffectView* _visualEffectView;
	CKDetailsGroupNameCell* _groupNameCell;
	CKDetailsMapViewCell* _mapViewCell;
	CKDetailsLocationShareCell* _locationShareCell;
	CKTranscriptDetailsResizableCell* _locationSendCell;
	CKTranscriptDetailsResizableCell* _locationStartShareCell;
	CKAvatarPickerViewController* _avatarPickerViewController;
	CKGroupRecipientSelectionController* _addRecipientsController;
	unsigned long long _currentAssetType;
	NSMutableArray* _currentSharedAssetsViewControllerArray;
	CKDetailsContactsManager* _contactsManager;
	FMFMapViewController* _mapViewController;
	UITextView* _locationSharingTextView;
	CKDetailsDownloadAttachmentsHeaderFooterView* _downloadAttachmentsFooterView;
	CKBusinessInfoView* _businessInfoView;
	NSTimer* _fmfUpdateTimer;
	CNContactStore* _suggestionsEnabledContactStore;
	CKEntity* _presentedEntity;
	NSMutableArray* _attachmentCollectionManagerArray;
	double _contentOffsetYShiftAfterKeyboardNotification;
	id _selfWeakWrapper;
	unsigned long long _undownloadedPhotoAttachmentCount;
	unsigned long long _downloadButtonState;
	unsigned long long _countOfPhotoAttachmentSections;

}

@property (nonatomic,retain) CKConversation * conversation;                                                             //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) CKDetailsTableView * tableView;                                                            //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * visualEffectView;                                                     //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,retain) CKDetailsGroupNameCell * groupNameCell;                                                    //@synthesize groupNameCell=_groupNameCell - In the implementation block
@property (nonatomic,retain) CKDetailsMapViewCell * mapViewCell;                                                        //@synthesize mapViewCell=_mapViewCell - In the implementation block
@property (nonatomic,retain) CKDetailsLocationShareCell * locationShareCell;                                            //@synthesize locationShareCell=_locationShareCell - In the implementation block
@property (nonatomic,retain) CKTranscriptDetailsResizableCell * locationSendCell;                                       //@synthesize locationSendCell=_locationSendCell - In the implementation block
@property (nonatomic,retain) CKTranscriptDetailsResizableCell * locationStartShareCell;                                 //@synthesize locationStartShareCell=_locationStartShareCell - In the implementation block
@property (nonatomic,retain) CKAvatarPickerViewController * avatarPickerViewController;                                 //@synthesize avatarPickerViewController=_avatarPickerViewController - In the implementation block
@property (nonatomic,retain) CKGroupRecipientSelectionController * addRecipientsController;                             //@synthesize addRecipientsController=_addRecipientsController - In the implementation block
@property (assign,nonatomic) unsigned long long currentAssetType;                                                       //@synthesize currentAssetType=_currentAssetType - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentSharedAssetsViewControllerArray;                                   //@synthesize currentSharedAssetsViewControllerArray=_currentSharedAssetsViewControllerArray - In the implementation block
@property (nonatomic,retain) CKDetailsContactsManager * contactsManager;                                                //@synthesize contactsManager=_contactsManager - In the implementation block
@property (assign,nonatomic) BOOL fmfEnabled;                                                                           //@synthesize fmfEnabled=_fmfEnabled - In the implementation block
@property (assign,nonatomic) BOOL fmfRestricted;                                                                        //@synthesize fmfRestricted=_fmfRestricted - In the implementation block
@property (nonatomic,retain) FMFMapViewController * mapViewController;                                                  //@synthesize mapViewController=_mapViewController - In the implementation block
@property (nonatomic,retain) UITextView * locationSharingTextView;                                                      //@synthesize locationSharingTextView=_locationSharingTextView - In the implementation block
@property (nonatomic,retain) CKDetailsDownloadAttachmentsHeaderFooterView * downloadAttachmentsFooterView;              //@synthesize downloadAttachmentsFooterView=_downloadAttachmentsFooterView - In the implementation block
@property (nonatomic,retain) CKBusinessInfoView * businessInfoView;                                                     //@synthesize businessInfoView=_businessInfoView - In the implementation block
@property (nonatomic,retain) NSTimer * fmfUpdateTimer;                                                                  //@synthesize fmfUpdateTimer=_fmfUpdateTimer - In the implementation block
@property (nonatomic,retain) CNContactStore * suggestionsEnabledContactStore;                                           //@synthesize suggestionsEnabledContactStore=_suggestionsEnabledContactStore - In the implementation block
@property (nonatomic,retain) CKEntity * presentedEntity;                                                                //@synthesize presentedEntity=_presentedEntity - In the implementation block
@property (nonatomic,retain) NSMutableArray * attachmentCollectionManagerArray;                                         //@synthesize attachmentCollectionManagerArray=_attachmentCollectionManagerArray - In the implementation block
@property (assign,nonatomic) BOOL isContactsSectionCollapsed;                                                           //@synthesize isContactsSectionCollapsed=_isContactsSectionCollapsed - In the implementation block
@property (assign,nonatomic) double contentOffsetYShiftAfterKeyboardNotification;                                       //@synthesize contentOffsetYShiftAfterKeyboardNotification=_contentOffsetYShiftAfterKeyboardNotification - In the implementation block
@property (nonatomic,retain) id selfWeakWrapper;                                                                        //@synthesize selfWeakWrapper=_selfWeakWrapper - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowDownloadMoreCell; 
@property (assign,nonatomic) BOOL didPerformPurgedAttachmentsCheck;                                                     //@synthesize didPerformPurgedAttachmentsCheck=_didPerformPurgedAttachmentsCheck - In the implementation block
@property (assign,nonatomic) unsigned long long undownloadedPhotoAttachmentCount;                                       //@synthesize undownloadedPhotoAttachmentCount=_undownloadedPhotoAttachmentCount - In the implementation block
@property (assign,nonatomic) unsigned long long downloadButtonState;                                                    //@synthesize downloadButtonState=_downloadButtonState - In the implementation block
@property (assign,nonatomic) unsigned long long countOfPhotoAttachmentSections;                                         //@synthesize countOfPhotoAttachmentSections=_countOfPhotoAttachmentSections - In the implementation block
@property (assign,nonatomic) BOOL isDisplayingPhotos;                                                                   //@synthesize isDisplayingPhotos=_isDisplayingPhotos - In the implementation block
@property (assign,nonatomic,__weak) id<CKDetailsControllerDelegate> detailsControllerDelegate;                          //@synthesize detailsControllerDelegate=_detailsControllerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FMFMapViewController *)mapViewController;
-(void)sharedAssetsControllerContentSizeDidChange:(id)arg1 ;
-(void)sharedAssetsController:(id)arg1 didDeleteAttachmentItems:(id)arg2 ;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3 ;
-(CKConversation *)conversation;
-(id)initWithConversation:(id)arg1 ;
-(void)setConversation:(CKConversation *)arg1 ;
-(CKAvatarPickerViewController *)avatarPickerViewController;
-(void)setAvatarPickerViewController:(CKAvatarPickerViewController *)arg1 ;
-(void)setDetailsControllerDelegate:(id<CKDetailsControllerDelegate>)arg1 ;
-(void)sendCurrentLocation;
-(void)setContactsManager:(CKDetailsContactsManager *)arg1 ;
-(CKDetailsContactsManager *)contactsManager;
-(CNContactStore *)suggestionsEnabledContactStore;
-(void)contactsManagerViewModelsDidChange:(id)arg1 ;
-(void)contactsManager:(id)arg1 didRequestCallTypeForEntity:(id)arg2 addresses:(id)arg3 abLabels:(id)arg4 faceTimeAudioEnabled:(BOOL)arg5 ;
-(void)showMapkitBusinessData;
-(void)setSuggestionsEnabledContactStore:(CNContactStore *)arg1 ;
-(void)_didFetchAttachments:(id)arg1 ;
-(void)setupFMF;
-(void)setCountOfPhotoAttachmentSections:(unsigned long long)arg1 ;
-(void)setCurrentSharedAssetsViewControllerArray:(NSMutableArray *)arg1 ;
-(void)setAttachmentCollectionManagerArray:(NSMutableArray *)arg1 ;
-(NSMutableArray *)attachmentCollectionManagerArray;
-(void)_handleKeyboardWillShowNotification:(id)arg1 ;
-(void)_handleKeyboardWillHideNotification:(id)arg1 ;
-(void)_handlePurgedAttachmentDownloadNotification:(id)arg1 ;
-(void)_lastAddressedHandleUpdateNotification:(id)arg1 ;
-(void)handleDoneButton:(id)arg1 ;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
-(void)setupContactsManager;
-(BOOL)isContactsSectionCollapsible;
-(void)setIsContactsSectionCollapsed:(BOOL)arg1 ;
-(void)_resetPurgedAttachmentCount;
-(CKDetailsGroupNameCell *)groupNameCell;
-(NSTimer *)fmfUpdateTimer;
-(id<CKDetailsControllerDelegate>)detailsControllerDelegate;
-(void)setContentOffsetYShiftAfterKeyboardNotification:(double)arg1 ;
-(double)contentOffsetYShiftAfterKeyboardNotification;
-(UITextView *)locationSharingTextView;
-(void)setLocationSharingTextView:(UITextView *)arg1 ;
-(unsigned long long)countOfPhotoAttachmentSections;
-(BOOL)shouldShowEnhancedGroupFeatures;
-(BOOL)shouldShowFMFView;
-(long long)visibleContactsRows;
-(BOOL)conversationHasLeft;
-(BOOL)fmfEnabled;
-(id)groupNameCellForIndexPath:(id)arg1 ;
-(id)fmfViewControllerCellForIndexPath:(id)arg1 ;
-(id)contactsManagerCellForIndexPath:(id)arg1 ;
-(id)chatOptionsCellForIndexPath:(id)arg1 ;
-(id)locationShareCellForIndexPath:(id)arg1 ;
-(id)leaveCellForIndexPath:(id)arg1 ;
-(id)segmentedControlCellForIndexPath:(id)arg1 ;
-(id)sharedAssetsViewControllerCellForIndexPath:(id)arg1 ;
-(id)simTypeCellForIndexPath:(id)arg1 ;
-(long long)rowForAddMemberCell;
-(void)initializeSharedAssetsViewControllerIfNecessaryForIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)currentSharedAssetsViewControllerArray;
-(BOOL)_canLeaveConversation;
-(BOOL)shouldShowBusinessInfoFooter;
-(BOOL)shouldShowDownloadMoreCell;
-(BOOL)shouldDisplayHeaderForSection:(unsigned long long)arg1 ;
-(BOOL)shouldShowActiveDeviceSwitchFooter;
-(void)initializeLocationSharingTextViewIfNecessary;
-(void)initializeBusinessInfoViewIfNecessary;
-(CKBusinessInfoView *)businessInfoView;
-(unsigned long long)downloadButtonState;
-(BOOL)isDisplayingPhotos;
-(id)locationFooterViewForSection:(long long)arg1 ;
-(id)businessInfoFooterViewForSection:(long long)arg1 ;
-(id)downloadAttachmentsFooterViewForSection:(long long)arg1 ;
-(void)setDownloadAttachmentsFooterView:(CKDetailsDownloadAttachmentsHeaderFooterView *)arg1 ;
-(void)_updateDownloadFooterView;
-(void)_presentRemoveRecipientSheetForHandle:(id)arg1 fromView:(id)arg2 ;
-(void)presentFullFMFMapViewController;
-(void)_showContactCardForEntity:(id)arg1 fromView:(id)arg2 ;
-(BOOL)isContactsSectionCollapsed;
-(void)expandContactsSection;
-(void)collapseContactsSection;
-(void)presentGroupRecipientSelectionController;
-(void)presentSharingActionSheetCurrentlySharing:(BOOL)arg1 fromView:(id)arg2 ;
-(void)presentLeaveActionSheetFromView:(id)arg1 ;
-(BOOL)fmfRestricted;
-(void)setBusinessInfoView:(CKBusinessInfoView *)arg1 ;
-(id)downloadAttachmentsText;
-(id)downloadButtonText;
-(CKDetailsDownloadAttachmentsHeaderFooterView *)downloadAttachmentsFooterView;
-(void)setGroupNameCell:(CKDetailsGroupNameCell *)arg1 ;
-(id)fmfHandlesFromIMHandles:(id)arg1 ;
-(void)setMapViewController:(FMFMapViewController *)arg1 ;
-(CKDetailsMapViewCell *)mapViewCell;
-(void)setMapViewCell:(CKDetailsMapViewCell *)arg1 ;
-(unsigned long long)currentAssetType;
-(long long)rowForShowMoreContactsCell;
-(void)_configureSeparatorForCell:(id)arg1 indexPath:(id)arg2 ;
-(CKTranscriptDetailsResizableCell *)locationSendCell;
-(CKDetailsLocationShareCell *)locationShareCell;
-(CKTranscriptDetailsResizableCell *)locationStartShareCell;
-(void)doNotDisturbValueChange:(id)arg1 ;
-(void)readReceiptsSwitchValueChanged:(id)arg1 ;
-(id)childViewController:(id)arg1 cellForIndexPath:(id)arg2 ;
-(void)assetsTabDidChange:(id)arg1 ;
-(void)setFmfEnabled:(BOOL)arg1 ;
-(void)setFmfRestricted:(BOOL)arg1 ;
-(void)handleActiveDeviceChanged:(id)arg1 ;
-(void)handleFriendshipStatusChanged:(id)arg1 ;
-(void)setupFMFTimerIfNecessary;
-(BOOL)_fmfExpirationDateIsValid;
-(void)updateTimedFMFState;
-(void)setFmfUpdateTimer:(NSTimer *)arg1 ;
-(id)currentlyActiveFMFDevice;
-(void)handleCancelAction:(id)arg1 ;
-(void)handleDoneAction:(id)arg1 ;
-(void)setAddRecipientsController:(CKGroupRecipientSelectionController *)arg1 ;
-(CKGroupRecipientSelectionController *)addRecipientsController;
-(void)setCurrentAssetType:(unsigned long long)arg1 ;
-(void)adjustContentOffsetReloadingSharedAssetsContentViewCell;
-(void)_requestCallTypeForEntity:(id)arg1 withAddresses:(id)arg2 withLabels:(id)arg3 faceTimeAudioEnabled:(BOOL)arg4 ;
-(void)setIsDisplayingPhotos:(BOOL)arg1 ;
-(void)setPresentedEntity:(CKEntity *)arg1 ;
-(void)_toggleSharingStateFromABCard;
-(CKEntity *)presentedEntity;
-(void)_updateSharedAssetsControllersForScrollView:(id)arg1 cell:(id)arg2 ;
-(CGSize)screenSize;
-(unsigned long long)_purgedAttachmentCount;
-(void)setDownloadButtonState:(unsigned long long)arg1 ;
-(void)_insertRowForNewlyDownloadedAttachmentsWithTransferGUIDs:(id)arg1 ;
-(void)detailsAddGroupNameView:(id)arg1 didCommitGroupName:(id)arg2 ;
-(void*)annotationABRecordForHandle:(id)arg1 ;
-(void)attachmentCollectionManagerDidUpdateAttachmentItems:(id)arg1 ;
-(void)contactsCellDidTapFaceTimeVideoButton:(id)arg1 ;
-(void)contactsCellDidTapPhoneButton:(id)arg1 ;
-(void)contactsCellDidTapMessagesButton:(id)arg1 ;
-(void)businessInfoView:(id)arg1 infoButtonTapped:(id)arg2 ;
-(void)userDidTapDownloadForAttachmentsFooterView:(id)arg1 ;
-(BOOL)shouldDisplayFooterForSection:(unsigned long long)arg1 ;
-(id)editConversationCellForIndexPath:(id)arg1 ;
-(void)handleTapOnChromeAvatar:(id)arg1 ;
-(BOOL)shouldShowGroupAddNameField;
-(void)avatarPickerViewControllerDidSelectEntity:(id)arg1 ;
-(id)annotationImageForHandle:(id)arg1 ;
-(void)setLocationShareCell:(CKDetailsLocationShareCell *)arg1 ;
-(void)setLocationSendCell:(CKTranscriptDetailsResizableCell *)arg1 ;
-(void)setLocationStartShareCell:(CKTranscriptDetailsResizableCell *)arg1 ;
-(id)selfWeakWrapper;
-(void)setSelfWeakWrapper:(id)arg1 ;
-(BOOL)didPerformPurgedAttachmentsCheck;
-(void)setDidPerformPurgedAttachmentsCheck:(BOOL)arg1 ;
-(unsigned long long)undownloadedPhotoAttachmentCount;
-(void)setUndownloadedPhotoAttachmentCount:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(CKDetailsTableView *)tableView;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(id)indexPathForCell:(id)arg1 ;
-(UIVisualEffectView *)visualEffectView;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3 ;
-(void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(id)contentScrollView;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)setTableView:(CKDetailsTableView *)arg1 ;
-(id)inputAccessoryViewController;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
@end

