/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 1, 2019 at 6:53:39 PM Mountain Standard Time
* Operating System: Version 12.1.1 (Build 16C5050a)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UITableViewDropAnimation.h>

@class UITableViewCell, UIDragPreviewParameters;

@interface _UITableViewDropAnimationToCell : _UITableViewDropAnimation {

	UITableViewCell* _cell;
	UIDragPreviewParameters* _previewParameters;

}

@property (assign,nonatomic,__weak) UITableViewCell * cell;                            //@synthesize cell=_cell - In the implementation block
@property (nonatomic,retain) UIDragPreviewParameters * previewParameters;              //@synthesize previewParameters=_previewParameters - In the implementation block
-(UITableViewCell *)cell;
-(id)initWithDragItem:(id)arg1 cell:(id)arg2 previewParameters:(id)arg3 ;
-(void)setCell:(UITableViewCell *)arg1 ;
-(UIDragPreviewParameters *)previewParameters;
-(void)setPreviewParameters:(UIDragPreviewParameters *)arg1 ;
@end
