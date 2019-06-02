/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIDropInteractionDelegate_Private.h>
#import <UIKitCore/_UITableViewDropCoordinatorDelegate.h>

@protocol _UITableViewDropControllerDelegate, UIDropSession;
@class UIDropInteraction, UITableView, NSIndexPath, UITableViewDropProposal, NSMapTable, NSString;

@interface _UITableViewDropController : NSObject <UIDropInteractionDelegate_Private, _UITableViewDropCoordinatorDelegate> {

	BOOL _canOnlyHandleReordering;
	UIDropInteraction* _dropInteraction;
	UITableView*<_UITableViewDropControllerDelegate> _tableView;
	unsigned long long _defaultDropOperation;
	NSIndexPath* _targetIndexPath;
	UITableViewDropProposal* _dropProposal;
	id<UIDropSession> _dropSession;
	long long _ignoringDragsCount;
	NSMapTable* _dragItemDropAnimations;

}

@property (nonatomic,retain) UIDropInteraction * dropInteraction;                                            //@synthesize dropInteraction=_dropInteraction - In the implementation block
@property (assign,nonatomic,__weak) UITableView*<_UITableViewDropControllerDelegate> tableView;              //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) unsigned long long defaultDropOperation;                                        //@synthesize defaultDropOperation=_defaultDropOperation - In the implementation block
@property (getter=isTrackingDrag,nonatomic,readonly) BOOL trackingDrag; 
@property (nonatomic,retain) NSIndexPath * targetIndexPath;                                                  //@synthesize targetIndexPath=_targetIndexPath - In the implementation block
@property (nonatomic,retain) UITableViewDropProposal * dropProposal;                                         //@synthesize dropProposal=_dropProposal - In the implementation block
@property (nonatomic,retain) id<UIDropSession> dropSession;                                                  //@synthesize dropSession=_dropSession - In the implementation block
@property (nonatomic,readonly) BOOL shouldIgnoreDrags; 
@property (assign,nonatomic) long long ignoringDragsCount;                                                   //@synthesize ignoringDragsCount=_ignoringDragsCount - In the implementation block
@property (nonatomic,retain) NSMapTable * dragItemDropAnimations;                                            //@synthesize dragItemDropAnimations=_dragItemDropAnimations - In the implementation block
@property (assign,nonatomic) BOOL canOnlyHandleReordering;                                                   //@synthesize canOnlyHandleReordering=_canOnlyHandleReordering - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isActive;
-(UITableView*<_UITableViewDropControllerDelegate>)tableView;
-(id)initWithTableView:(id)arg1 ;
-(NSIndexPath *)targetIndexPath;
-(void)setTargetIndexPath:(NSIndexPath *)arg1 ;
-(UITableViewDropProposal *)dropProposal;
-(id<UIDropSession>)dropSession;
-(void)setDropSession:(id<UIDropSession>)arg1 ;
-(void)setDropInteraction:(UIDropInteraction *)arg1 ;
-(void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2 ;
-(id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2 ;
-(void)dropInteraction:(id)arg1 performDrop:(id)arg2 ;
-(void)dropInteraction:(id)arg1 concludeDrop:(id)arg2 ;
-(void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2 ;
-(id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3 ;
-(void)dropInteraction:(id)arg1 item:(id)arg2 willAnimateDropWithAnimator:(id)arg3 ;
-(long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2 ;
-(UIDropInteraction *)dropInteraction;
-(void)setTableView:(UITableView*<_UITableViewDropControllerDelegate>)arg1 ;
-(void)setupDragInteraction;
-(void)uninstallFromTableView;
-(void)resetAllDragState;
-(BOOL)isTrackingDrag;
-(unsigned long long)defaultDropOperation;
-(BOOL)shouldIgnoreDrags;
-(void)resetTrackingState;
-(long long)ignoringDragsCount;
-(void)setIgnoringDragsCount:(long long)arg1 ;
-(void)updateTargetIndexPathAndDropProposalForSession:(id)arg1 ;
-(void)setDropProposal:(UITableViewDropProposal *)arg1 ;
-(void)setDefaultDropOperation:(unsigned long long)arg1 ;
-(void)setCanOnlyHandleReordering:(BOOL)arg1 ;
-(void)setDragItemDropAnimations:(NSMapTable *)arg1 ;
-(BOOL)canOnlyHandleReordering;
-(NSMapTable *)dragItemDropAnimations;
-(id)animateDragItem:(id)arg1 toTarget:(id)arg2 ;
-(id)defaultAnimatorForDragItem:(id)arg1 ;
-(id)animateDragItem:(id)arg1 toCell:(id)arg2 withPreviewParameters:(id)arg3 ;
-(BOOL)deletePlaceholder:(id)arg1 ;
-(BOOL)commitPlaceholderInsertionWithContext:(id)arg1 dataSourceUpdates:(/*^block*/id)arg2 ;
-(id)animateDragItem:(id)arg1 intoRowAtIndexPath:(id)arg2 rect:(CGRect)arg3 ;
-(id)animateDragItem:(id)arg1 toRowAtIndexPath:(id)arg2 ;
-(void)insertPlaceholderAtIndexPath:(id)arg1 withContext:(id)arg2 previewParametersProvider:(/*^block*/id)arg3 ;
-(void)beginIgnoringDrags;
-(void)endIgnoringDrags;
@end

