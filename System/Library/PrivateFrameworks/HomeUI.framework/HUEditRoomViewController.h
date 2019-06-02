/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:49:40 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUItemTableViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/HUWallpaperPickerViewControllerDelegate.h>
#import <libobjc.A.dylib/HUWallpaperEditingViewControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/HUWallpaperThumbnailCellDelegate.h>
#import <libobjc.A.dylib/HUWallpaperPickerInlineViewControllerDelegate.h>

@protocol HUEditRoomViewControllerPresentationDelegate, HUEditRoomViewControllerAddRoomDelegate;
@class HFRoomBuilder, HUZoneModuleController, HUWallpaperPickerInlineViewController, HUEditRoomItemManager, HUEditableTextCell, UIBarButtonItem, NSString;

@interface HUEditRoomViewController : HUItemTableViewController <UITextFieldDelegate, HUWallpaperPickerViewControllerDelegate, HUWallpaperEditingViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, HUWallpaperThumbnailCellDelegate, HUWallpaperPickerInlineViewControllerDelegate> {

	HFRoomBuilder* _roomBuilder;
	id<HUEditRoomViewControllerPresentationDelegate> _presentationDelegate;
	id<HUEditRoomViewControllerAddRoomDelegate> _addRoomDelegate;
	HUZoneModuleController* _zoneModuleController;
	HUWallpaperPickerInlineViewController* _wallpaperPickerController;
	HUEditRoomItemManager* _roomItemManager;
	HUEditableTextCell* _nameCell;
	UIBarButtonItem* _savedButtonBarItem;

}

@property (nonatomic,retain) HUZoneModuleController * zoneModuleController;                                               //@synthesize zoneModuleController=_zoneModuleController - In the implementation block
@property (nonatomic,retain) HUWallpaperPickerInlineViewController * wallpaperPickerController;                           //@synthesize wallpaperPickerController=_wallpaperPickerController - In the implementation block
@property (assign,nonatomic,__weak) HUEditRoomItemManager * roomItemManager;                                              //@synthesize roomItemManager=_roomItemManager - In the implementation block
@property (assign,nonatomic,__weak) HUEditableTextCell * nameCell;                                                        //@synthesize nameCell=_nameCell - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * savedButtonBarItem;                                                        //@synthesize savedButtonBarItem=_savedButtonBarItem - In the implementation block
@property (nonatomic,readonly) HFRoomBuilder * roomBuilder;                                                               //@synthesize roomBuilder=_roomBuilder - In the implementation block
@property (nonatomic,__weak,readonly) id<HUEditRoomViewControllerPresentationDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (nonatomic,__weak,readonly) id<HUEditRoomViewControllerAddRoomDelegate> addRoomDelegate;                        //@synthesize addRoomDelegate=_addRoomDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateTitle;
-(id<HUEditRoomViewControllerPresentationDelegate>)presentationDelegate;
-(void)wallpaperEditing:(id)arg1 didFinishWithWallpaper:(id)arg2 image:(id)arg3 ;
-(void)wallpaperEditingDidCancel:(id)arg1 ;
-(void)wallpaperPickerRequestOpenWallpaperEditor:(id)arg1 ;
-(void)wallpaperPicker:(id)arg1 didSelectWallpaper:(id)arg2 withImage:(id)arg3 ;
-(void)wallpaperPicker:(id)arg1 didReceiveDroppedImage:(id)arg2 ;
-(HFRoomBuilder *)roomBuilder;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(void)wallpaperPickerDidFinish:(id)arg1 wallpaper:(id)arg2 image:(id)arg3 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(id)itemModuleControllers;
-(void)doneButtonPressed:(id)arg1 ;
-(void)addButtonPressed:(id)arg1 ;
-(HUEditableTextCell *)nameCell;
-(void)setSavedButtonBarItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)savedButtonBarItem;
-(void)setNameCell:(HUEditableTextCell *)arg1 ;
-(void)updateWallpaper:(id)arg1 image:(id)arg2 ;
-(void)wallpaperThumbnailCell:(id)arg1 didReceiveDroppedImage:(id)arg2 ;
-(unsigned long long)automaticDisablingReasonsForItem:(id)arg1 ;
-(id<HUEditRoomViewControllerAddRoomDelegate>)addRoomDelegate;
-(void)_resignTextFieldFirstResponder;
-(HUZoneModuleController *)zoneModuleController;
-(HUEditRoomItemManager *)roomItemManager;
-(void)nameFieldTextChanged:(id)arg1 ;
-(HUWallpaperPickerInlineViewController *)wallpaperPickerController;
-(void)presentWallpaperEditingViewControllerWithImage:(id)arg1 wallpaper:(id)arg2 ;
-(id)_allTextFields;
-(id)initWithRoomBuilder:(id)arg1 presentationDelegate:(id)arg2 addRoomDelegate:(id)arg3 ;
-(void)setZoneModuleController:(HUZoneModuleController *)arg1 ;
-(void)setWallpaperPickerController:(HUWallpaperPickerInlineViewController *)arg1 ;
-(void)setRoomItemManager:(HUEditRoomItemManager *)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)cancelButtonPressed:(id)arg1 ;
@end

