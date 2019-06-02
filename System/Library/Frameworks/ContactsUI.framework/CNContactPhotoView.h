/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:45:09 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKitCore/UIControl.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UIDropInteractionDelegate.h>
#import <libobjc.A.dylib/QLPreviewControllerDelegate.h>
#import <libobjc.A.dylib/QLPreviewControllerDataSource.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>

@protocol CNPresenterDelegate, CNContactPhotoViewDelegate;
@class NSArray, CNAvatarView, CNMutableContact, PRLikeness, UIButton, UIImageView, UITapGestureRecognizer, UILongPressGestureRecognizer, UIDropInteraction, NSString;

@interface CNContactPhotoView : UIControl <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIDropInteractionDelegate, QLPreviewControllerDelegate, QLPreviewControllerDataSource, CNAvatarViewDelegate> {

	BOOL _editing;
	BOOL _modified;
	BOOL _shouldAllowTakePhotoAction;
	BOOL _prohibitsPersonaFetch;
	BOOL _isAnimatingBounce;
	BOOL _acceptsImageDrop;
	NSArray* _contacts;
	CNAvatarView* _avatarView;
	id<CNPresenterDelegate> _presenterDelegate;
	id<CNContactPhotoViewDelegate> _delegate;
	CNMutableContact* _pendingEditContact;
	PRLikeness* _originalLikeness;
	PRLikeness* _currentLikeness;
	UIButton* _addPhotoButton;
	UIButton* _editPhotoButton;
	UIImageView* _attributionImageView;
	NSArray* _variableConstraints;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	UIDropInteraction* _dropInteraction;

}

