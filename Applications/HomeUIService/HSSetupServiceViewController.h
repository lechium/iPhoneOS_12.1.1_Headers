//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HSSetupIdentifiableAccessoryViewController.h"

#import "HSServiceSetupStep.h"
#import "HUChildServiceModuleControllerDelegate.h"
#import "HUEditRoomViewControllerPresentationDelegate.h"
#import "HUIconPickerViewControllerDelegate.h"
#import "HUNameAndIconEditorCellDelegate.h"
#import "HUSwitchCellDelegate.h"

@class HFItemBuilder<HFServiceLikeBuilder>, HFRoomBuilder, HSSetupServiceItemManager, HUChildServiceItemModuleController, NAFuture, NSMutableSet, NSString;

@interface HSSetupServiceViewController : HSSetupIdentifiableAccessoryViewController <HUEditRoomViewControllerPresentationDelegate, HUSwitchCellDelegate, HUNameAndIconEditorCellDelegate, HUIconPickerViewControllerDelegate, HUChildServiceModuleControllerDelegate, HSServiceSetupStep>
{
    id <HSSetupStepDelegate> _delegate;	// 8 = 0x8
    HFItemBuilder<HFServiceLikeBuilder> *_serviceLikeBuilder;	// 16 = 0x10
    NSMutableSet *_moduleControllers;	// 24 = 0x18
    HUChildServiceItemModuleController *_valveModuleController;	// 32 = 0x20
    NSString *_editedName;	// 40 = 0x28
}

@property(retain, nonatomic) NSString *editedName; // @synthesize editedName=_editedName;
@property(retain, nonatomic) HUChildServiceItemModuleController *valveModuleController; // @synthesize valveModuleController=_valveModuleController;
@property(retain, nonatomic) NSMutableSet *moduleControllers; // @synthesize moduleControllers=_moduleControllers;
@property(readonly, nonatomic) HFItemBuilder<HFServiceLikeBuilder> *serviceLikeBuilder; // @synthesize serviceLikeBuilder=_serviceLikeBuilder;
@property(nonatomic) __weak id <HSSetupStepDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;	// IMP=0x000000010001b270
- (id)childServiceEditorModuleController:(id)arg1 didSelectItem:(id)arg2;	// IMP=0x000000010001b104
- (void)iconPicker:(id)arg1 didPickIconDescriptor:(id)arg2;	// IMP=0x000000010001afe4
- (void)iconPickerDidCancel:(id)arg1;	// IMP=0x000000010001afd0
- (void)nameAndIconEditorCellDidTapIcon:(id)arg1;	// IMP=0x000000010001adf0
@property(readonly, nonatomic) long long setupState;
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject; // @dynamic homeKitObject;
- (void)switchCell:(id)arg1 didTurnOn:(_Bool)arg2;	// IMP=0x000000010001aab8
- (void)editRoomViewControllerDidFinish:(id)arg1 withNewRoom:(id)arg2;	// IMP=0x000000010001a91c
- (void)_updateCheckedStateForAssociatedServiceTypeCell:(id)arg1 item:(id)arg2;	// IMP=0x000000010001a814
- (id)commitChanges;	// IMP=0x000000010001a420
- (void)_updateAndSanitizeNameFromTextField;	// IMP=0x000000010001a18c
@property(readonly, nonatomic) NSString *savedName;
@property(readonly, nonatomic) _Bool supportsCustomIconEditing;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000100019478
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;	// IMP=0x000000010001938c
- (void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3;	// IMP=0x000000010001931c
- (void)textFieldDidEndEditing:(id)arg1 item:(id)arg2;	// IMP=0x00000001000192e4
- (void)textFieldDidBeginEditing:(id)arg1 item:(id)arg2;	// IMP=0x0000000100019274
- (id)currentTextForTextField:(id)arg1 item:(id)arg2;	// IMP=0x00000001000191d0
- (id)defaultTextForTextField:(id)arg1 item:(id)arg2;	// IMP=0x00000001000191c4
- (_Bool)shouldManageTextFieldForItem:(id)arg1;	// IMP=0x00000001000191bc
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(_Bool)arg4;	// IMP=0x0000000100018bd8
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;	// IMP=0x000000010001889c
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;	// IMP=0x0000000100018618
- (id)itemModuleControllers;	// IMP=0x00000001000184c8
@property(retain, nonatomic) HFRoomBuilder *prepopulatedRoomBuilder;
- (void)viewDidLoad;	// IMP=0x0000000100018268
- (id)initWithBuilderItem:(id)arg1 serviceLikeBuilder:(id)arg2 configurationProgress:(CDStruct_3999e4e2)arg3;	// IMP=0x00000001000180fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HSSetupServiceItemManager *itemManager; // @dynamic itemManager;
@property(readonly, nonatomic) NAFuture *readyToDisplayFuture;
@property(readonly) Class superclass;

@end