@property (nonatomic,readonly) CNMutableContact * mutableContact; 
@property (nonatomic,retain) CNMutableContact * pendingEditContact;                                  //@synthesize pendingEditContact=_pendingEditContact - In the implementation block
@property (nonatomic,retain) PRLikeness * originalLikeness;                                          //@synthesize originalLikeness=_originalLikeness - In the implementation block
@property (nonatomic,retain) PRLikeness * currentLikeness;                                           //@synthesize currentLikeness=_currentLikeness - In the implementation block
@property (assign,nonatomic) BOOL prohibitsPersonaFetch;                                             //@synthesize prohibitsPersonaFetch=_prohibitsPersonaFetch - In the implementation block
@property (nonatomic,retain) CNAvatarView * avatarView;                                              //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UIButton * addPhotoButton;                                              //@synthesize addPhotoButton=_addPhotoButton - In the implementation block
@property (nonatomic,retain) UIButton * editPhotoButton;                                             //@synthesize editPhotoButton=_editPhotoButton - In the implementation block
@property (nonatomic,retain) UIImageView * attributionImageView;                                     //@synthesize attributionImageView=_attributionImageView - In the implementation block
@property (assign,nonatomic) BOOL isAnimatingBounce;                                                 //@synthesize isAnimatingBounce=_isAnimatingBounce - In the implementation block
@property (assign,nonatomic) BOOL modified;                                                          //@synthesize modified=_modified - In the implementation block
@property (nonatomic,retain) NSArray * variableConstraints;                                          //@synthesize variableConstraints=_variableConstraints - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapGestureRecognizer;                          //@synthesize tapGestureRecognizer=_tapGestureRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;              //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIDropInteraction * dropInteraction;                                    //@synthesize dropInteraction=_dropInteraction - In the implementation block
@property (assign,nonatomic) BOOL acceptsImageDrop;                                                  //@synthesize acceptsImageDrop=_acceptsImageDrop - In the implementation block
@property (nonatomic,retain) NSArray * contacts;                                                     //@synthesize contacts=_contacts - In the implementation block
@property (assign,getter=isEditing,nonatomic) BOOL editing;                                          //@synthesize editing=_editing - In the implementation block
@property (nonatomic,readonly) BOOL shouldAllowTakePhotoAction;                                      //@synthesize shouldAllowTakePhotoAction=_shouldAllowTakePhotoAction - In the implementation block
@property (assign,nonatomic,__weak) id<CNPresenterDelegate> presenterDelegate;                       //@synthesize presenterDelegate=_presenterDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactPhotoViewDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedPasteboardTypes;
+(CGSize)defaultSize;
+(BOOL)requiresConstraintBasedLayout;
-(BOOL)hasPhoto;
-(id)initWithFrame:(CGRect)arg1 monogrammerStyle:(long long)arg2 shouldAllowTakePhotoAction:(BOOL)arg3 threeDTouchEnabled:(BOOL)arg4 allowsImageDrops:(BOOL)arg5 imageRenderer:(id)arg6 ;
-(void)updateFontSizes;
-(void)menuWillHide:(id)arg1 ;
-(void)resetPhoto;
-(BOOL)prohibitsPersonaFetch;
-(NSArray *)variableConstraints;
-(BOOL)modified;
-(CNMutableContact *)mutableContact;
-(void)setPresenterDelegate:(id<CNPresenterDelegate>)arg1 ;
-(void)updatePhoto;
-(id<CNPresenterDelegate>)presenterDelegate;
-(void)disablePhotoTapGesture;
-(void)saveEdits;
-(void)_presentPhotoEditingSheet;
-(void)avatarTapped:(id)arg1 ;
-(void)longPressGesture:(id)arg1 ;
-(void)setAcceptsImageDrop:(BOOL)arg1 ;
-(void)setVariableConstraints:(NSArray *)arg1 ;
-(id)currentImageDataAndCropRect:(CGRect*)arg1 ;
-(PRLikeness *)currentLikeness;
-(PRLikeness *)originalLikeness;
-(CNMutableContact *)pendingEditContact;
-(void)saveEditsWithPendingContact:(id)arg1 ;
-(void)setHighlightedFrame:(BOOL)arg1 ;
-(id)currentImageData;
-(void)setModified:(BOOL)arg1 ;
-(void)setPendingEditContact:(CNMutableContact *)arg1 ;
-(void)setCurrentLikeness:(PRLikeness *)arg1 ;
-(void)setOriginalLikeness:(PRLikeness *)arg1 ;
-(void)updatePhotoAndNotifyDelegate:(BOOL)arg1 ;
-(BOOL)_isUsingCuratedPhoto;
-(UIButton *)addPhotoButton;
-(void)updateAttributionBadge;
-(UIImageView *)attributionImageView;
-(void)setAttributionImageView:(UIImageView *)arg1 ;
-(BOOL)shouldAllowTakePhotoAction;
-(id)_createImagePicker;
-(void)presentImagePicker:(id)arg1 withStyle:(long long)arg2 ;
-(id)_createImagePickerForEditingImageData:(id)arg1 withCropRect:(CGRect)arg2 ;
-(void)saveImagePickerMediaFromInfo:(id)arg1 toContact:(id)arg2 saveToCameraRoll:(BOOL)arg3 ;
-(void)_presentFullScreenPhoto:(id)arg1 ;
-(void)_bounceSmallPhoto;
-(id)previewPath;
-(BOOL)isAnimatingBounce;
-(void)setIsAnimatingBounce:(BOOL)arg1 ;
-(BOOL)acceptsImageDrop;
-(BOOL)isMeContact;
-(id)_localizedStringForProfileAction:(id)arg1 type:(unsigned long long)arg2 ;
-(void)_zoomContactPhoto;
-(void)setAddPhotoButton:(UIButton *)arg1 ;
-(void)setEditPhotoButton:(UIButton *)arg1 ;
-(void)setContacts:(NSArray *)arg1 ;
-(void)setTapGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(CNAvatarView *)avatarView;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
-(UITapGestureRecognizer *)tapGestureRecognizer;
-(id)contact;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(void)willBeginPreviewInteractionForAvatarView:(id)arg1 ;
-(NSArray *)contacts;
-(void)setProhibitsPersonaFetch:(BOOL)arg1 ;
-(UIButton *)editPhotoButton;
-(void)dealloc;
-(void)setDelegate:(id<CNContactPhotoViewDelegate>)arg1 ;
-(id<CNContactPhotoViewDelegate>)delegate;
-(void)updateConstraints;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 ;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)setDropInteraction:(UIDropInteraction *)arg1 ;
-(BOOL)dropInteraction:(id)arg1 canHandleSession:(id)arg2 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(UIDropInteraction *)dropInteraction;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)previewControllerDidDismiss:(id)arg1 ;
-(CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3 ;
-(id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(CGRect*)arg3 ;
-(id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2 ;
-(long long)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(id)_api_dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
@end
